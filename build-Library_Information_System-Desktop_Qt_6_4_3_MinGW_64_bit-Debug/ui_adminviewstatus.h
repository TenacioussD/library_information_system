/********************************************************************************
** Form generated from reading UI file 'adminviewstatus.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINVIEWSTATUS_H
#define UI_ADMINVIEWSTATUS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminViewStatus
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QGroupBox *menuPanel;
    QLabel *logo;
    QFrame *menu;
    QListWidget *listWidget_2;
    QFrame *membership_1;
    QLabel *label_8;
    QPushButton *membership;
    QLabel *label;
    QFrame *manageBooks_1;
    QLabel *label_7;
    QPushButton *status;
    QFrame *status_1;
    QLabel *label_6;
    QPushButton *manageBooks;
    QFrame *status_2;
    QLabel *label_5;
    QPushButton *catalogue;
    QPushButton *back;
    QPushButton *logout;
    QFrame *heading_3;
    QPlainTextEdit *plainTextEdit_9;
    QPlainTextEdit *plainTextEdit_10;
    QPlainTextEdit *plainTextEdit_11;
    QPlainTextEdit *plainTextEdit_12;
    QPlainTextEdit *plainTextEdit_13;
    QPlainTextEdit *plainTextEdit_17;
    QPushButton *adminoverdue;
    QPushButton *adminpreorderedbooks;
    QPushButton *adminreturn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AdminViewStatus)
    {
        if (AdminViewStatus->objectName().isEmpty())
            AdminViewStatus->setObjectName("AdminViewStatus");
        AdminViewStatus->resize(1017, 699);
        centralwidget = new QWidget(AdminViewStatus);
        centralwidget->setObjectName("centralwidget");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 1007, 658));
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
        menu = new QFrame(menuPanel);
        menu->setObjectName("menu");
        menu->setGeometry(QRect(20, 180, 191, 381));
        menu->setFrameShape(QFrame::StyledPanel);
        menu->setFrameShadow(QFrame::Raised);
        listWidget_2 = new QListWidget(menu);
        listWidget_2->setObjectName("listWidget_2");
        listWidget_2->setGeometry(QRect(0, 10, 191, 401));
        listWidget_2->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-radius: 5px;"));
        listWidget_2->setFrameShadow(QFrame::Raised);
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
        label = new QLabel(menu);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 30, 191, 20));
        label->setLayoutDirection(Qt::LeftToRight);
        label->setStyleSheet(QString::fromUtf8("font-weight: bold;\n"
"background: white;\n"
"font-size: 15px;\n"
""));
        label->setAlignment(Qt::AlignCenter);
        manageBooks_1 = new QFrame(menu);
        manageBooks_1->setObjectName("manageBooks_1");
        manageBooks_1->setGeometry(QRect(20, 200, 151, 51));
        manageBooks_1->setStyleSheet(QString::fromUtf8("background: rgb(240, 240, 240);"));
        manageBooks_1->setFrameShape(QFrame::StyledPanel);
        manageBooks_1->setFrameShadow(QFrame::Raised);
        label_7 = new QLabel(manageBooks_1);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 10, 31, 31));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/images/Icons/status.png")));
        label_7->setScaledContents(true);
        status = new QPushButton(manageBooks_1);
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
        status_1 = new QFrame(menu);
        status_1->setObjectName("status_1");
        status_1->setGeometry(QRect(20, 140, 151, 51));
        status_1->setStyleSheet(QString::fromUtf8("background: white;"));
        status_1->setFrameShape(QFrame::StyledPanel);
        status_1->setFrameShadow(QFrame::Raised);
        label_6 = new QLabel(status_1);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 10, 31, 31));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/images/Icons/book.png")));
        label_6->setScaledContents(true);
        manageBooks = new QPushButton(status_1);
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
        status_2 = new QFrame(menu);
        status_2->setObjectName("status_2");
        status_2->setGeometry(QRect(20, 80, 151, 51));
        status_2->setStyleSheet(QString::fromUtf8("background: white;"));
        status_2->setFrameShape(QFrame::StyledPanel);
        status_2->setFrameShadow(QFrame::Raised);
        label_5 = new QLabel(status_2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 10, 31, 31));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/images/Icons/books.png")));
        label_5->setScaledContents(true);
        catalogue = new QPushButton(status_2);
        catalogue->setObjectName("catalogue");
        catalogue->setGeometry(QRect(60, 10, 71, 31));
        catalogue->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font-size: 14px;\n"
"border: none;"));
        catalogue->setAutoDefault(false);
        back = new QPushButton(menuPanel);
        back->setObjectName("back");
        back->setGeometry(QRect(130, 600, 71, 31));
        back->setStyleSheet(QString::fromUtf8("/*QPushButton {\n"
"background: white;\n"
"}*/\n"
"\n"
"QPushButton:hover {\n"
"	color: rgb(106, 146, 255);\n"
"}"));
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("go-previous");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("../../../../../AppData/Local/Temp/Temp1_library_information_system-master.zip/library_information_system-master/LIS"), QSize(), QIcon::Normal, QIcon::Off);
        }
        back->setIcon(icon);
        logout = new QPushButton(menuPanel);
        logout->setObjectName("logout");
        logout->setGeometry(QRect(20, 600, 71, 31));
        logout->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"	color: rgb(106, 146, 255);\n"
"}"));
        heading_3 = new QFrame(frame);
        heading_3->setObjectName("heading_3");
        heading_3->setGeometry(QRect(290, 20, 641, 121));
        heading_3->setFrameShape(QFrame::StyledPanel);
        heading_3->setFrameShadow(QFrame::Raised);
        plainTextEdit_9 = new QPlainTextEdit(heading_3);
        plainTextEdit_9->setObjectName("plainTextEdit_9");
        plainTextEdit_9->setGeometry(QRect(0, 20, 641, 91));
        plainTextEdit_9->setStyleSheet(QString::fromUtf8("background: rgb(235, 235, 235);\n"
"border-radius: 10px;"));
        plainTextEdit_9->setFrameShadow(QFrame::Raised);
        plainTextEdit_10 = new QPlainTextEdit(heading_3);
        plainTextEdit_10->setObjectName("plainTextEdit_10");
        plainTextEdit_10->setGeometry(QRect(30, 40, 231, 41));
        plainTextEdit_10->setStyleSheet(QString::fromUtf8("font-family: Baloo 2;\n"
"font-weight: bold;\n"
"font-size: 23px;\n"
"background: transparent;"));
        plainTextEdit_10->setFrameShape(QFrame::NoFrame);
        plainTextEdit_11 = new QPlainTextEdit(heading_3);
        plainTextEdit_11->setObjectName("plainTextEdit_11");
        plainTextEdit_11->setGeometry(QRect(30, 70, 411, 31));
        plainTextEdit_11->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font-family: Baloo 2;\n"
"font-size: 13px;"));
        plainTextEdit_11->setFrameShape(QFrame::NoFrame);
        plainTextEdit_12 = new QPlainTextEdit(frame);
        plainTextEdit_12->setObjectName("plainTextEdit_12");
        plainTextEdit_12->setGeometry(QRect(740, 210, 231, 161));
        plainTextEdit_12->setStyleSheet(QString::fromUtf8("background: rgb(235, 235, 235);\n"
"border-radius: 10px;"));
        plainTextEdit_12->setFrameShadow(QFrame::Raised);
        plainTextEdit_13 = new QPlainTextEdit(frame);
        plainTextEdit_13->setObjectName("plainTextEdit_13");
        plainTextEdit_13->setGeometry(QRect(740, 410, 231, 151));
        plainTextEdit_13->setStyleSheet(QString::fromUtf8("background: rgb(235, 235, 235);\n"
"border-radius: 10px;"));
        plainTextEdit_13->setFrameShadow(QFrame::Raised);
        plainTextEdit_17 = new QPlainTextEdit(frame);
        plainTextEdit_17->setObjectName("plainTextEdit_17");
        plainTextEdit_17->setGeometry(QRect(270, 210, 441, 351));
        plainTextEdit_17->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 245, 255);;\n"
"border-radius: 10px;"));
        plainTextEdit_17->setFrameShadow(QFrame::Raised);
        adminoverdue = new QPushButton(frame);
        adminoverdue->setObjectName("adminoverdue");
        adminoverdue->setGeometry(QRect(280, 220, 421, 321));
        adminoverdue->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background: transparent;\n"
"font-size: 23px;\n"
"font-weight: bold;\n"
"font-family: Baloo 2;\n"
"border: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	color: rgb(233, 233, 233)\n"
"}"));
        adminoverdue->setAutoDefault(false);
        adminpreorderedbooks = new QPushButton(frame);
        adminpreorderedbooks->setObjectName("adminpreorderedbooks");
        adminpreorderedbooks->setGeometry(QRect(750, 220, 211, 141));
        adminpreorderedbooks->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background: transparent;\n"
"font-size: 23px;\n"
"font-weight: bold;\n"
"font-family: Baloo 2;\n"
"border: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	color: rgb(233, 233, 233)\n"
"}"));
        adminpreorderedbooks->setAutoDefault(false);
        adminreturn = new QPushButton(frame);
        adminreturn->setObjectName("adminreturn");
        adminreturn->setGeometry(QRect(750, 410, 211, 141));
        adminreturn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background: transparent;\n"
"font-size: 23px;\n"
"font-weight: bold;\n"
"font-family: Baloo 2;\n"
"border: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	color: rgb(233, 233, 233)\n"
"}"));
        adminreturn->setAutoDefault(false);
        AdminViewStatus->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AdminViewStatus);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1017, 21));
        AdminViewStatus->setMenuBar(menubar);
        statusbar = new QStatusBar(AdminViewStatus);
        statusbar->setObjectName("statusbar");
        AdminViewStatus->setStatusBar(statusbar);

        retranslateUi(AdminViewStatus);

        QMetaObject::connectSlotsByName(AdminViewStatus);
    } // setupUi

    void retranslateUi(QMainWindow *AdminViewStatus)
    {
        AdminViewStatus->setWindowTitle(QCoreApplication::translate("AdminViewStatus", "MainWindow", nullptr));
        menuPanel->setTitle(QString());
        logo->setText(QString());
        label_8->setText(QString());
        membership->setText(QCoreApplication::translate("AdminViewStatus", "Membership", nullptr));
        label->setText(QCoreApplication::translate("AdminViewStatus", "Admin Menu", nullptr));
        label_7->setText(QString());
        status->setText(QCoreApplication::translate("AdminViewStatus", "View Status", nullptr));
        label_6->setText(QString());
        manageBooks->setText(QCoreApplication::translate("AdminViewStatus", "Manage Books", nullptr));
        label_5->setText(QString());
        catalogue->setText(QCoreApplication::translate("AdminViewStatus", "Catalogue", nullptr));
        back->setText(QCoreApplication::translate("AdminViewStatus", "Back", nullptr));
        logout->setText(QCoreApplication::translate("AdminViewStatus", "Logout", nullptr));
        plainTextEdit_9->setPlainText(QString());
        plainTextEdit_10->setPlainText(QCoreApplication::translate("AdminViewStatus", "Book Status", nullptr));
        plainTextEdit_11->setPlainText(QCoreApplication::translate("AdminViewStatus", "Please choose an option below", nullptr));
        plainTextEdit_12->setPlainText(QString());
        plainTextEdit_13->setPlainText(QString());
        plainTextEdit_17->setPlainText(QString());
        adminoverdue->setText(QCoreApplication::translate("AdminViewStatus", "Overdue Books", nullptr));
        adminpreorderedbooks->setText(QCoreApplication::translate("AdminViewStatus", "Pre Ordered", nullptr));
        adminreturn->setText(QCoreApplication::translate("AdminViewStatus", "Returns", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminViewStatus: public Ui_AdminViewStatus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINVIEWSTATUS_H