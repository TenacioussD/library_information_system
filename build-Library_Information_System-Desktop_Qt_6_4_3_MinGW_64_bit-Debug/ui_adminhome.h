/********************************************************************************
** Form generated from reading UI file 'adminhome.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINHOME_H
#define UI_ADMINHOME_H

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

class Ui_AdminHome
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QGroupBox *menuPanel;
    QLabel *logo;
    QPushButton *pushButton;
    QFrame *menu;
    QListWidget *listWidget_2;
    QFrame *catalogue_1;
    QLabel *label_5;
    QPushButton *catalogue;
    QFrame *manageBooks_1;
    QLabel *label_6;
    QPushButton *manageBooks;
    QFrame *status_1;
    QLabel *label_7;
    QPushButton *status;
    QFrame *membership_1;
    QLabel *label_8;
    QPushButton *membership;
    QLabel *label_9;
    QFrame *heading;
    QPlainTextEdit *plainTextEdit_2;
    QPlainTextEdit *plainTextEdit_3;
    QPlainTextEdit *plainTextEdit_4;
    QFrame *frame_2;
    QPlainTextEdit *plainTextEdit_7;
    QLabel *label;
    QPlainTextEdit *plainTextEdit_5;
    QPlainTextEdit *plainTextEdit;
    QFrame *frame_3;
    QPlainTextEdit *plainTextEdit_8;
    QLabel *label_2;
    QPlainTextEdit *plainTextEdit_10;
    QPlainTextEdit *plainTextEdit_11;
    QFrame *frame_4;
    QPlainTextEdit *plainTextEdit_9;
    QLabel *label_3;
    QPlainTextEdit *plainTextEdit_12;
    QPlainTextEdit *plainTextEdit_6;
    QFrame *frame_5;
    QLabel *label_4;
    QFrame *frame_6;
    QPlainTextEdit *plainTextEdit_14;
    QPlainTextEdit *plainTextEdit_16;
    QPlainTextEdit *plainTextEdit_17;
    QPlainTextEdit *plainTextEdit_18;
    QPlainTextEdit *plainTextEdit_19;
    QPlainTextEdit *plainTextEdit_15;
    QPlainTextEdit *plainTextEdit_20;
    QPlainTextEdit *plainTextEdit_21;
    QPlainTextEdit *plainTextEdit_22;

    void setupUi(QMainWindow *AdminHome)
    {
        if (AdminHome->objectName().isEmpty())
            AdminHome->setObjectName("AdminHome");
        AdminHome->resize(1019, 670);
        centralwidget = new QWidget(AdminHome);
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
        pushButton = new QPushButton(menuPanel);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(80, 600, 75, 31));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"	color: rgb(106, 146, 255);\n"
"}"));
        menu = new QFrame(menuPanel);
        menu->setObjectName("menu");
        menu->setGeometry(QRect(20, 180, 191, 381));
        menu->setFrameShape(QFrame::StyledPanel);
        menu->setFrameShadow(QFrame::Raised);
        listWidget_2 = new QListWidget(menu);
        listWidget_2->setObjectName("listWidget_2");
        listWidget_2->setGeometry(QRect(0, 10, 191, 341));
        listWidget_2->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-radius: 5px;"));
        listWidget_2->setFrameShadow(QFrame::Raised);
        catalogue_1 = new QFrame(menu);
        catalogue_1->setObjectName("catalogue_1");
        catalogue_1->setGeometry(QRect(20, 80, 151, 51));
        catalogue_1->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-radius: 5px;"));
        catalogue_1->setFrameShape(QFrame::StyledPanel);
        catalogue_1->setFrameShadow(QFrame::Raised);
        label_5 = new QLabel(catalogue_1);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 10, 31, 31));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/images/Icons/books.png")));
        label_5->setScaledContents(true);
        catalogue = new QPushButton(catalogue_1);
        catalogue->setObjectName("catalogue");
        catalogue->setGeometry(QRect(50, 10, 71, 31));
        catalogue->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background: transparent;\n"
"font-size: 14px;\n"
"border: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	color: rgb(124, 204, 241);\n"
"}"));
        catalogue->setAutoDefault(false);
        manageBooks_1 = new QFrame(menu);
        manageBooks_1->setObjectName("manageBooks_1");
        manageBooks_1->setGeometry(QRect(20, 140, 151, 51));
        manageBooks_1->setStyleSheet(QString::fromUtf8("background: white;"));
        manageBooks_1->setFrameShape(QFrame::StyledPanel);
        manageBooks_1->setFrameShadow(QFrame::Raised);
        label_6 = new QLabel(manageBooks_1);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 10, 31, 31));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/images/Icons/book.png")));
        label_6->setScaledContents(true);
        manageBooks = new QPushButton(manageBooks_1);
        manageBooks->setObjectName("manageBooks");
        manageBooks->setGeometry(QRect(50, 10, 91, 31));
        manageBooks->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background: transparent;\n"
"font-size: 14px;\n"
"border: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	color: rgb(124, 204, 241);\n"
"}"));
        status_1 = new QFrame(menu);
        status_1->setObjectName("status_1");
        status_1->setGeometry(QRect(20, 200, 151, 51));
        status_1->setStyleSheet(QString::fromUtf8("background: white;"));
        status_1->setFrameShape(QFrame::StyledPanel);
        status_1->setFrameShadow(QFrame::Raised);
        label_7 = new QLabel(status_1);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 10, 31, 31));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/images/Icons/status.png")));
        label_7->setScaledContents(true);
        status = new QPushButton(status_1);
        status->setObjectName("status");
        status->setGeometry(QRect(50, 10, 71, 31));
        status->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background: transparent;\n"
"font-size: 14px;\n"
"border: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	color: rgb(124, 204, 241);\n"
"}"));
        membership_1 = new QFrame(menu);
        membership_1->setObjectName("membership_1");
        membership_1->setGeometry(QRect(20, 260, 151, 51));
        membership_1->setStyleSheet(QString::fromUtf8("background: white;"));
        membership_1->setFrameShape(QFrame::StyledPanel);
        membership_1->setFrameShadow(QFrame::Raised);
        label_8 = new QLabel(membership_1);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(10, 10, 31, 31));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/images/Icons/user.png")));
        label_8->setScaledContents(true);
        membership = new QPushButton(membership_1);
        membership->setObjectName("membership");
        membership->setGeometry(QRect(50, 10, 81, 31));
        membership->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background: transparent;\n"
"font-size: 14px;\n"
"border: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	color: rgb(124, 204, 241);\n"
"}"));
        label_9 = new QLabel(menu);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(0, 30, 191, 20));
        label_9->setLayoutDirection(Qt::LeftToRight);
        label_9->setStyleSheet(QString::fromUtf8("font-weight: bold;\n"
"background: white;\n"
"font-size: 15px;\n"
""));
        label_9->setAlignment(Qt::AlignCenter);
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
        plainTextEdit_3 = new QPlainTextEdit(heading);
        plainTextEdit_3->setObjectName("plainTextEdit_3");
        plainTextEdit_3->setGeometry(QRect(30, 40, 411, 41));
        plainTextEdit_3->setStyleSheet(QString::fromUtf8("font-family: Baloo 2;\n"
"font-weight: bold;\n"
"font-size: 23px;\n"
"background: transparent;"));
        plainTextEdit_3->setFrameShape(QFrame::NoFrame);
        plainTextEdit_4 = new QPlainTextEdit(heading);
        plainTextEdit_4->setObjectName("plainTextEdit_4");
        plainTextEdit_4->setGeometry(QRect(30, 70, 411, 31));
        plainTextEdit_4->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font-family: Baloo 2;\n"
"font-size: 13px;"));
        plainTextEdit_4->setFrameShape(QFrame::NoFrame);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(300, 150, 201, 101));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        plainTextEdit_7 = new QPlainTextEdit(frame_2);
        plainTextEdit_7->setObjectName("plainTextEdit_7");
        plainTextEdit_7->setGeometry(QRect(0, 10, 201, 81));
        plainTextEdit_7->setStyleSheet(QString::fromUtf8("background: rgb(235, 235, 235);\n"
"border-radius: 10px;"));
        plainTextEdit_7->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame_2);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 30, 41, 41));
        label->setStyleSheet(QString::fromUtf8("background: transparent;"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/Icons/users.png")));
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignCenter);
        label->setTextInteractionFlags(Qt::NoTextInteraction);
        plainTextEdit_5 = new QPlainTextEdit(frame_2);
        plainTextEdit_5->setObjectName("plainTextEdit_5");
        plainTextEdit_5->setGeometry(QRect(70, 20, 131, 31));
        plainTextEdit_5->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font-size: 12pt;"));
        plainTextEdit_5->setFrameShape(QFrame::NoFrame);
        plainTextEdit = new QPlainTextEdit(frame_2);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(70, 50, 121, 31));
        plainTextEdit->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font-weight: bold;\n"
"font-size: 17px;"));
        plainTextEdit->setFrameShape(QFrame::NoFrame);
        frame_3 = new QFrame(frame);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(520, 150, 201, 101));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        plainTextEdit_8 = new QPlainTextEdit(frame_3);
        plainTextEdit_8->setObjectName("plainTextEdit_8");
        plainTextEdit_8->setGeometry(QRect(0, 10, 201, 81));
        plainTextEdit_8->setStyleSheet(QString::fromUtf8("background: rgb(220, 245, 255);\n"
"border-radius: 10px;"));
        plainTextEdit_8->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame_3);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 30, 41, 41));
        label_2->setStyleSheet(QString::fromUtf8("background: transparent;"));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/images/Icons/book1.png")));
        label_2->setScaledContents(true);
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setTextInteractionFlags(Qt::NoTextInteraction);
        plainTextEdit_10 = new QPlainTextEdit(frame_3);
        plainTextEdit_10->setObjectName("plainTextEdit_10");
        plainTextEdit_10->setGeometry(QRect(70, 20, 131, 31));
        plainTextEdit_10->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font-size: 12pt;"));
        plainTextEdit_10->setFrameShape(QFrame::NoFrame);
        plainTextEdit_11 = new QPlainTextEdit(frame_3);
        plainTextEdit_11->setObjectName("plainTextEdit_11");
        plainTextEdit_11->setGeometry(QRect(70, 40, 61, 31));
        plainTextEdit_11->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font-weight: bold;\n"
"font-size: 17px;"));
        plainTextEdit_11->setFrameShape(QFrame::NoFrame);
        frame_4 = new QFrame(frame);
        frame_4->setObjectName("frame_4");
        frame_4->setGeometry(QRect(740, 150, 201, 101));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        plainTextEdit_9 = new QPlainTextEdit(frame_4);
        plainTextEdit_9->setObjectName("plainTextEdit_9");
        plainTextEdit_9->setGeometry(QRect(0, 10, 201, 81));
        plainTextEdit_9->setStyleSheet(QString::fromUtf8("background: rgb(235, 235, 235);\n"
"border-radius: 10px;"));
        plainTextEdit_9->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(frame_4);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 30, 41, 41));
        label_3->setStyleSheet(QString::fromUtf8("background: transparent;"));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/images/Icons/warning.png")));
        label_3->setScaledContents(true);
        label_3->setAlignment(Qt::AlignCenter);
        label_3->setTextInteractionFlags(Qt::NoTextInteraction);
        plainTextEdit_12 = new QPlainTextEdit(frame_4);
        plainTextEdit_12->setObjectName("plainTextEdit_12");
        plainTextEdit_12->setGeometry(QRect(70, 20, 121, 31));
        plainTextEdit_12->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font-size: 12pt;"));
        plainTextEdit_12->setFrameShape(QFrame::NoFrame);
        plainTextEdit_6 = new QPlainTextEdit(frame_4);
        plainTextEdit_6->setObjectName("plainTextEdit_6");
        plainTextEdit_6->setGeometry(QRect(60, 60, 121, 31));
        plainTextEdit_6->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font-weight: bold;\n"
"font-size: 17px;"));
        plainTextEdit_6->setFrameShape(QFrame::NoFrame);
        frame_5 = new QFrame(frame);
        frame_5->setObjectName("frame_5");
        frame_5->setGeometry(QRect(300, 280, 421, 321));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        label_4 = new QLabel(frame_5);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(0, 0, 421, 311));
        label_4->setStyleSheet(QString::fromUtf8(""));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/images/library.jpg")));
        label_4->setScaledContents(true);
        frame_6 = new QFrame(frame);
        frame_6->setObjectName("frame_6");
        frame_6->setGeometry(QRect(740, 270, 201, 331));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        plainTextEdit_14 = new QPlainTextEdit(frame_6);
        plainTextEdit_14->setObjectName("plainTextEdit_14");
        plainTextEdit_14->setGeometry(QRect(0, 10, 201, 311));
        plainTextEdit_14->setStyleSheet(QString::fromUtf8("background: rgb(220, 245, 255);\n"
"border-radius: 10px;"));
        plainTextEdit_14->setFrameShadow(QFrame::Raised);
        plainTextEdit_16 = new QPlainTextEdit(frame_6);
        plainTextEdit_16->setObjectName("plainTextEdit_16");
        plainTextEdit_16->setGeometry(QRect(10, 50, 181, 31));
        plainTextEdit_16->setStyleSheet(QString::fromUtf8("border-radius: 5px;\n"
"border-style: solid;\n"
"border-width: 1px;\n"
"font-size: 12px;\n"
"background: rgb(220, 245, 255);\n"
""));
        plainTextEdit_16->setFrameShape(QFrame::Box);
        plainTextEdit_16->setFrameShadow(QFrame::Plain);
        plainTextEdit_16->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit_17 = new QPlainTextEdit(frame_6);
        plainTextEdit_17->setObjectName("plainTextEdit_17");
        plainTextEdit_17->setGeometry(QRect(10, 90, 181, 31));
        plainTextEdit_17->setStyleSheet(QString::fromUtf8("border-radius: 5px;\n"
"border-style: solid;\n"
"border-width: 1px;\n"
"font-size: 12px;\n"
"background: rgb(220, 245, 255);\n"
""));
        plainTextEdit_17->setFrameShape(QFrame::Box);
        plainTextEdit_17->setFrameShadow(QFrame::Plain);
        plainTextEdit_17->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit_18 = new QPlainTextEdit(frame_6);
        plainTextEdit_18->setObjectName("plainTextEdit_18");
        plainTextEdit_18->setGeometry(QRect(10, 130, 181, 31));
        plainTextEdit_18->setStyleSheet(QString::fromUtf8("border-radius: 5px;\n"
"border-style: solid;\n"
"border-width: 1px;\n"
"font-size: 12px;\n"
"background: rgb(220, 245, 255);\n"
""));
        plainTextEdit_18->setFrameShape(QFrame::Box);
        plainTextEdit_18->setFrameShadow(QFrame::Plain);
        plainTextEdit_19 = new QPlainTextEdit(frame_6);
        plainTextEdit_19->setObjectName("plainTextEdit_19");
        plainTextEdit_19->setGeometry(QRect(70, 170, 81, 31));
        plainTextEdit_19->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font-size: 10pt;\n"
"font-weight: bold;"));
        plainTextEdit_19->setFrameShape(QFrame::NoFrame);
        plainTextEdit_15 = new QPlainTextEdit(frame_6);
        plainTextEdit_15->setObjectName("plainTextEdit_15");
        plainTextEdit_15->setGeometry(QRect(70, 20, 61, 31));
        plainTextEdit_15->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font-size: 10pt;\n"
"font-weight: bold;"));
        plainTextEdit_15->setFrameShape(QFrame::NoFrame);
        plainTextEdit_20 = new QPlainTextEdit(frame_6);
        plainTextEdit_20->setObjectName("plainTextEdit_20");
        plainTextEdit_20->setGeometry(QRect(10, 200, 181, 31));
        plainTextEdit_20->setStyleSheet(QString::fromUtf8("border-radius: 5px;\n"
"border-style: solid;\n"
"border-width: 1px;\n"
"font-size: 12px;\n"
"background: rgb(220, 245, 255);\n"
""));
        plainTextEdit_20->setFrameShape(QFrame::Box);
        plainTextEdit_20->setFrameShadow(QFrame::Plain);
        plainTextEdit_21 = new QPlainTextEdit(frame_6);
        plainTextEdit_21->setObjectName("plainTextEdit_21");
        plainTextEdit_21->setGeometry(QRect(10, 240, 181, 31));
        plainTextEdit_21->setStyleSheet(QString::fromUtf8("border-radius: 5px;\n"
"border-style: solid;\n"
"border-width: 1px;\n"
"font-size: 12px;\n"
"background: rgb(220, 245, 255);\n"
""));
        plainTextEdit_21->setFrameShape(QFrame::Box);
        plainTextEdit_21->setFrameShadow(QFrame::Plain);
        plainTextEdit_22 = new QPlainTextEdit(frame_6);
        plainTextEdit_22->setObjectName("plainTextEdit_22");
        plainTextEdit_22->setGeometry(QRect(10, 280, 181, 31));
        plainTextEdit_22->setStyleSheet(QString::fromUtf8("border-radius: 5px;\n"
"border-style: solid;\n"
"border-width: 1px;\n"
"font-size: 12px;\n"
"background: rgb(220, 245, 255);\n"
""));
        plainTextEdit_22->setFrameShape(QFrame::Box);
        plainTextEdit_22->setFrameShadow(QFrame::Plain);

        verticalLayout->addWidget(frame);

        AdminHome->setCentralWidget(centralwidget);

        retranslateUi(AdminHome);

        QMetaObject::connectSlotsByName(AdminHome);
    } // setupUi

    void retranslateUi(QMainWindow *AdminHome)
    {
        AdminHome->setWindowTitle(QCoreApplication::translate("AdminHome", "MainWindow", nullptr));
        menuPanel->setTitle(QString());
        logo->setText(QString());
        pushButton->setText(QCoreApplication::translate("AdminHome", "Logout", nullptr));
        label_5->setText(QString());
        catalogue->setText(QCoreApplication::translate("AdminHome", "Catalogue", nullptr));
        label_6->setText(QString());
        manageBooks->setText(QCoreApplication::translate("AdminHome", "Manage Books", nullptr));
        label_7->setText(QString());
        status->setText(QCoreApplication::translate("AdminHome", "View Status", nullptr));
        label_8->setText(QString());
        membership->setText(QCoreApplication::translate("AdminHome", "Membership", nullptr));
        label_9->setText(QCoreApplication::translate("AdminHome", "Admin Menu", nullptr));
        plainTextEdit_2->setPlainText(QString());
        plainTextEdit_3->setPlainText(QCoreApplication::translate("AdminHome", "Welcome Admin!", nullptr));
        plainTextEdit_4->setPlainText(QCoreApplication::translate("AdminHome", "Please head to the Admin Menu to start your day.", nullptr));
        plainTextEdit_7->setPlainText(QString());
        label->setText(QString());
        plainTextEdit_5->setPlainText(QCoreApplication::translate("AdminHome", "Total Members", nullptr));
        plainTextEdit->setPlainText(QString());
        plainTextEdit_8->setPlainText(QString());
        label_2->setText(QString());
        plainTextEdit_10->setPlainText(QCoreApplication::translate("AdminHome", "Books Available", nullptr));
        plainTextEdit_11->setPlainText(QCoreApplication::translate("AdminHome", "1,950", nullptr));
        plainTextEdit_9->setPlainText(QString());
        label_3->setText(QString());
        plainTextEdit_12->setPlainText(QCoreApplication::translate("AdminHome", "Overdue Books", nullptr));
        plainTextEdit_6->setPlainText(QString());
        label_4->setText(QString());
        plainTextEdit_14->setPlainText(QString());
        plainTextEdit_16->setPlainText(QCoreApplication::translate("AdminHome", "Different Winter  |  Mia Jackson", nullptr));
        plainTextEdit_17->setPlainText(QCoreApplication::translate("AdminHome", "Different Winter  |  Mia Jackson", nullptr));
        plainTextEdit_18->setPlainText(QCoreApplication::translate("AdminHome", "Different Winter  |  Mia Jackson", nullptr));
        plainTextEdit_19->setPlainText(QCoreApplication::translate("AdminHome", "Overdue", nullptr));
        plainTextEdit_15->setPlainText(QCoreApplication::translate("AdminHome", "Returns", nullptr));
        plainTextEdit_20->setPlainText(QCoreApplication::translate("AdminHome", "Different Winter  |  Mia Jackson", nullptr));
        plainTextEdit_21->setPlainText(QCoreApplication::translate("AdminHome", "Different Winter  |  Mia Jackson", nullptr));
        plainTextEdit_22->setPlainText(QCoreApplication::translate("AdminHome", "Different Winter  |  Mia Jackson", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminHome: public Ui_AdminHome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINHOME_H
