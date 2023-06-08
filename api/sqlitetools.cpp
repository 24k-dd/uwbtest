//
// Created by Lenovo on 2023/5/25.
//

#include "sqlitetools.h"

#include <QDate>
#include<QString>
#include<QVector>
#include<QThread>
#include<QDateTime>

#define MYLOG qDebug() << "[" << __FILE__ << ":" << __LINE__ << ":" << QThread::currentThread() << __func__ << QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss:zzz")<< "]"

//带参数的构造函数，进行私有属性的初始化
SQLiteTools::SQLiteTools(QString dbName, QString connName)
{
    dataBaseName = dbName;
    connectionName = connName;
}

SQLiteTools::~SQLiteTools()
{

}

void SQLiteTools::initDataBase()
{
    //qDebug()<<QSqlDatabase::drivers();//打印驱动列表
    //检测已连接的方式 - 自定义连接名
    if(QSqlDatabase::contains(connectionName))
        db = QSqlDatabase::database(connectionName);
    else
        db = QSqlDatabase::addDatabase("QSQLITE",connectionName);

    //设置数据库路径，不存在则创建
    db.setDatabaseName("../uwb.db");
    //db.setUserName("gongjianbo");  //SQLite不需要用户名和密码
    //db.setPassword("qq654344883");

    //打开数据库，验证是否成功
    if(db.open()){
        qDebug()<<"open success";
        //关闭数据库
        //
    }else{
        db.close();
    }
}

bool SQLiteTools::openDateBase()
{
    if(!db.open())
    {
        qDebug() << "Error: Failed to open database." << db.lastError();
        return false;
    }
    return true;
}

void SQLiteTools::closeDataBase()
{
    db.close();
}

void SQLiteTools::createTable()
{
    //如果不存在则创建my_table表,id自增,name唯一
    const QString sql=R"(
                        CREATE TABLE IF NOT EXISTS location_info (
                        tag_id INT NOT NULL,
                        point_x FLOAT NOT NULL,
                        point_y FLOAT NOT NULL,
                        time VAECHAR(100) NOT NULL,
                        yes_or_no INT NOT NULL);)";

    //QSqlQuery构造前，需要db已打开并连接
    //未指定db或者db无效时使用默认连接进行操作
    QSqlQuery query(db);
    if(query.exec(sql)){
        qDebug()<<"init table success";
    }else{
        //打印sql语句错误信息
        qDebug()<<"init table error"<<query.lastError();
    }
}

//插入数据
void SQLiteTools::insertRecord(int id, float px, float py,QString time,int index)
{

    QSqlQuery query(db);

    QString sql = "INSERT INTO location_info (tag_id, point_x, point_y, time, yes_or_no) VALUES (:id, :px, :py, :time, :yes_or_no)";

    query.prepare(sql);
    query.bindValue(":id", id);
    query.bindValue(":px", px);
    query.bindValue(":py", py);
    query.bindValue(":time", time);
    query.bindValue(":yes_or_no", index);

    if(!query.exec())
    {
        MYLOG << query.lastError();
    }
    else
    {
//        MYLOG << "inserted OK!";
    }
}

//删除数据
void SQLiteTools::deleteRecord(int id)
{

    QSqlQuery query(db);
    QString sql = QString(R"(DELETE FROM my_table WHERE ID=%1;)").arg(id);
    query.prepare(sql);
    if(!query.exec())
    {
        qDebug() << query.lastError();
    }
    else
    {
        qDebug() << "deleted OK!";
    }
}

//更新数据
void SQLiteTools::updateRecord(int id, qreal px, qreal py)
{

    QSqlQuery query(db);
    QString sql = QString(R"(UPDATE my_table SET PX=%2, PY=%3 WHERE ID=%1;)").arg(id).arg(px).arg(py);
    query.prepare(sql);
    if(!query.exec())
    {
        qDebug() << query.lastError();
    }
    else
    {
        qDebug() << "updated OK!";
    }
}

//查询数据
QVector<struct Show_Info> SQLiteTools::searchCurrentDate(QString id,QString begin,QString over,int index)
{
    //获取查询结果，如果结果是多行数据，可用while(query.next()){}遍历每一行
    QSqlQuery query(db);

    QString sql = QString(R"(select a.tag_id,a.point_x,a.point_y,b.career
                                        from location_info as a,people_info as b
                                        where a.tag_id = b.tag_id and time BETWEEN '%1' AND '%2' AND a.tag_id = '%3' AND a.yes_or_no = %4;)").arg(begin).arg(over).arg(id).arg(index);

    query.prepare(sql);
    QVector<struct Show_Info> allPoints;
    if(!query.exec())
    {
        qDebug()<<query.lastError();
    }
    else
    {
        while(query.next())
        {
            Show_Info showInfo;
            showInfo.id = query.value(0).toString();
            showInfo.x = query.value(1).toDouble();
            showInfo.y = query.value(2).toDouble();

            showInfo.careerId = query.value(3).toInt();


            allPoints.append(showInfo);
        }
    }
    query.finish();
    return allPoints;
}

Show_Info SQLiteTools::searchCurrentAllDate(QString id)
{
    //获取查询结果，如果结果是多行数据，可用while(query.next()){}遍历每一行
    QSqlQuery query(db);

    QString sql = QString(R"(select b.name,c.career,b.career
                                            from people_info as b, career_info as c
                                            where c.id = b.career and b.tag_id = %1;)").arg(id.toInt());
    query.prepare(sql);
    Show_Info showInfo;
    if(!query.exec())
    {
        qDebug()<<query.lastError();
    }
    else
    {
        while(query.next())
        {
            showInfo.name = query.value(0).toString();
            showInfo.career = query.value(1).toString();
            showInfo.careerId = query.value(2).toInt();
        }
    }

    return showInfo;
}


//获取记录行数
int SQLiteTools::getRowCounts(QString tableName)
{
    int counts = -1;
    QSqlQuery query(db);
    QString sql = QString("SELECT count(*) FROM %1").arg(tableName);
    query.prepare(sql);
    if(!query.exec())
    {
        qDebug() << query.lastError();
    }
    else
    {
        query.next();
        counts = query.value(0).toInt();
    }
    return counts;
}
