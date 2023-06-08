//
// Created by Lenovo on 2023/5/25.
//

// You may need to build the project (run Qt uic code generator) to get "ui_MainWidget.h" resolved

#include "mainwidget.h"
#include "ui_MainWidget.h"
#include "CheckIdWidget.h"

#include <QtMath>

#include<QNetworkProxy>
#include<QMessageBox>
#include<QProcess>
#include<QThread>
#include<QDateTime>

#define MYLOG qDebug() << "[" << __FILE__ << ":" << __LINE__ << ":" << QThread::currentThread() << __func__ << QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss:zzz")<< "]"

MainWidget::MainWidget(QWidget *parent) :
        QWidget(parent),
        ui(new Ui::MainWidget),
        chart(new QChart),
        tip(0),
        timer(new QTimer),
        count(0),
        isStopping(false)
{
    ui->setupUi(this);
    setWindowTitle("UWB二维定位");

    qRegisterMetaType<QVector<Show_Info>>("QVector<Show_Info>");

    for(int i = 0;i < lineNumber;i++)
    {
        scatterSeries[i] = nullptr;
        lineSeries[i] = nullptr;
    }

    sqliteTools = new SQLiteTools(":/uwb.db","conn_02");
    sqliteTools->initDataBase();

    initUI();

    initSlot();

    startTimer();

    startThread();


}

MainWidget::~MainWidget()
{
    delete ui;
    for(int i = 0;i < lineNumber;i++)
    {
        delete scatterSeries[i];
        delete lineSeries[i];
        scatterSeries[i] = nullptr;
        lineSeries[i] = nullptr;
    }
}

void MainWidget::wheelEvent(QWheelEvent *event)
{
    if (event->angleDelta().y() > 0) {
        chart->zoom(1.1);
    } else {
        chart->zoom(10.0/11);
    }

    QWidget::wheelEvent(event);
}

void MainWidget::initUI()
{
    resize(700,620);
//    checkIdWidget = new CheckIdWidget();

    initChart();
}

void MainWidget::initChart()
{
    //网格化
    showGrid();
    for(int i = 0;i < lineNumber;i++)
    {
        scatterSeries[i] = new QScatterSeries;

        lineSeries[i] = new QLineSeries;

        // 设置数据点的大小为 17 像素
        scatterSeries[i]->setMarkerSize(15);
        lineSeries[i]->setMarkerSize(2);
        if(i == 0)
        {
            scatterSeries[i]->setColor(QColor(colorVec[0]));
            lineSeries[i]->setColor(QColor(colorVec[0]));
        }
        else{

            scatterSeries[i]->setColor(QColor(colorVec[1]));
            lineSeries[i]->setColor(QColor(colorVec[1]));
        }

        connect(scatterSeries[i], SIGNAL(hovered(QPointF, bool)),this, SLOT(tipSlot(QPointF,bool)));

        chart->addSeries(scatterSeries[i]);
        chart->addSeries(lineSeries[i]);
    }
    chart->createDefaultAxes();
    chart->axisY()->setRange(beginX, overX);
    chart->axisX()->setRange(beginY, overY);

    chart->axisX()->setTitleFont(QFont("Microsoft YaHei", 10, QFont::Normal, true));
    chart->axisY()->setTitleFont(QFont("Microsoft YaHei", 10, QFont::Normal, true));

    chart->axisX()->setTitleText("");
    chart->axisX()->setTitleText("north--->");

    //显示网格
    chart->axisX()->setGridLineVisible(s_Flag);
    chart->axisY()->setGridLineVisible(s_Flag);


    chart->axisX()->setLabelsColor(QColor("#242424"));
    chart->axisY()->setLabelsColor(QColor("#242424"));

    chart->axisX()->setTitleBrush(QBrush(QColor("#242424")));

    /* hide legend */
    chart->legend()->hide();

    chart->setBackgroundBrush(QBrush(QColor("#ffffff")));

    chartView = new ChartView(chart);

    chartView->setRenderHint(QPainter::Antialiasing);

    ui->mainHorLayout->addWidget(chartView);
}

void MainWidget::initSlot()
{
    connect(timer, SIGNAL(timeout()), this, SLOT(timerSlot()));

}


void MainWidget::showCurPoint(QVector<Show_Info> data)
{
    int dataSize = data.size();
    if(lineNumber < dataSize)
    {
        dataSize = lineNumber;
    }

    for(int i = 0;i < dataSize;i++)
    {
        try{

            int setSize = set.size();
            set.insert(data[i].id);
            if(setSize != set.size())
            {
                mapPoint[data[i].id] = onlyPoint;
            }

            QList<QPointF> pointTwo = mapPoint[data[i].id];

            pointTwo.append(QPointF(data[i].x ,data[i].y));

            QList<QPointF> pointThree;
            pointThree.append(QPointF(data[i].x ,data[i].y));

            scatterSeries[i]->replace(pointThree);
            scatterSeries[i]->setPointsVisible(true);

                lineSeries[i]->replace(pointTwo);
                lineSeries[i]->setPointsVisible(true);

            while(pointTwo.size() >= 30)
            {
                pointTwo.removeFirst();
            }

            mapPoint[data[i].id] = pointTwo;
        }
        catch(std::exception ex)
        {
            MYLOG<<ex.what();
            continue;
        }

    }
    emit mySignalCurData(data);

}

void MainWidget::showPoints(const QVector<Show_Info> &points)
{
    allPoints = points;

    QVector<QPointF> onePoint;

    for(int i = 0; i < points.size();i++)
    {
        onePoint.append(QPointF(points[i].x,points[i].y));

    }

    if(points.size() > 0 && points[0].careerId == 1)
    {

        flag = 0;
    }
    if(flag < lineNumber)
    {
        lineSeries[flag]->replace(onePoint);
        lineSeries[flag]->setPointsVisible(true);
    }else{
        flag = 1;
    }

    flag++;

}

void MainWidget::timerSlot()
{
    if (QObject::sender() == timer) {
        updateLocus();
    }
}

void MainWidget::buttonSlot()
{

    if (!isStopping) {
        timer->start();
    } else {

        timer->stop();
    }

    isStopping = !isStopping;
    for(int i = 0;i < lineNumber;i++)
    {
        lineSeries[i]->clear();
    }
}

void MainWidget::tipSlot(QPointF position, bool isHovering)
{
    if (tip == 0)
        tip = new Callout(chart);

    if (isHovering) {
        tip->setText(QString("X: %1 \nY: %2").arg(position.x()).arg(position.y()));
        tip->setAnchor(position);
        tip->setZValue(11);
        tip->updateGeometry();
        tip->show();
    } else {
        tip->hide();
    }
}

void MainWidget::updateLocus()
{

    if(cnt < allPoints.size())
    {
        QVector<QPointF> oldData= lineSeries[index]->pointsVector();
        oldData.append(QPointF(allPoints[cnt].x,allPoints[cnt].y));
        lineSeries[index]->replace(oldData);
        lineSeries[index]->setPointsVisible(true);
        cnt++;
    }
    if(cnt >= allPoints.size())
    {
        cnt = 0;
        lineSeries[index]->clear();
    }

}

void MainWidget::speedPlay()
{
    timer->setInterval(time);

    time = time/2;

    if(time < 250)
    {
        time = 2000;
    }

}

void MainWidget::checkId()
{
    if(!checkIdWidget){
        checkIdWidget = new CheckIdWidget();
        connect(checkIdWidget,SIGNAL(mySignalClose()),this,SLOT(startRequestCurData()));

        connect(checkIdWidget,SIGNAL(mySignalPoints(const QVector<Show_Info >&)),this,SLOT(showPoints(const QVector<Show_Info >&)));
    }
    checkIdWidget->show();
    disconnect(inWork,SIGNAL(mySignalCurData(const QVector<Show_Info>&)),this,SLOT(showCurPoint(const QVector<Show_Info>&)));
}

void MainWidget::startRequestCurData()
{
    for(int i = 0;i < lineNumber;i++)
        lineSeries[i]->clear();
    cnt = 0;
    timer->stop();

    connect(inWork,SIGNAL(mySignalCurData(const QVector<Show_Info>&)),this,SLOT(showCurPoint(const QVector<Show_Info>&)));
}



void MainWidget::showGrid()
{
    // 创建并添加自定义水平网格线
    hLineSeries = new QLineSeries;
    double k = 0;
    for (int i = 0; i <= rangeSize; i++) {

        QPointF p1(0, k);
        QPointF p2(12, k);
        if(i%2 == 0)
        {
            hLineSeries->append(p1);
            hLineSeries->append(p2);
        }else{
            hLineSeries->append(p2);
            hLineSeries->append(p1);
        }
        k +=  0.8;

    }
    chart->addSeries(hLineSeries);
    // 创建并添加自定义垂直网格线
    vLineSeries = new QLineSeries;
    k = 0;
    for (int i = 0; i <= rangeSize; i++) {

        QPointF p1(k, 0);
        QPointF p2(k,12);
        if(i%2 == 0)
        {
            vLineSeries->append(p1);
            vLineSeries->append(p2);
        }else{
            vLineSeries->append(p2);
            vLineSeries->append(p1);
        }
        k +=  0.8;
    }
    chart->addSeries(vLineSeries);
    // 设置网格线的样式和颜色
    QPen gridPen(Qt::DotLine);

    gridPen.setColor(Qt::black);
    hLineSeries->setPen(gridPen);
    vLineSeries->setPen(gridPen);
}


void MainWidget::startTimer()
{

    timer->setInterval(2000);
    timer->start();

}

void MainWidget::startThread()
{
    myTcpServer = new MyTcpServer();

    myTcpServer->moveToThread(&threadTwo);

    inWork = new InWork();

    inWork->moveToThread(&threadOne);

    connect(&threadOne,SIGNAL(started()),inWork,SLOT(doWork()));


    connect(inWork,SIGNAL(mySignalCurData(const QVector<Show_Info>&)),this,SLOT(showCurPoint(const QVector<Show_Info>&)));


    connect(this,&MainWidget::destroyed,this,[=](){
        threadOne.quit();
        threadOne.wait();
        threadOne.deleteLater();

        threadTwo.quit();
        threadTwo.wait();
        threadTwo.deleteLater();

    });
    threadOne.start();
    threadTwo.start();
}


