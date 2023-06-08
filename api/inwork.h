//
// Created by Lenovo on 2023/5/25.
//

#ifndef UWBTEST_INWORK_H
#define UWBTEST_INWORK_H

#include<qDebug>
#include<QTimer>
#include<QQueue>
#include <QtEndian>

#include"../model/model.h"
#include "../pkg/FindPoint.h"
#include "../pkg/KalmanFilter.h"
#include "sqlitetools.h"


class InWork : public QObject
{
Q_OBJECT

public:
    explicit InWork(QObject *parent = nullptr);
    ~InWork();

public slots:

    void doWork();
signals:
    void mySignalCurData(const QVector<Show_Info>&);

private:

    SQLiteTools *sqliteTools = nullptr;

    QMap<int,QVector<One_Info>> tagMap;

    QMap<int,KalmanFilter*> kalMap;

    QVector<One_Info> oneVec;

    QVector<One_Info> useVec;

    QSet<int> tagIdSet;

    QMap<int,Show_Info> pointsMap;
};

#endif //UWBTEST_INWORK_H
