/********************************************************************************
** Form generated from reading UI file 'memberhome.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMBERHOME_H
#define UI_MEMBERHOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MemberHome
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QGroupBox *menuPanel;
    QLabel *logo;
    QPushButton *logout;
    QFrame *menu;
    QFrame *membership_1;
    QLabel *label_9;
    QPushButton *membership_2;
    QFrame *catalogue_1;
    QLabel *label_10;
    QPushButton *catalogue_2;
    QFrame *status_1;
    QLabel *label_11;
    QPushButton *booked;
    QListWidget *listWidget_2;
    QFrame *overdue_1;
    QLabel *label_12;
    QPushButton *overdue;
    QLabel *label;
    QFrame *heading;
    QPlainTextEdit *plainTextEdit_2;
    QPlainTextEdit *userName;
    QPlainTextEdit *plainTextEdit_4;
    QFrame *frame_5;
    QLabel *label_4;

    void setupUi(QMainWindow *MemberHome)
    {
        if (MemberHome->objectName().isEmpty())
            MemberHome->setObjectName("MemberHome");
        MemberHome->resize(1019, 670);
        centralwidget = new QWidget(MemberHome);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setStyleSheet(QString::fromUtf8("background: white;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        menuPanel = new QGroupBox(frame);
        menuPanel->setObjectName("menuPanel");
        menuPanel->setGeometry(QRect(0, 0, 231, 671));
        menuPanel->setStyleSheet(QString::fromUtf8("background: rgb(220, 245, 255);"));
        logo = new QLabel(menuPanel);
        logo->setObjectName("logo");
        logo->setGeometry(QRect(50, 40, 131, 101));
        logo->setPixmap(QPixmap(QString::fromUtf8(":/images/logo.png")));
        logo->setScaledContents(true);
        logout = new QPushButton(menuPanel);
        logout->setObjectName("logout");
        logout->setGeometry(QRect(80, 600, 75, 31));
        logout->setStyleSheet(QString::fromUtf8(""));
        menu = new QFrame(menuPanel);
        menu->setObjectName("menu");
        menu->setGeometry(QRect(20, 170, 191, 381));
        menu->setFrameShape(QFrame::StyledPanel);
        menu->setFrameShadow(QFrame::Raised);
        membership_1 = new QFrame(menu);
        membership_1->setObjectName("membership_1");
        membership_1->setGeometry(QRect(20, 260, 151, 51));
        membership_1->setStyleSheet(QString::fromUtf8("background: white;"));
        membership_1->setFrameShape(QFrame::StyledPanel);
        membership_1->setFrameShadow(QFrame::Raised);
        label_9 = new QLabel(membership_1);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(10, 10, 31, 31));
        label_9->setPixmap(QPixmap(QString::fromUtf8(":/images/Icons/user.png")));
        label_9->setScaledContents(true);
        membership_2 = new QPushButton(membership_1);
        membership_2->setObjectName("membership_2");
        membership_2->setGeometry(QRect(50, 10, 81, 31));
        membership_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background: transparent;\n"
"font-size: 14px;\n"
"border: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	color: rgb(124, 204, 241);\n"
"}"));
        catalogue_1 = new QFrame(menu);
        catalogue_1->setObjectName("catalogue_1");
        catalogue_1->setGeometry(QRect(20, 80, 151, 51));
        catalogue_1->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-radius: 5px;"));
        catalogue_1->setFrameShape(QFrame::StyledPanel);
        catalogue_1->setFrameShadow(QFrame::Raised);
        label_10 = new QLabel(catalogue_1);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(10, 10, 31, 31));
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/images/Icons/books.png")));
        label_10->setScaledContents(true);
        catalogue_2 = new QPushButton(catalogue_1);
        catalogue_2->setObjectName("catalogue_2");
        catalogue_2->setGeometry(QRect(50, 10, 71, 31));
        catalogue_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background: transparent;\n"
"font-size: 14px;\n"
"border: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	color: rgb(124, 204, 241);\n"
"}"));
        catalogue_2->setAutoDefault(false);
        status_1 = new QFrame(menu);
        status_1->setObjectName("status_1");
        status_1->setGeometry(QRect(20, 200, 151, 51));
        status_1->setStyleSheet(QString::fromUtf8("background: white;"));
        status_1->setFrameShape(QFrame::StyledPanel);
        status_1->setFrameShadow(QFrame::Raised);
        label_11 = new QLabel(status_1);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(10, 10, 31, 31));
        label_11->setPixmap(QPixmap(QString::fromUtf8(":/images/Icons/book.png")));
        label_11->setScaledContents(true);
        booked = new QPushButton(status_1);
        booked->setObjectName("booked");
        booked->setGeometry(QRect(50, 10, 81, 31));
        booked->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background: transparent;\n"
"font-size: 14px;\n"
"border: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	color: rgb(124, 204, 241);\n"
"}"));
        listWidget_2 = new QListWidget(menu);
        listWidget_2->setObjectName("listWidget_2");
        listWidget_2->setGeometry(QRect(0, 10, 191, 351));
        listWidget_2->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-radius: 5px;"));
        listWidget_2->setFrameShadow(QFrame::Raised);
        overdue_1 = new QFrame(menu);
        overdue_1->setObjectName("overdue_1");
        overdue_1->setGeometry(QRect(20, 140, 151, 51));
        overdue_1->setStyleSheet(QString::fromUtf8("background: white;"));
        overdue_1->setFrameShape(QFrame::StyledPanel);
        overdue_1->setFrameShadow(QFrame::Raised);
        label_12 = new QLabel(overdue_1);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(10, 10, 31, 31));
        label_12->setPixmap(QPixmap(QString::fromUtf8(":/images/Icons/overdue.png")));
        label_12->setScaledContents(true);
        overdue = new QPushButton(overdue_1);
        overdue->setObjectName("overdue");
        overdue->setGeometry(QRect(50, 10, 61, 31));
        overdue->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background: transparent;\n"
"font-size: 14px;\n"
"border: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	color: rgb(124, 204, 241);\n"
"}"));
        label = new QLabel(menu);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 30, 191, 20));
        label->setLayoutDirection(Qt::LeftToRight);
        label->setStyleSheet(QString::fromUtf8("font-weight: bold;\n"
"background: white;\n"
"font-size: 15px;\n"
""));
        label->setAlignment(Qt::AlignCenter);
        listWidget_2->raise();
        overdue_1->raise();
        membership_1->raise();
        catalogue_1->raise();
        status_1->raise();
        label->raise();
        heading = new QFrame(frame);
        heading->setObjectName("heading");
        heading->setGeometry(QRect(300, 20, 641, 121));
        heading->setFrameShape(QFrame::StyledPanel);
        heading->setFrameShadow(QFrame::Raised);
        plainTextEdit_2 = new QPlainTextEdit(heading);
        plainTextEdit_2->setObjectName("plainTextEdit_2");
        plainTextEdit_2->setGeometry(QRect(0, 20, 641, 91));
        plainTextEdit_2->setStyleSheet(QString::fromUtf8("background: rgb(235, 235, 235);\n"
"border-radius: 10px;"));
        plainTextEdit_2->setFrameShadow(QFrame::Raised);
        userName = new QPlainTextEdit(heading);
        userName->setObjectName("userName");
        userName->setGeometry(QRect(20, 40, 619, 31));
        userName->setStyleSheet(QString::fromUtf8("font-family: Baloo 2;\n"
"font-weight: bold;\n"
"font-size: 23px;\n"
"background: transparent;"));
        userName->setFrameShape(QFrame::NoFrame);
        userName->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        userName->setReadOnly(true);
        plainTextEdit_4 = new QPlainTextEdit(heading);
        plainTextEdit_4->setObjectName("plainTextEdit_4");
        plainTextEdit_4->setGeometry(QRect(20, 70, 619, 31));
        plainTextEdit_4->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font-family: Baloo 2;\n"
"font-size: 13px;"));
        plainTextEdit_4->setFrameShape(QFrame::NoFrame);
        plainTextEdit_4->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit_4->setReadOnly(true);
        frame_5 = new QFrame(frame);
        frame_5->setObjectName("frame_5");
        frame_5->setGeometry(QRect(300, 180, 641, 431));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        label_4 = new QLabel(frame_5);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(0, -10, 651, 421));
        label_4->setStyleSheet(QString::fromUtf8(""));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/images/library.jpg")));
        label_4->setScaledContents(true);

        verticalLayout->addWidget(frame);

        MemberHome->setCentralWidget(centralwidget);

        retranslateUi(MemberHome);

        QMetaObject::connectSlotsByName(MemberHome);
    } // setupUi

    void retranslateUi(QMainWindow *MemberHome)
    {
        MemberHome->setWindowTitle(QCoreApplication::translate("MemberHome", "MainWindow", nullptr));
        menuPanel->setTitle(QString());
        logo->setText(QString());
        logout->setText(QCoreApplication::translate("MemberHome", "Logout", nullptr));
        label_9->setText(QString());
        membership_2->setText(QCoreApplication::translate("MemberHome", "Membership", nullptr));
        label_10->setText(QString());
        catalogue_2->setText(QCoreApplication::translate("MemberHome", "Catalogue", nullptr));
        label_11->setText(QString());
        booked->setText(QCoreApplication::translate("MemberHome", "Pre-Booked", nullptr));
        label_12->setText(QString());
        overdue->setText(QCoreApplication::translate("MemberHome", "Overdue", nullptr));
        label->setText(QCoreApplication::translate("MemberHome", "Member Menu", nullptr));
        plainTextEdit_2->setPlainText(QString());
        userName->setPlainText(QString());
        plainTextEdit_4->setPlainText(QCoreApplication::translate("MemberHome", "Please head to the Member Menu to start your day.", nullptr));
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MemberHome: public Ui_MemberHome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMBERHOME_H
