/********************************************************************************
** Form generated from reading UI file 'mainwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIDGET_H
#define UI_MAINWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *mainVerLayout;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *mainHorLayout;

    void setupUi(QWidget *MainWidget)
    {
        if (MainWidget->objectName().isEmpty())
            MainWidget->setObjectName("MainWidget");
        MainWidget->resize(400, 300);
        horizontalLayout = new QHBoxLayout(MainWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        mainVerLayout = new QVBoxLayout();
        mainVerLayout->setObjectName("mainVerLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        mainHorLayout = new QHBoxLayout();
        mainHorLayout->setObjectName("mainHorLayout");

        horizontalLayout_2->addLayout(mainHorLayout);


        mainVerLayout->addLayout(horizontalLayout_2);


        horizontalLayout->addLayout(mainVerLayout);


        retranslateUi(MainWidget);

        QMetaObject::connectSlotsByName(MainWidget);
    } // setupUi

    void retranslateUi(QWidget *MainWidget)
    {
        MainWidget->setWindowTitle(QCoreApplication::translate("MainWidget", "MainWidget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWidget: public Ui_MainWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIDGET_H
