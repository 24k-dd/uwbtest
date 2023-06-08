//
// Created by Lenovo on 2023/5/25.
//

#include "mytcpserver.h"
#include<qDebug>
#include<QThread>
#include<QDateTime>
#include<QHostAddress>
#include<QNetworkInterface>
#include<QNetworkProxy>
#include <QTcpSocket>

#include <QElapsedTimer>
#define MYLOG qDebug() << "[" << __FILE__ << ":" << __LINE__ << ":" << QThread::currentThread() << __func__ << QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss:zzz")<< "]"

MyTcpServer::MyTcpServer(QObject *parent) : QObject(parent)
{
    m_server = new QTcpServer(this);
    connect(m_server, &QTcpServer::newConnection, this, &MyTcpServer::onNewConnection);

    if (!m_server->listen(QHostAddress(ip), port)) {
        MYLOG << "Server could not start!";
    } else {
        MYLOG << "Server started.";
    }
}

void MyTcpServer::onNewConnection()
{
    QTcpSocket *socket = m_server->nextPendingConnection();
    m_clients.append(socket);

    connect(socket, &QTcpSocket::readyRead, this, &MyTcpServer::onReadyRead);
    connect(socket, &QTcpSocket::disconnected, this, &MyTcpServer::onDisconnected);

    qDebug() << "Client connected: " << socket->peerAddress().toString();
}

void MyTcpServer::onReadyRead()
{

    // 处理从客户端发送过来的数据
    QTcpSocket *socket = qobject_cast<QTcpSocket *>(sender());

    // 声明一个 QByteArray 类型的变量，用于存储已读取的数据
    QByteArray buffer;

    // 读取数据，直到一帧完整的数据被接收
    while (socket->bytesAvailable() > 0) {
        // 逐个字节读取数据
        char data;
        socket->read(&data, 1);

        // 将读取的数据添加到缓冲区中
        buffer.append(data);

        // 判断缓冲区中的数据是否为一帧完整的数据
        if (buffer.size() == 35 && buffer.at(0) == static_cast<char>(0xFF)
            && buffer.at(1) == static_cast<char>(0xFF) && buffer.at(2) == static_cast<char>(0xFF)
            && buffer.at(3) == static_cast<char>(0xFF)) {

            // 处理一帧完整的数据入队
            messageQueue.enqueue(buffer);


            // 清空缓冲区，准备接收下一帧数据
            buffer.clear();
        }
    }
}

void MyTcpServer::onDisconnected()
{
    // 断开连接时从客户端列表中删除对应的socket
    QTcpSocket *socket = qobject_cast<QTcpSocket *>(sender());
    m_clients.removeOne(socket);

    qDebug()  << "Client disconnected: " << socket->peerAddress().toString();

    socket->deleteLater();
}
