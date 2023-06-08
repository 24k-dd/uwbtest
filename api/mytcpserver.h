//
// Created by Lenovo on 2023/5/25.
//

#ifndef UWBTEST_MYTCPSERVER_H
#define UWBTEST_MYTCPSERVER_H

#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>
#include <QList>
#include <QMap>
#include <QVector>
#include <QSet>

#include"../model/model.h"

class MyTcpServer : public QObject
{
Q_OBJECT

public:
    explicit MyTcpServer(QObject *parent = nullptr);

signals:
//    void signalMessage(const QByteArray& message);

private slots:
    void onNewConnection();

    void onReadyRead();

    void onDisconnected();

private:
    QTcpServer *m_server = nullptr;
    QList<QTcpSocket *> m_clients;


};



#endif //UWBTEST_MYTCPSERVER_H
