//
// Created by Lenovo on 2023/5/25.
//

#ifndef UWBTEST_SQLITETOOLS_H
#define UWBTEST_SQLITETOOLS_H


#include <QSql>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlError>
#include <QSqlQuery>

#include"../model/model.h"

class SQLiteTools
{
private:
    QSqlDatabase    db;                 //定义一个私有的数据库连接对象
    QString         connectionName;     //定义数据库连接名
    QString         dataBaseName;       //定义用于建立连接的数据库名或路径

public:
    SQLiteTools(QString dbName, QString connName);
    ~SQLiteTools();

    /**
         * @brief initDataBase 初始化数据库连接
         * @param
         */
    void initDataBase(void);
    /**
         * @brief openDateBase 打开数据库
         * @param
         */
    bool openDateBase(void);
    /**
         * @brief closeDataBase 关闭数据库
         * @param
         */
    void closeDataBase(void);
    /**
         * @brief createTable 创建数据表
         * @param
         */
    void createTable(void);
    /**
         * @brief insertRecord 插入记录
         * @param
         */
    void insertRecord(int id, float px, float py,QString time,int index);
    /**
         * @brief deleteRecord 删除记录
         * @param
         */
    void deleteRecord(int id);
    /**
         * @brief updateRecord 更新记录
         * @param
         */
    void updateRecord(int id, qreal px, qreal py);
    /**
         * @brief searchRecord 查询记录
         * @param
         */
    QVector<Show_Info> searchCurrentDate(QString id,QString begin,QString over,int index);
    /**
         * @brief getRowCounts 获取所有记录数目
         * @param
         */

    Show_Info searchCurrentAllDate(QString id);
    /**
         * @brief getRowCounts 获取所有记录数目
         * @param
         */

    int getRowCounts(QString tableName);

};

#endif //UWBTEST_SQLITETOOLS_H
