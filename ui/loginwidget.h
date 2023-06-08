//
// Created by Lenovo on 2023/5/25.
//

#ifndef UWBTEST_LOGINWIDGET_H
#define UWBTEST_LOGINWIDGET_H

#include <QWidget>

#include "mainwindow.h"


QT_BEGIN_NAMESPACE
namespace Ui { class LoginWidget; }
QT_END_NAMESPACE

class LoginWidget : public QWidget {
Q_OBJECT

public:
    explicit LoginWidget(QWidget *parent = nullptr);

    ~LoginWidget() override;

private slots:
    void qiutSlot();

    void loginSlot();

private:
    Ui::LoginWidget *ui;

    MainWindow *mainWindow;
};


#endif //UWBTEST_LOGINWIDGET_H
