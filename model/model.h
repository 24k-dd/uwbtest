//
// Created by Lenovo on 2023/5/25.
//

#ifndef UWBTEST_MODEL_H
#define UWBTEST_MODEL_H


#include<QString>
#include<QByteArray>
#include<QMap>
#include<QQueue>
#include <QMetaType>

const int beginX = 0;
const int overX = 12;

const int beginY = 0;
const int overY = 12;

//网格数量
const int rangeSize = 15;

//线段数量
const int lineNumber = 5;

//刷新点的间隔
const int updatetime = 600;

//类别1
const int SHOWINFO = 10001;

const QVector<QString> colorVec{"blue","red","green","black","pink","#55ffb0","#ff8263"};

//ip
//const QString ip = "192.168.43.169";
const QString ip = "192.168.1.22";

//const QString ip = "192.168.1.25";
//const QString ip = "192.168.137.1";

//port
const int port = 31000;

//TDOA算法 参数
const double X_MAX = 11.2;
const double X_MIN = 0.0;
const double Y_MAX = 11.2;
const double Y_MIN = 0.0;
const double X = 6.1;
const double Y = 6.1;
const double PRECISION = 0.000001;// 温度下降到什么程度为止
const int L = 10;// 马尔科夫链长度
const double K = 0.96;// 温度每次下降的程度
const double S = 0.2;

typedef struct Show_Info
{
    QString id;
    double x;
    double y;

    int careerId;
    QString name;
    QString career;
}showInfo;
//Q_DECLARE_METATYPE(struct::Show_Info)


typedef struct All_Info
{
    int batchId;
    int tagId;
    int anchorId;
    float distance;
}allInfo;

typedef struct One_Info
{
    bool flag = false;
    double x[5] = {-1};
    int tagId = -1;
    int batchValue = -1;
}oneInfo;

extern QQueue<QByteArray> d_queue;

extern QQueue<QVector<struct One_Info>> all_queue;

extern QQueue< QByteArray> messageQueue;

#endif //UWBTEST_MODEL_H
