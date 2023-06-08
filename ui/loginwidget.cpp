//
// Created by Lenovo on 2023/5/25.
//

// You may need to build the project (run Qt uic code generator) to get "ui_LoginWidget.h" resolved

#include "loginwidget.h"
#include "ui_LoginWidget.h"

#include <QMessageBox>


LoginWidget::LoginWidget(QWidget *parent) :
        QWidget(parent), ui(new Ui::LoginWidget) {
    ui->setupUi(this);
    setWindowTitle("UWB定位系统");
    setWindowIcon(QIcon("../source/title.png"));

    setStyleSheet("QLineEdit,QComboBox{width: 40px;height: 30px;font-family: 微软雅黑;font-size: 18px;border: 1px solid black;border-radius: 10px;}"
                  "QWidget{background-color:white;}"
                  "QPushButton{width: 80px;height: 30px;border: 1px solid black;font-family: 微软雅黑;border-radius: 10px;font-size: 18px;background-color: #00ffff}""QPushButton:pressed{background:white;}");


    ui->lineEdit_username->setText("admin");
    ui->lineEdit_password->setText("123456");

    connect(ui->pushButton_quit, SIGNAL(clicked()),this,SLOT(qiutSlot()));
    connect(ui->pushButton_login, SIGNAL(clicked()),this,SLOT(loginSlot()));

}

LoginWidget::~LoginWidget() {
    delete ui;
}

void LoginWidget::qiutSlot() {
    ui->lineEdit_username->clear();
    ui->lineEdit_password->clear();
}

void LoginWidget::loginSlot() {
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();

    if(username == "admin" && password == "123456")
    {
        //获取密码
        username = ui->lineEdit_username->text();
        password = ui->lineEdit_password->text();

        //主界面
        mainWindow = new MainWindow();

        //标志位
        mainWindow->show();

        this->hide();

    }
    else{
        QMessageBox::information(this,tr("提示"),tr("用户名或密码有误!"),QMessageBox::Ok);

    }
}
