//
// Created by Lenovo on 2023/5/25.
//

#include "inwork.h"

#include<QThread>
#include<QDateTime>
#include <QtEndian>


#define MYLOG qDebug() << "[" << __FILE__ << ":" << __LINE__ << ":" << QThread::currentThread() << __func__ << QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss:zzz")<< "]"


InWork::InWork(QObject *parent) : QObject(parent)
{
    sqliteTools = new SQLiteTools("../uwb.db","conn_03");
    sqliteTools->initDataBase();
    sqliteTools->createTable();

    for(int i = 0;i < 35;i++)
    {
        One_Info oneInfo;
        oneVec.append(oneInfo);
    }
}

InWork::~InWork() {

    if(sqliteTools != nullptr)
    {
        delete sqliteTools;
        sqliteTools = nullptr;
    }

    //使用迭代器遍历元素
    for (auto it = kalMap.begin(); it != kalMap.end(); ++it) {
        delete it.value();
    }
}

void InWork::doWork()
{

    while(true){
        try{

            if(!messageQueue.isEmpty()){

                //出队
                QByteArray message = messageQueue.dequeue();


                QString hexString = QString::fromLatin1(message.toHex());

                // 计算校验和
                unsigned char xorResult = 0;
                for (int i = 0; i < message.size(); i++) {
                    xorResult ^= (unsigned char)message.at(i);
                }
                QString xorString = QString("%1").arg(xorResult, 2, 16, QLatin1Char('0')).toUpper();
                //    MYLOG << xorString;

                if(xorString == "00")
                {

                    //                MYLOG << "校验通过";
                    //        基站ID
                    unsigned char byteValue1 = (unsigned char)message.at(23);
                    // 计算字节的十进制表示
                    int anchorId = byteValue1 & 0xFF;
                    anchorId = anchorId % 250;

//                    MYLOG << anchorId;

                    //标签ID
                    int tagId = 0;
                    for(int i = 24;i < 28;i++)
                    {
                        unsigned char byteValue = (unsigned char)message.at(i);
                        //            MYLOG << byteValue;
                        // 计算字节的十进制表示
                        tagId += byteValue & 0xFF;
                    }
                    tagId = tagId % 200;

                    //标签与基站的距离
                    QString distanceHex = hexString.mid(56,8);
                    // 将16进制字符串转换为 QByteArray 对象
                    QByteArray byteArray = QByteArray::fromHex(distanceHex.toLatin1());
                    // 将字节数组转换为 float
                    float distanceValue = qFromBigEndian<float>(byteArray.data());
                    //        MYLOG << distanceValue;

                    //        测距序号
                    unsigned char byteValue = (unsigned char)message.at(33);
                    int batchValue = byteValue & 0xFF;
                    //    MYLOG << batchValue;

                    //        qDebug()<<"测距序号: "<<batchValue<<"基站ID: "<<anchorId<<"标签ID: "<<tagId<<"距离: "<<distanceValue;
                    int setSize = tagIdSet.size();

                    tagIdSet.insert(tagId);

                    Show_Info showInfo;

                    if(setSize != tagIdSet.size()){
                        tagMap[tagId] = oneVec;

                        KalmanFilter *kalmanFilter = new KalmanFilter();
                        kalMap[tagId] = kalmanFilter;

                    }

                    QVector<One_Info> twoVec = tagMap[tagId];

                    twoVec[batchValue%8].x[anchorId - 1] = distanceValue;

                    twoVec[batchValue%8].tagId = tagId;
                    twoVec[batchValue%8].batchValue = batchValue;

                    if(twoVec[batchValue%8].x[0] != -1 && twoVec[batchValue%8].x[1] != -1
                       && twoVec[batchValue%8].x[2] != -1 && twoVec[batchValue%8].x[3] != -1)
                    {
                        twoVec[batchValue%8].flag = true;
                    }

                    for(int i = 0;i < twoVec.size();i++)
                    {
                        if(twoVec[i].flag)
                        {
                            //获取可用信息
                            One_Info useInfo;
                            for(int k = 0;k < 4;k++)
                            {
                                useInfo.x[k] = twoVec[i].x[k];
                            }
                            useInfo.batchValue = twoVec[i].batchValue;
                            useInfo.tagId = twoVec[i].tagId;

                            useVec.append(useInfo);

                            //复位
                            for(int k = 0;k < 4;k++)
                            {
                                twoVec[i].x[k] = -1;
                            }
                            twoVec[i].batchValue = -1;
                            twoVec[i].tagId = -1;
                            twoVec[i].flag = false;
                        }
                    }

                    tagMap[tagId] = twoVec;

                    for(int i = 0;i < useVec.size();i++)
                    {
                        QVector<double> distance;
                        for(int k = 0;k < 4;k++)
                        {
                            distance.append(useVec[i].x[k]);
                        }

                        QDateTime dateTime = QDateTime::currentDateTime();
                        QString dateTimeString = dateTime.toString("yyyy-MM-dd hh:mm:ss");

                        //TDOA算法
                        QPointF pointTDOA = FindPoint::coordinateProcessing(distance);

                        //插入滤波前的数据到数据库
                        sqliteTools->insertRecord(useVec[i].tagId,pointTDOA.x(),pointTDOA.y(),dateTimeString,0);

                        KalmanFilter *kalMan = kalMap[useVec[i].tagId];
                        //卡尔曼滤波
                        QPointF pointKal = kalMan->getPoint(pointTDOA);

                        //插入滤波后的数据到数据库
                        sqliteTools->insertRecord(useVec[i].tagId,pointKal.x(),pointKal.y(),dateTimeString,1);

                        Show_Info showInfo;
                        showInfo.id = QString::number(useVec[i].tagId);
                        showInfo.x = pointKal.x();
                        showInfo.y = pointKal.y();

                        pointsMap[useVec[i].tagId] = showInfo;
                    }

                    useVec.clear();

                    QVector<Show_Info> allPoints;

//                 使用迭代器遍历元素
                    for (auto it = pointsMap.begin(); it != pointsMap.end(); ++it) {
                        Show_Info showInfo = it.value();

                        //数据补充完整
                        Show_Info showInfo2 = sqliteTools->searchCurrentAllDate(showInfo.id);
                        showInfo.name = showInfo2.name;
                        showInfo.career = showInfo2.career;
                        showInfo.careerId = showInfo2.careerId;

                        allPoints.append(showInfo);
                    }
                    emit mySignalCurData(allPoints);

                }else{
                    MYLOG << "校验未通过";
                }

            }

            QThread::msleep(1);
        }
        catch(std::exception ex)
        {
            MYLOG<<ex.what();
            continue;
        }
    }
}