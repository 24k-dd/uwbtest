//
// Created by Lenovo on 2023/5/27.
//

// You may need to build the project (run Qt uic code generator) to get "ui_MainWindow.h" resolved

#include "mainwindow.h"
#include "ui_MainWindow.h"

#include <QIcon>

#define MYLOG qDebug() << "[" << __FILE__ << ":" << __LINE__ << ":" << QThread::currentThread() << __func__ << QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss:zzz")<< "]"

MainWindow::MainWindow(QWidget *parent) :
        QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);

    qRegisterMetaType<QVector<Show_Info>>("QVector<Show_Info>");
    setWindowTitle("UWB二维定位");
    setWindowIcon(QIcon("../source/title.png"));
    //最大化
    setWindowState(Qt::WindowMaximized);
    //清除缓存
    setAttribute(Qt::WA_DeleteOnClose,true);

    mainWidget = new MainWidget(this);

    createActions();
    createMenus();

    setStyleSheet(" QMenu{background-color:white;}"/*整个背景*/
                  "QMenu::item {color: black;background-color:white;}"/*字体颜色*/
                  "QMenu::item:selected{background-color:#75e8ff;}"/*选中的样式*/
                    "QMenu::item:pressed {background-color: white;}"
                    "QMenuBar{background-color:#0aff85;}");/*菜单项按下效果*/

    QTreeWidgetItem *teacherTopItem = ui->treeWidget_group->topLevelItem(0);
    teacherTopItem->setIcon(0,QIcon("../source/blue.png"));

    QTreeWidgetItem *studentTopItem = ui->treeWidget_group->topLevelItem(1);
    studentTopItem->setIcon(0,QIcon("../source/red.png"));

    //弹簧
    h_spacer = new QSpacerItem(10,10,QSizePolicy::Minimum,QSizePolicy::Minimum);
    v_spacer = new QSpacerItem(10,10,QSizePolicy::Expanding,QSizePolicy::Expanding);

    ui->widget_1->setFixedWidth(260);
    ui->widget_2->setFixedWidth(490);

    ui->treeWidget_group->setColumnWidth(0,180);
    ui->treeWidget_group->setColumnWidth(1,110);
    ui->treeWidget_group->setColumnWidth(2,160);

    for(int i = 0;i < lineNumber+5;i++)
    {
        vec.append(0);
    }



    QHBoxLayout *h_layout = new QHBoxLayout;

    h_layout->addWidget(ui->widget_1);
    h_layout->addItem(h_spacer);
    h_layout->addWidget(mainWidget);
    h_layout->addItem(h_spacer);
    h_layout->addWidget(ui->widget_2);
    ui->widget_1->setStyleSheet("background-color: white;border-radius: 15px;");
    ui->widget_2->setStyleSheet("background-color: white;border-radius: 15px;");

    setStyleSheet("QTreeWidget{background-color: white;font-size:17px; color: black;}"
                  "QTreeWidget::item{margin:5px;background: white;background-clip: margin;}"
                  "QWidget{background-color: #0aff85;}"
                  "QTreeWidget::item:selected:active{background:#75e8ff}"
                  "QTreeWidget::item:hover{background:#b3feff;}");


    QWidget *widget = new QWidget(this);

    widget->setLayout(h_layout);

    setCentralWidget(widget);

    connect(mainWidget,SIGNAL(mySignalCurData(const QVector<Show_Info>&)),this,SLOT(showCurPoint(const QVector<Show_Info>&)));

}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::showCurPoint(const QVector<Show_Info> &data)
{
    for(int k = 0;k < data.size();k++)
    {
        set.insert(data[k].careerId);
    }

    // 使用迭代器遍历元素
    for (int a:set){
        try{
            QVector<Show_Info> showInfoVec;

            for(int k = 0;k < data.size();k++)
            {
                if(a == data[k].careerId)
                {
                    showInfoVec.append(data[k]);

                }
            }
            if(a - 1 <  ui->treeWidget_group->columnCount()){

                QTreeWidgetItem *studentTopItem = ui->treeWidget_group->topLevelItem(a - 1);
                int dataSize = showInfoVec.size();
                //    MYLOG << dataSize;
                if (dataSize != vec[a]) {
                    // 数据条数不同，需要重新设置节点
                    studentTopItem->takeChildren();  // 移除所有子节点
                    for (int i = 0; i < dataSize; i++) {
                        QList<QString> allItemName;
                        allItemName.append(showInfoVec[i].id);
                        allItemName.append(showInfoVec[i].name);

                        QString x = QString::number(showInfoVec[i].x, 'f', 2);
                        QString y = QString::number(showInfoVec[i].y, 'f', 2);

                        allItemName.append("("+x+", "+y+")");

                        QTreeWidgetItem *childItem = new QTreeWidgetItem(allItemName);
                        studentTopItem->addChild(childItem);
                    }
                } else {
                    // 数据条数相同，更新节点数据
                    for (int i = 0; i < dataSize; i++) {
                        if (i >= studentTopItem->childCount()) {
                            break;  // 如果超过子节点数，则退出循环
                        }
                        QTreeWidgetItem *studentOne = studentTopItem->child(i);
                        studentOne->setText(0, showInfoVec[i].id);
                        studentOne->setText(1, showInfoVec[i].name);
                        QString x = QString::number(showInfoVec[i].x, 'f', 2);
                        QString y = QString::number(showInfoVec[i].y, 'f', 2);

                        studentOne->setText(2, "("+x+", "+y+")");
                    }
                }
                vec[a] = dataSize;
            }
        }
        catch(std::exception ex)
        {
            MYLOG<<ex.what();
            continue;
        }
    }
}

void MainWindow::createActions() {

    newAct = new QAction ( QIcon ( ":/image/new.png" ), tr ( "&New" ), this );
    newAct->setShortcuts ( QKeySequence::New );
    newAct->setStatusTip ( tr ( "Create a new file" ) );
    connect ( newAct, SIGNAL ( triggered() ), this, SLOT ( test() ) ); /* New点击事件调用test */
    open = new QAction ( QIcon ( ":/image/open.png" ), tr ( "&Open" ), this );
    open->setShortcuts ( QKeySequence::Open );
    open->setStatusTip ( tr ( "open a new file" ) );
    connect ( open, SIGNAL ( triggered() ), this, SLOT ( test() ) ); /* 点击Open事件调用test */
    Save = new QAction ( QIcon ( ":/image/save.png" ), tr ( "&Save" ), this );
    Save->setShortcuts ( QKeySequence::Save );
    Save->setStatusTip ( tr ( "Save a new file" ) );
    connect ( Save, SIGNAL ( triggered() ), this, SLOT ( test() ) ); /* 点击Save事件调用test */
    saveAs = new QAction ( tr ( "&SaveAs" ), this );
    saveAs->setShortcuts ( QKeySequence::SaveAs );
    newAct->setStatusTip ( tr ( "SaveAs a new file" ) );
    connect ( saveAs, SIGNAL ( triggered() ), this, SLOT ( test() ) ); /* saveAS点击事件调用test */
    exit = new QAction ( tr ( "&exit" ), this );
    exit->setShortcuts ( QKeySequence::Close );
    exit->setStatusTip ( tr ( "exit a new file" ) );
    connect ( exit, SIGNAL ( triggered() ), this, SLOT ( close() ) ); /* 点击exit事件调用test */


    ckeckId = new QAction ( QIcon ( ":/image/new.png" ), tr ( "&查询ID" ), this );

    ckeckId->setStatusTip ( tr ( "查询特定轨迹" ) );
    connect ( ckeckId, SIGNAL ( triggered() ), mainWidget, SLOT ( checkId() ) ); /* New点击事件调用test */
    locusPlay = new QAction ( QIcon ( ":/image/open.png" ), tr ( "&轨迹播放" ), this );

    locusPlay->setStatusTip ( tr ( "对已查询的轨迹进行播放" ) );
    connect ( locusPlay, SIGNAL ( triggered() ), mainWidget, SLOT ( buttonSlot() ) ); /* 点击Open事件调用test */
    stop = new QAction ( QIcon ( ":/image/save.png" ), tr ( "&暂停" ), this );

    stop->setStatusTip ( tr ( "正在播放中的轨迹进行暂停" ) );
    connect ( stop, SIGNAL ( triggered() ), mainWidget, SLOT ( buttonSlot() ) ); /* 点击Save事件调用test */
    quick = new QAction ( tr ( "&倍速" ), this );

    quick->setStatusTip ( tr ( "调整轨迹播放速度" ) );
    connect ( quick, SIGNAL ( triggered() ), mainWidget, SLOT ( speedPlay() ) ); /* saveAS点击事件调用test */
}

void MainWindow::createMenus(){
    fileMenu = menuBar()->addMenu ( tr ( "&File" ) ); /* 创建一个name为file的菜单栏 */
    /* 在这个菜单栏添加action即下拉菜单 */
    fileMenu->addAction ( newAct );
    fileMenu->addAction ( open );
    fileMenu->addAction ( Save );
    fileMenu->addAction ( saveAs );
    fileMenu->addSeparator(); /* 添加一个分割器 */
    fileMenu->addAction ( exit ); /* 推出下拉菜单 */

    checkMenu = menuBar()->addMenu ( tr ( "&查询" ) ); /* 创建一个name为file的菜单栏 */
    /* 在这个菜单栏添加action即下拉菜单 */
    checkMenu->addAction ( ckeckId );
    checkMenu->addAction ( locusPlay );
    checkMenu->addAction ( stop );
    checkMenu->addAction ( quick );

}

void MainWindow::test() {

}


