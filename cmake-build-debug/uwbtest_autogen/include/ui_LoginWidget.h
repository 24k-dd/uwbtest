/********************************************************************************
** Form generated from reading UI file 'loginwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWIDGET_H
#define UI_LOGINWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_5;
    QLabel *label;
    QSpacerItem *verticalSpacer_4;
    QComboBox *comboBox;
    QSpacerItem *verticalSpacer_3;
    QLineEdit *lineEdit_username;
    QSpacerItem *verticalSpacer_2;
    QLineEdit *lineEdit_password;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_quit;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_login;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QWidget *LoginWidget)
    {
        if (LoginWidget->objectName().isEmpty())
            LoginWidget->setObjectName("LoginWidget");
        LoginWidget->resize(587, 497);
        verticalLayout_2 = new QVBoxLayout(LoginWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        label = new QLabel(LoginWidget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(35);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        comboBox = new QComboBox(LoginWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        QFont font1;
        font1.setBold(false);
        comboBox->setFont(font1);
#if QT_CONFIG(tooltip)
        comboBox->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
        comboBox->setStyleSheet(QString::fromUtf8("color{rgb(0, 0, 0)};"));

        verticalLayout->addWidget(comboBox);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        lineEdit_username = new QLineEdit(LoginWidget);
        lineEdit_username->setObjectName("lineEdit_username");
        lineEdit_username->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lineEdit_username);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        lineEdit_password = new QLineEdit(LoginWidget);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lineEdit_password);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton_quit = new QPushButton(LoginWidget);
        pushButton_quit->setObjectName("pushButton_quit");

        horizontalLayout->addWidget(pushButton_quit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_login = new QPushButton(LoginWidget);
        pushButton_login->setObjectName("pushButton_login");

        horizontalLayout->addWidget(pushButton_login);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_6);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(LoginWidget);

        QMetaObject::connectSlotsByName(LoginWidget);
    } // setupUi

    void retranslateUi(QWidget *LoginWidget)
    {
        LoginWidget->setWindowTitle(QCoreApplication::translate("LoginWidget", "LoginWidget", nullptr));
        label->setText(QCoreApplication::translate("LoginWidget", "UWB\344\272\214\347\273\264\345\256\232\344\275\215\347\263\273\347\273\237", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("LoginWidget", "\347\263\273\347\273\237\347\256\241\347\220\206\345\221\230", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("LoginWidget", "\346\231\256\351\200\232\347\224\250\346\210\2671", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("LoginWidget", "\346\231\256\351\200\232\347\224\250\346\210\2672", nullptr));

        lineEdit_username->setPlaceholderText(QCoreApplication::translate("LoginWidget", "username", nullptr));
        lineEdit_password->setPlaceholderText(QCoreApplication::translate("LoginWidget", "password", nullptr));
        pushButton_quit->setText(QCoreApplication::translate("LoginWidget", "\345\217\226\346\266\210", nullptr));
        pushButton_login->setText(QCoreApplication::translate("LoginWidget", "\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWidget: public Ui_LoginWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWIDGET_H
