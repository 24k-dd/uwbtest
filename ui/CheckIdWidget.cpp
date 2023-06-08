//
// Created by Lenovo on 2023/5/28.
//

#include "CheckIdWidget.h"
#include<QHBoxLayout>
#include<QLabel>
#include<QPushButton>
#include<QCheckBox>
#include<QThread>

#define MYLOG qDebug() << "[" << __FILE__ << ":" << __LINE__ << ":" << QThread::currentThread() << __func__ << QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss:zzz")<< "]"


CheckIdWidget::CheckIdWidget(QWidget *parent) : QWidget(parent)
{

    setWindowTitle("查询id");
    lineEdit = new QLineEdit(this);

    QPushButton *checkBtn = new QPushButton(this);
    checkBtn->setText("查询");

    dateEditBegin = new QDateTimeEdit(this);
    dateEditBegin->setDateTime(QDateTime::currentDateTime().addDays(-1));
    dateEditOver = new QDateTimeEdit(this);
    dateEditOver->setDateTime(QDateTime::currentDateTime().addDays(1));

    QLabel *labelBegin = new QLabel("起始时间:");
    QLabel *labelOver = new QLabel("结束时间:");

    QHBoxLayout *h_layout1 = new QHBoxLayout;
    h_layout1->addWidget(labelBegin);
    h_layout1->addWidget(dateEditBegin);

    QHBoxLayout *h_layout2 = new QHBoxLayout;
    h_layout2->addWidget(labelOver);
    h_layout2->addWidget(dateEditOver);

    QHBoxLayout *h_layout3 = new QHBoxLayout;
    h_layout3->addWidget(lineEdit);
    h_layout3->addWidget(checkBtn);

    QCheckBox *checkBox = new QCheckBox(this);
    checkBox->setText("滤波前");
    checkBox->setChecked(false);

    QVBoxLayout *v_layout = new QVBoxLayout(this);
    v_layout->addLayout(h_layout1);
    v_layout->addLayout(h_layout2);
    v_layout->addWidget(checkBox);
    v_layout->addLayout(h_layout3);
    setLayout(v_layout);

    connect(checkBtn,SIGNAL(clicked()),this,SLOT(checkIdBtn()));
    connect(checkBox,SIGNAL(stateChanged(int)),this,SLOT(stateChange(int)));


    sqliteTools = new SQLiteTools(":/uwb.db","conn_02");
    sqliteTools->initDataBase();


}

void CheckIdWidget::closeEvent(QCloseEvent *event)
{
    emit mySignalClose();
}

void CheckIdWidget::checkIdBtn()
{
    QString id = lineEdit->text();

    QDateTime m_date = dateEditBegin->dateTime();
    dateBeign = m_date.toString("yyyy-MM-dd hh:mm:ss");
    QString Beign = dateBeign.left(dateBeign.size());

    QDateTime f_date = dateEditOver->dateTime();
    dateOver = f_date.toString("yyyy-MM-dd hh:mm:ss");
    QString Over = dateOver.left(dateOver.size());

    int index = 1;

    if(flag){
        index = 0;
    }

    QVector<struct Show_Info> curData =  sqliteTools->searchCurrentDate(id,Beign,Over,index);

    emit mySignalPoints(curData);
}

void CheckIdWidget::stateChange(int a)
{
    flag = !flag;

}
