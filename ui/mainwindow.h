//
// Created by Lenovo on 2023/5/27.
//

#ifndef UWBTEST_MAINWINDOW_H
#define UWBTEST_MAINWINDOW_H


#include <QMainWindow>
#include<QSpacerItem>
#include<QAction>

#include<QToolButton>
#include<QGroupBox>
#include<QToolBox>
#include<QHBoxLayout>
#include<QTreeWidgetItem>
#include<QTableWidget>
#include <QAction>
#include <QMenu>
#include <QMenuBar>

#include "../model/model.h"
#include "mainwidget.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);

    ~MainWindow() override;

public slots:
    void showCurPoint(const QVector<Show_Info> &data);

//    void showTopicOne();
//
//    void showTopicTwo();
//    void showTopicThree();
    void test();

private:
    Ui::MainWindow *ui;

    MainWidget *mainWidget;

    QSpacerItem *h_spacer;
    QSpacerItem *v_spacer;

    QMap<QString,int> numMap;

    QSet<int> set;

    QMap<int,QVector<Show_Info>> careerVecMap;

    QVector<int> vec;

private:
    void createActions();
    void createMenus();

    QMenu *fileMenu; /* file菜单 *//* 定义了file的下拉菜单为new、open、save、saveAS、exit */
    QAction *newAct;
    QAction *open;
    QAction *Save;
    QAction *saveAs;
    QAction *exit;

    QMenu *checkMenu; /* file菜单 *//* 定义了file的下拉菜单为new、open、save、saveAS、exit */
    QAction *ckeckId;
    QAction *locusPlay;
    QAction *stop;
    QAction *quick;

};


#endif //UWBTEST_MAINWINDOW_H
