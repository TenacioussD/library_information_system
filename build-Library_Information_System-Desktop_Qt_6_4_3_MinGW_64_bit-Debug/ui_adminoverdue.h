/********************************************************************************
** Form generated from reading UI file 'adminoverdue.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINOVERDUE_H
#define UI_ADMINOVERDUE_H

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

class Ui_AdminOverdue
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
    QPushButton *membershipButton;
    QLabel *label;
    QFrame *manageBooks_1;
    QLabel *label_7;
    QPushButton *adminviewstatus;
    QFrame *status_1;
    QLabel *label_6;
    QPushButton *manageBooksButton;
    QFrame *status_2;
    QLabel *label_5;
    QPushButton *catalogueButton;
    QPushButton *back;
    QPushButton *logout;
    QFrame *heading_3;
    QPlainTextEdit *plainTextEdit_9;
    QPlainTextEdit *plainTextEdit_10;
    QPlainTextEdit *plainTextEdit_11;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QPlainTextEdit *plainTextEdit;
    QPlainTextEdit *plainTextEdit_2;
    QPlainTextEdit *plainTextEdit_3;
    QPlainTextEdit *plainTextEdit_4;
    QPlainTextEdit *plainTextEdit_5;
    QPlainTextEdit *plainTextEdit_6;
    QPlainTextEdit *plainTextEdit_7;
    QPlainTextEdit *plainTextEdit_8;
    QPlainTextEdit *plainTextEdit_12;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AdminOverdue)
    {
        if (AdminOverdue->objectName().isEmpty())
            AdminOverdue->setObjectName("AdminOverdue");
        AdminOverdue->resize(1014, 702);
        centralwidget = new QWidget(AdminOverdue);
        centralwidget->setObjectName("centralwidget");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 1007, 658));
        frame->setStyleSheet(QString::fromUtf8("background: white;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Plain);
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
        membershipButton = new QPushButton(membership_1);
        membershipButton->setObjectName("membershipButton");
        membershipButton->setGeometry(QRect(50, 10, 81, 31));
        membershipButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        adminviewstatus = new QPushButton(manageBooks_1);
        adminviewstatus->setObjectName("adminviewstatus");
        adminviewstatus->setGeometry(QRect(50, 10, 71, 31));
        adminviewstatus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        manageBooksButton = new QPushButton(status_1);
        manageBooksButton->setObjectName("manageBooksButton");
        manageBooksButton->setGeometry(QRect(50, 10, 91, 31));
        manageBooksButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        catalogueButton = new QPushButton(status_2);
        catalogueButton->setObjectName("catalogueButton");
        catalogueButton->setGeometry(QRect(60, 10, 71, 31));
        catalogueButton->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font-size: 14px;\n"
"border: none;"));
        catalogueButton->setAutoDefault(false);
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
        plainTextEdit_11->setGeometry(QRect(30, 70, 521, 31));
        plainTextEdit_11->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font-family: Baloo 2;\n"
"font-size: 13px;"));
        plainTextEdit_11->setFrameShape(QFrame::NoFrame);
        label_9 = new QLabel(frame);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(360, 170, 71, 111));
        label_9->setPixmap(QPixmap(QString::fromUtf8(":/images/book-covers/book8.png")));
        label_9->setScaledContents(true);
        label_10 = new QLabel(frame);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(820, 340, 71, 111));
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/images/book-covers/book5.png")));
        label_10->setScaledContents(true);
        label_11 = new QLabel(frame);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(360, 340, 71, 111));
        label_11->setPixmap(QPixmap(QString::fromUtf8(":/images/book-covers/book6.png")));
        label_11->setScaledContents(true);
        label_12 = new QLabel(frame);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(820, 170, 71, 111));
        label_12->setPixmap(QPixmap(QString::fromUtf8(":/images/book-covers/book4.png")));
        label_12->setScaledContents(true);
        label_13 = new QLabel(frame);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(590, 170, 71, 111));
        label_13->setPixmap(QPixmap(QString::fromUtf8(":/images/book-covers/book2.png")));
        label_13->setScaledContents(true);
        label_14 = new QLabel(frame);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(590, 340, 71, 111));
        label_14->setPixmap(QPixmap(QString::fromUtf8(":/images/book-covers/book10.png")));
        label_14->setScaledContents(true);
        label_15 = new QLabel(frame);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(360, 500, 71, 111));
        label_15->setPixmap(QPixmap(QString::fromUtf8(":/images/book-covers/book16.png")));
        label_15->setScaledContents(true);
        label_16 = new QLabel(frame);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(590, 500, 71, 111));
        label_16->setPixmap(QPixmap(QString::fromUtf8(":/images/book-covers/book11.png")));
        label_16->setScaledContents(true);
        label_17 = new QLabel(frame);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(820, 500, 71, 111));
        label_17->setPixmap(QPixmap(QString::fromUtf8(":/images/book-covers/book15.png")));
        label_17->setScaledContents(true);
        plainTextEdit = new QPlainTextEdit(frame);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(360, 280, 81, 51));
        plainTextEdit->setStyleSheet(QString::fromUtf8("font: 6pt \"Segoe UI\";\n"
"border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0.034, y2:0.017, stop:0 rgba(255, 255, 255, 255));"));
        plainTextEdit->setFrameShape(QFrame::NoFrame);
        plainTextEdit->setFrameShadow(QFrame::Plain);
        plainTextEdit_2 = new QPlainTextEdit(frame);
        plainTextEdit_2->setObjectName("plainTextEdit_2");
        plainTextEdit_2->setGeometry(QRect(360, 610, 71, 41));
        plainTextEdit_2->setStyleSheet(QString::fromUtf8("font: 6pt \"Segoe UI\";"));
        plainTextEdit_2->setFrameShape(QFrame::NoFrame);
        plainTextEdit_2->setFrameShadow(QFrame::Plain);
        plainTextEdit_3 = new QPlainTextEdit(frame);
        plainTextEdit_3->setObjectName("plainTextEdit_3");
        plainTextEdit_3->setGeometry(QRect(820, 610, 81, 41));
        plainTextEdit_3->setStyleSheet(QString::fromUtf8("font: 6pt \"Segoe UI\";"));
        plainTextEdit_3->setFrameShape(QFrame::NoFrame);
        plainTextEdit_3->setFrameShadow(QFrame::Plain);
        plainTextEdit_4 = new QPlainTextEdit(frame);
        plainTextEdit_4->setObjectName("plainTextEdit_4");
        plainTextEdit_4->setGeometry(QRect(590, 610, 71, 41));
        plainTextEdit_4->setStyleSheet(QString::fromUtf8("font: 6pt \"Segoe UI\";"));
        plainTextEdit_4->setFrameShape(QFrame::NoFrame);
        plainTextEdit_4->setFrameShadow(QFrame::Plain);
        plainTextEdit_5 = new QPlainTextEdit(frame);
        plainTextEdit_5->setObjectName("plainTextEdit_5");
        plainTextEdit_5->setGeometry(QRect(360, 450, 71, 41));
        plainTextEdit_5->setStyleSheet(QString::fromUtf8("font: 6pt \"Segoe UI\";"));
        plainTextEdit_5->setFrameShape(QFrame::NoFrame);
        plainTextEdit_5->setFrameShadow(QFrame::Plain);
        plainTextEdit_6 = new QPlainTextEdit(frame);
        plainTextEdit_6->setObjectName("plainTextEdit_6");
        plainTextEdit_6->setGeometry(QRect(820, 450, 111, 41));
        plainTextEdit_6->setStyleSheet(QString::fromUtf8("font: 6pt \"Segoe UI\";"));
        plainTextEdit_6->setFrameShape(QFrame::NoFrame);
        plainTextEdit_6->setFrameShadow(QFrame::Plain);
        plainTextEdit_7 = new QPlainTextEdit(frame);
        plainTextEdit_7->setObjectName("plainTextEdit_7");
        plainTextEdit_7->setGeometry(QRect(820, 280, 91, 41));
        plainTextEdit_7->setStyleSheet(QString::fromUtf8("font: 6pt \"Segoe UI\";"));
        plainTextEdit_7->setFrameShape(QFrame::NoFrame);
        plainTextEdit_7->setFrameShadow(QFrame::Plain);
        plainTextEdit_8 = new QPlainTextEdit(frame);
        plainTextEdit_8->setObjectName("plainTextEdit_8");
        plainTextEdit_8->setGeometry(QRect(590, 280, 81, 41));
        plainTextEdit_8->setStyleSheet(QString::fromUtf8("font: 6pt \"Segoe UI\";"));
        plainTextEdit_8->setFrameShape(QFrame::NoFrame);
        plainTextEdit_8->setFrameShadow(QFrame::Plain);
        plainTextEdit_12 = new QPlainTextEdit(frame);
        plainTextEdit_12->setObjectName("plainTextEdit_12");
        plainTextEdit_12->setGeometry(QRect(590, 450, 101, 41));
        plainTextEdit_12->setStyleSheet(QString::fromUtf8("font: 6pt \"Segoe UI\";"));
        plainTextEdit_12->setFrameShape(QFrame::NoFrame);
        plainTextEdit_12->setFrameShadow(QFrame::Plain);
        AdminOverdue->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AdminOverdue);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1014, 21));
        AdminOverdue->setMenuBar(menubar);
        statusbar = new QStatusBar(AdminOverdue);
        statusbar->setObjectName("statusbar");
        AdminOverdue->setStatusBar(statusbar);

        retranslateUi(AdminOverdue);

        QMetaObject::connectSlotsByName(AdminOverdue);
    } // setupUi

    void retranslateUi(QMainWindow *AdminOverdue)
    {
        AdminOverdue->setWindowTitle(QCoreApplication::translate("AdminOverdue", "MainWindow", nullptr));
        menuPanel->setTitle(QString());
        logo->setText(QString());
        label_8->setText(QString());
        membershipButton->setText(QCoreApplication::translate("AdminOverdue", "Membership", nullptr));
        label->setText(QCoreApplication::translate("AdminOverdue", "Admin Menu", nullptr));
        label_7->setText(QString());
        adminviewstatus->setText(QCoreApplication::translate("AdminOverdue", "View Status", nullptr));
        label_6->setText(QString());
        manageBooksButton->setText(QCoreApplication::translate("AdminOverdue", "Manage Books", nullptr));
        label_5->setText(QString());
        catalogueButton->setText(QCoreApplication::translate("AdminOverdue", "Catalogue", nullptr));
        back->setText(QCoreApplication::translate("AdminOverdue", "Back", nullptr));
        logout->setText(QCoreApplication::translate("AdminOverdue", "Logout", nullptr));
        plainTextEdit_9->setPlainText(QString());
        plainTextEdit_10->setPlainText(QCoreApplication::translate("AdminOverdue", "Overdue Books", nullptr));
        plainTextEdit_11->setPlainText(QCoreApplication::translate("AdminOverdue", "A list of all overdue books. Please select one to view membership information.", nullptr));
        label_9->setText(QString());
        label_10->setText(QString());
        label_11->setText(QString());
        label_12->setText(QString());
        label_13->setText(QString());
        label_14->setText(QString());
        label_15->setText(QString());
        label_16->setText(QString());
        label_17->setText(QString());
        plainTextEdit->setPlainText(QCoreApplication::translate("AdminOverdue", "Different Winter\n"
"Mia Jackson", nullptr));
        plainTextEdit_2->setPlainText(QCoreApplication::translate("AdminOverdue", "Comic Book\n"
"Greg Harold", nullptr));
        plainTextEdit_3->setPlainText(QCoreApplication::translate("AdminOverdue", "Learn Play\n"
"Author", nullptr));
        plainTextEdit_4->setPlainText(QCoreApplication::translate("AdminOverdue", "Book\n"
"Author", nullptr));
        plainTextEdit_5->setPlainText(QCoreApplication::translate("AdminOverdue", "Soft Cover\n"
"Ben Scott", nullptr));
        plainTextEdit_6->setPlainText(QCoreApplication::translate("AdminOverdue", "Looks Good on Paper\n"
"Patricia Kim", nullptr));
        plainTextEdit_7->setPlainText(QCoreApplication::translate("AdminOverdue", "New Educators\n"
"Marissa Pullman", nullptr));
        plainTextEdit_8->setPlainText(QCoreApplication::translate("AdminOverdue", "The Bike Guy\n"
"Emma Mayers", nullptr));
        plainTextEdit_12->setPlainText(QCoreApplication::translate("AdminOverdue", "Snow at Sunset\n"
"Samuel Herseingtn", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminOverdue: public Ui_AdminOverdue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINOVERDUE_H
