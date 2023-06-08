//
// Created by Lenovo on 2023/5/28.
//

#ifndef UWBTEST_CHECKIDWIDGET_H
#define UWBTEST_CHECKIDWIDGET_H

#include <QWidget>
#include <QDateTimeEdit>
#include <QDate>
#include <QDateTime>
#include <QLineEdit>
#include "../api/sqlitetools.h"


class CheckIdWidget : public QWidget
{
    Q_OBJECT
public:
    explicit CheckIdWidget(QWidget *parent = nullptr);

    void closeEvent(QCloseEvent *event);

    signals:
    void mySignalPoints(const QVector<struct Show_Info>& points);

    void mySignalClose();

    void stateSignal();

public slots:

            void checkIdBtn();

    void stateChange(int a);

private:
    QDateTimeEdit *dateEditBegin = nullptr;
    QDateTimeEdit *dateEditOver = nullptr;

    QString dateBeign;
    QString dateOver;

    SQLiteTools *sqliteTools = nullptr;
    QLineEdit *lineEdit = nullptr;

    bool flag = false;
};

#endif //UWBTEST_CHECKIDWIDGET_H
