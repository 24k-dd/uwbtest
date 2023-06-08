/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QTreeWidget *treeWidget_group;
    QWidget *widget_1;
    QHBoxLayout *horizontalLayout;
    QTreeWidget *treeWidget_menu;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1101, 586);
        widget_2 = new QWidget(MainWindow);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(490, 140, 501, 311));
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        treeWidget_group = new QTreeWidget(widget_2);
        QFont font;
        font.setPointSize(16);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setTextAlignment(2, Qt::AlignCenter);
        __qtreewidgetitem->setFont(2, font);
        __qtreewidgetitem->setTextAlignment(1, Qt::AlignCenter);
        __qtreewidgetitem->setFont(1, font);
        __qtreewidgetitem->setTextAlignment(0, Qt::AlignCenter);
        __qtreewidgetitem->setFont(0, font);
        treeWidget_group->setHeaderItem(__qtreewidgetitem);
        QFont font1;
        font1.setPointSize(14);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/source/blue.png"), QSize(), QIcon::Normal, QIcon::Off);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/source/red.png"), QSize(), QIcon::Normal, QIcon::Off);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(treeWidget_group);
        __qtreewidgetitem1->setIcon(1, icon);
        __qtreewidgetitem1->setFont(0, font1);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(treeWidget_group);
        __qtreewidgetitem2->setFont(1, font1);
        __qtreewidgetitem2->setIcon(1, icon1);
        __qtreewidgetitem2->setFont(0, font1);
        treeWidget_group->setObjectName("treeWidget_group");
        treeWidget_group->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(treeWidget_group);

        widget_1 = new QWidget(MainWindow);
        widget_1->setObjectName("widget_1");
        widget_1->setGeometry(QRect(60, 150, 278, 214));
        horizontalLayout = new QHBoxLayout(widget_1);
        horizontalLayout->setObjectName("horizontalLayout");
        treeWidget_menu = new QTreeWidget(widget_1);
        QTreeWidgetItem *__qtreewidgetitem3 = new QTreeWidgetItem();
        __qtreewidgetitem3->setTextAlignment(0, Qt::AlignLeading|Qt::AlignVCenter);
        __qtreewidgetitem3->setFont(0, font);
        treeWidget_menu->setHeaderItem(__qtreewidgetitem3);
        QTreeWidgetItem *__qtreewidgetitem4 = new QTreeWidgetItem(treeWidget_menu);
        __qtreewidgetitem4->setFont(0, font1);
        new QTreeWidgetItem(__qtreewidgetitem4);
        new QTreeWidgetItem(__qtreewidgetitem4);
        QTreeWidgetItem *__qtreewidgetitem5 = new QTreeWidgetItem(treeWidget_menu);
        __qtreewidgetitem5->setFont(0, font1);
        new QTreeWidgetItem(__qtreewidgetitem5);
        new QTreeWidgetItem(__qtreewidgetitem5);
        new QTreeWidgetItem(__qtreewidgetitem5);
        QTreeWidgetItem *__qtreewidgetitem6 = new QTreeWidgetItem(treeWidget_menu);
        __qtreewidgetitem6->setFont(0, font1);
        new QTreeWidgetItem(__qtreewidgetitem6);
        new QTreeWidgetItem(__qtreewidgetitem6);
        new QTreeWidgetItem(__qtreewidgetitem6);
        new QTreeWidgetItem(__qtreewidgetitem6);
        new QTreeWidgetItem(__qtreewidgetitem6);
        QTreeWidgetItem *__qtreewidgetitem7 = new QTreeWidgetItem(treeWidget_menu);
        __qtreewidgetitem7->setFont(0, font1);
        new QTreeWidgetItem(__qtreewidgetitem7);
        treeWidget_menu->setObjectName("treeWidget_menu");
        treeWidget_menu->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(treeWidget_menu);


        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget_group->headerItem();
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("MainWindow", "\345\235\220\346\240\207(X,Y)", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("MainWindow", "\345\247\223\345\220\215", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("MainWindow", "\344\272\272\345\221\230", nullptr));

        const bool __sortingEnabled = treeWidget_group->isSortingEnabled();
        treeWidget_group->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget_group->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("MainWindow", "\346\225\231\345\270\210", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = treeWidget_group->topLevelItem(1);
        ___qtreewidgetitem2->setText(0, QCoreApplication::translate("MainWindow", "\345\255\246\347\224\237", nullptr));
        treeWidget_group->setSortingEnabled(__sortingEnabled);

        QTreeWidgetItem *___qtreewidgetitem3 = treeWidget_menu->headerItem();
        ___qtreewidgetitem3->setText(0, QCoreApplication::translate("MainWindow", "\345\212\237\350\203\275\350\217\234\345\215\225", nullptr));

        const bool __sortingEnabled1 = treeWidget_menu->isSortingEnabled();
        treeWidget_menu->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem4 = treeWidget_menu->topLevelItem(0);
        ___qtreewidgetitem4->setText(0, QCoreApplication::translate("MainWindow", "\345\256\244\345\206\205\345\256\232\344\275\215", nullptr));
        QTreeWidgetItem *___qtreewidgetitem5 = ___qtreewidgetitem4->child(0);
        ___qtreewidgetitem5->setText(0, QCoreApplication::translate("MainWindow", "\345\256\236\346\227\266\345\256\232\344\275\215", nullptr));
        QTreeWidgetItem *___qtreewidgetitem6 = ___qtreewidgetitem4->child(1);
        ___qtreewidgetitem6->setText(0, QCoreApplication::translate("MainWindow", "\345\256\232\344\275\215\345\217\202\346\225\260", nullptr));
        QTreeWidgetItem *___qtreewidgetitem7 = treeWidget_menu->topLevelItem(1);
        ___qtreewidgetitem7->setText(0, QCoreApplication::translate("MainWindow", "\346\237\245\350\257\242\347\273\237\350\256\241", nullptr));
        QTreeWidgetItem *___qtreewidgetitem8 = ___qtreewidgetitem7->child(0);
        ___qtreewidgetitem8->setText(0, QCoreApplication::translate("MainWindow", "\345\256\232\344\275\215\346\237\245\350\257\242", nullptr));
        QTreeWidgetItem *___qtreewidgetitem9 = ___qtreewidgetitem7->child(1);
        ___qtreewidgetitem9->setText(0, QCoreApplication::translate("MainWindow", "\350\200\203\345\213\244\350\256\260\345\275\225", nullptr));
        QTreeWidgetItem *___qtreewidgetitem10 = ___qtreewidgetitem7->child(2);
        ___qtreewidgetitem10->setText(0, QCoreApplication::translate("MainWindow", "\346\212\245\350\255\246\350\256\260\345\275\225", nullptr));
        QTreeWidgetItem *___qtreewidgetitem11 = treeWidget_menu->topLevelItem(2);
        ___qtreewidgetitem11->setText(0, QCoreApplication::translate("MainWindow", "\345\237\272\347\241\200\350\256\276\347\275\256", nullptr));
        QTreeWidgetItem *___qtreewidgetitem12 = ___qtreewidgetitem11->child(0);
        ___qtreewidgetitem12->setText(0, QCoreApplication::translate("MainWindow", "\351\203\250\351\227\250\347\256\241\347\220\206", nullptr));
        QTreeWidgetItem *___qtreewidgetitem13 = ___qtreewidgetitem11->child(1);
        ___qtreewidgetitem13->setText(0, QCoreApplication::translate("MainWindow", "\345\262\227\344\275\215\347\256\241\347\220\206", nullptr));
        QTreeWidgetItem *___qtreewidgetitem14 = ___qtreewidgetitem11->child(2);
        ___qtreewidgetitem14->setText(0, QCoreApplication::translate("MainWindow", "\350\275\246\350\276\206\347\261\273\345\236\213", nullptr));
        QTreeWidgetItem *___qtreewidgetitem15 = ___qtreewidgetitem11->child(3);
        ___qtreewidgetitem15->setText(0, QCoreApplication::translate("MainWindow", "\344\272\272\345\221\230\347\256\241\347\220\206", nullptr));
        QTreeWidgetItem *___qtreewidgetitem16 = ___qtreewidgetitem11->child(4);
        ___qtreewidgetitem16->setText(0, QCoreApplication::translate("MainWindow", "\345\237\272\347\253\231\347\256\241\347\220\206", nullptr));
        QTreeWidgetItem *___qtreewidgetitem17 = treeWidget_menu->topLevelItem(3);
        ___qtreewidgetitem17->setText(0, QCoreApplication::translate("MainWindow", "\347\263\273\347\273\237\350\256\276\347\275\256", nullptr));
        QTreeWidgetItem *___qtreewidgetitem18 = ___qtreewidgetitem17->child(0);
        ___qtreewidgetitem18->setText(0, QCoreApplication::translate("MainWindow", "\347\224\250\346\210\267\347\256\241\347\220\206", nullptr));
        treeWidget_menu->setSortingEnabled(__sortingEnabled1);

    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
