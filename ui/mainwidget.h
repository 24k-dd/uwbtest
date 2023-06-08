//
// Created by Lenovo on 2023/5/25.
//

#ifndef UWBTEST_MAINWIDGET_H
#define UWBTEST_MAINWIDGET_H

#include <QWidget>
#include <QThread>
#include <QChart>
#include <QLineSeries>
#include <QVector>
#include <QTimer>
#include<QTime>
#include<QValueAxis>
#include<QLineEdit>
#include<QPushButton>
#include<QScatterSeries>
#include<QDateEdit>
#include<QLabel>
#include "chartview.h"
#include "callout.h"
#include "../model/model.h"

#include"../api/inwork.h"

#include "CheckIdWidget.h"

//#include"../checkidwidget.h"
#include"../api/mytcpserver.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWidget; }
QT_END_NAMESPACE

class MainWidget : public QWidget {
Q_OBJECT

public:
    explicit MainWidget(QWidget *parent = nullptr);

    ~MainWidget() override;

    void showGrid();

    void startTimer();

    void startThread();



signals:
    void mySignalCurData(const QVector<Show_Info>&);

private:
    void wheelEvent(QWheelEvent *event);

    void initUI();
    void initChart();
    void initSlot();

    Ui::MainWidget *ui;

    ChartView *chartView = nullptr;

    Callout *tip = nullptr;
    QScatterSeries *scatterSeries[lineNumber];

    QLineSeries *lineSeries[lineNumber];

    QTimer *timer = nullptr;

    quint16 count;

    bool isStopping;

    bool  gridFlag = true;

    bool locusPlayFlag = false;

    bool s_Flag = false;

private slots:
    void timerSlot();
    void buttonSlot();
    void tipSlot(QPointF position, bool isHovering);

    void showCurPoint(QVector<Show_Info>data);

    void showPoints(const QVector<Show_Info>& points);

    //轨迹播放
    void updateLocus();

    //倍速
    void speedPlay();

    //特定id
    void checkId();

    void startRequestCurData();

private:

    InWork *inWork = nullptr;

    MyTcpServer *myTcpServer = nullptr;

    QThread  threadOne;
    QThread threadTwo;

    QVector<struct Show_Info> allPoints;

    QVector<QPointF> onePoints;

public:
    QChart *chart = nullptr;

    QLineSeries *vLineSeries = nullptr;

    QLineSeries *hLineSeries = nullptr;

    CheckIdWidget *checkIdWidget = nullptr;

    QMap<QString,QList<QPointF>> mapPoint;

    QList<QPointF> onlyPoint;

    QSet<QString> set;

    SQLiteTools *sqliteTools = nullptr;

    int index = 0;

    int cnt = 0;

    int flag = 1;

    int time = 1000;
};

#endif //UWBTEST_MAINWIDGET_H
