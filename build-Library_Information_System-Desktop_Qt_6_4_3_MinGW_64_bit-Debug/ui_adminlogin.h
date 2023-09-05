/********************************************************************************
** Form generated from reading UI file 'adminlogin.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINLOGIN_H
#define UI_ADMINLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminLogin
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFrame *background;
    QFrame *centreFrame;
    QPushButton *pushButton_password;
    QPushButton *pushButton_login;
    QPlainTextEdit *plainTextEdit;
    QPlainTextEdit *plainTextEdit_2;
    QLabel *label;
    QGroupBox *LoginBox;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_password;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QMainWindow *AdminLogin)
    {
        if (AdminLogin->objectName().isEmpty())
            AdminLogin->setObjectName("AdminLogin");
        AdminLogin->resize(1019, 670);
        centralwidget = new QWidget(AdminLogin);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        background = new QFrame(centralwidget);
        background->setObjectName("background");
        background->setStyleSheet(QString::fromUtf8("background: rgb(220, 245, 255);;"));
        background->setFrameShape(QFrame::StyledPanel);
        background->setFrameShadow(QFrame::Raised);
        centreFrame = new QFrame(background);
        centreFrame->setObjectName("centreFrame");
        centreFrame->setEnabled(true);
        centreFrame->setGeometry(QRect(200, 90, 611, 441));
        centreFrame->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-radius: 20px;"));
        centreFrame->setFrameShape(QFrame::StyledPanel);
        centreFrame->setFrameShadow(QFrame::Raised);
        pushButton_password = new QPushButton(centreFrame);
        pushButton_password->setObjectName("pushButton_password");
        pushButton_password->setGeometry(QRect(80, 360, 181, 31));
        pushButton_password->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background: #ADADAD;\n"
"font-family: open sans;\n"
"color: white;\n"
"font-weight: bold;\n"
""));
        pushButton_password->setAutoDefault(true);
        pushButton_password->setFlat(false);
        pushButton_login = new QPushButton(centreFrame);
        pushButton_login->setObjectName("pushButton_login");
        pushButton_login->setGeometry(QRect(340, 360, 181, 31));
        pushButton_login->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background: black;\n"
"font-family: open sans;\n"
"color: white;\n"
"font-weight: bold;\n"
""));
        pushButton_login->setAutoDefault(true);
        pushButton_login->setFlat(false);
        plainTextEdit = new QPlainTextEdit(centreFrame);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(80, 120, 241, 31));
        plainTextEdit->setStyleSheet(QString::fromUtf8("font-family: Baloo 2;\n"
"font-weight: bold;\n"
"font-size: 20px;"));
        plainTextEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit->setReadOnly(true);
        plainTextEdit_2 = new QPlainTextEdit(centreFrame);
        plainTextEdit_2->setObjectName("plainTextEdit_2");
        plainTextEdit_2->setGeometry(QRect(80, 160, 311, 31));
        plainTextEdit_2->setStyleSheet(QString::fromUtf8("font-family: Baloo 2;"));
        plainTextEdit_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit_2->setReadOnly(true);
        label = new QLabel(centreFrame);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 40, 71, 61));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/logo - Copy.png")));
        label->setScaledContents(true);
        LoginBox = new QGroupBox(centreFrame);
        LoginBox->setObjectName("LoginBox");
        LoginBox->setGeometry(QRect(80, 220, 441, 91));
        lineEdit_username = new QLineEdit(LoginBox);
        lineEdit_username->setObjectName("lineEdit_username");
        lineEdit_username->setGeometry(QRect(90, 0, 351, 31));
        lineEdit_username->setStyleSheet(QString::fromUtf8("border-color: black;\n"
"border-width: 5px;\n"
"border-radius: 5px;\n"
"background: rgb(229, 229, 229);"));
        lineEdit_password = new QLineEdit(LoginBox);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setGeometry(QRect(90, 60, 351, 31));
        lineEdit_password->setStyleSheet(QString::fromUtf8("border-color: black;\n"
"border-width: 5px;\n"
"border-radius: 5px;\n"
"background: rgb(229, 229, 229);"));
        lineEdit_password->setEchoMode(QLineEdit::Password);
        label_2 = new QLabel(LoginBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 10, 71, 16));
        label_2->setStyleSheet(QString::fromUtf8("font-family: Baloo 2;"));
        label_3 = new QLabel(LoginBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(0, 70, 61, 16));
        label_3->setStyleSheet(QString::fromUtf8("font-family: Baloo 2;"));

        verticalLayout->addWidget(background);

        AdminLogin->setCentralWidget(centralwidget);

        retranslateUi(AdminLogin);

        pushButton_password->setDefault(false);
        pushButton_login->setDefault(false);


        QMetaObject::connectSlotsByName(AdminLogin);
    } // setupUi

    void retranslateUi(QMainWindow *AdminLogin)
    {
        AdminLogin->setWindowTitle(QCoreApplication::translate("AdminLogin", "MainWindow", nullptr));
        pushButton_password->setText(QCoreApplication::translate("AdminLogin", "Forgot Password?", nullptr));
        pushButton_login->setText(QCoreApplication::translate("AdminLogin", "Login", nullptr));
        plainTextEdit->setPlainText(QCoreApplication::translate("AdminLogin", "NATIONAL LIBRARY", nullptr));
        plainTextEdit_2->setPlainText(QCoreApplication::translate("AdminLogin", "Please login below to access the library's services.", nullptr));
        label->setText(QString());
        LoginBox->setTitle(QString());
        label_2->setText(QCoreApplication::translate("AdminLogin", "Username", nullptr));
        label_3->setText(QCoreApplication::translate("AdminLogin", "Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminLogin: public Ui_AdminLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINLOGIN_H
