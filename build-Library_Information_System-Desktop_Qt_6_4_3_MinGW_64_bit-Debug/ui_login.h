/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFrame *background;
    QFrame *centreFrame;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPlainTextEdit *plainTextEdit;
    QPlainTextEdit *plainTextEdit_2;
    QLabel *label;

    void setupUi(QMainWindow *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(1019, 670);
        centralwidget = new QWidget(Login);
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
        centreFrame->setGeometry(QRect(200, 150, 601, 351));
        centreFrame->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-radius: 20px;"));
        centreFrame->setFrameShape(QFrame::StyledPanel);
        centreFrame->setFrameShadow(QFrame::Raised);
        pushButton_2 = new QPushButton(centreFrame);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(90, 250, 181, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background: #ADADAD;\n"
"font-family: open sans;\n"
"color: white;\n"
"font-weight: bold;\n"
""));
        pushButton_2->setAutoDefault(true);
        pushButton_2->setFlat(false);
        pushButton_3 = new QPushButton(centreFrame);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(330, 250, 181, 31));
        pushButton_3->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background: black;\n"
"font-family: open sans;\n"
"color: white;\n"
"font-weight: bold;\n"
""));
        pushButton_3->setAutoDefault(true);
        pushButton_3->setFlat(false);
        plainTextEdit = new QPlainTextEdit(centreFrame);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(90, 140, 241, 31));
        plainTextEdit->setStyleSheet(QString::fromUtf8("font-family: Baloo 2;\n"
"font-weight: bold;\n"
"font-size: 20px;"));
        plainTextEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit->setReadOnly(true);
        plainTextEdit_2 = new QPlainTextEdit(centreFrame);
        plainTextEdit_2->setObjectName("plainTextEdit_2");
        plainTextEdit_2->setGeometry(QRect(90, 180, 371, 31));
        plainTextEdit_2->setStyleSheet(QString::fromUtf8("font-family: Baloo 2;"));
        plainTextEdit_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit_2->setReadOnly(true);
        label = new QLabel(centreFrame);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 40, 81, 71));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/logo - Copy.png")));
        label->setScaledContents(true);

        verticalLayout->addWidget(background);

        Login->setCentralWidget(centralwidget);

        retranslateUi(Login);

        pushButton_2->setDefault(false);
        pushButton_3->setDefault(false);


        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QMainWindow *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Login", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Login", "ADMIN", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Login", "MEMBER", nullptr));
        plainTextEdit->setPlainText(QCoreApplication::translate("Login", "NATIONAL LIBRARY", nullptr));
        plainTextEdit_2->setPlainText(QCoreApplication::translate("Login", "Welcome to the National Library.  Please select an option below.", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
