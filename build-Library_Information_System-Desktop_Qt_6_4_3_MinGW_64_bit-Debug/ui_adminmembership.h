/********************************************************************************
** Form generated from reading UI file 'adminmembership.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINMEMBERSHIP_H
#define UI_ADMINMEMBERSHIP_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AdminMembership
{
public:
    QFrame *frame;
    QGroupBox *menuPanel;
    QLabel *logo;
    QFrame *menu;
    QListWidget *listWidget_2;
    QPlainTextEdit *plainTextEdit_6;
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
    QPushButton *pushButton_2;
    QPushButton *back;
    QFrame *frame_4;
    QFrame *heading_2;
    QPlainTextEdit *plainTextEdit_5;
    QPlainTextEdit *plainTextEdit_7;
    QPlainTextEdit *plainTextEdit_8;
    QFrame *frame_5;
    QFrame *frame_2;
    QPushButton *add_Book;
    QFrame *frame_6;
    QFrame *frame_8;
    QPushButton *add_Book_3;
    QFrame *frame_7;
    QFrame *frame_3;
    QPushButton *add_Book_2;
    QFrame *frame_9;
    QFrame *frame_12;
    QPushButton *removeMem;

    void setupUi(QDialog *AdminMembership)
    {
        if (AdminMembership->objectName().isEmpty())
            AdminMembership->setObjectName("AdminMembership");
        AdminMembership->resize(1019, 670);
        frame = new QFrame(AdminMembership);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(10, 0, 997, 648));
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
        listWidget_2->setGeometry(QRect(0, 10, 191, 341));
        listWidget_2->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-radius: 5px;"));
        listWidget_2->setFrameShadow(QFrame::Raised);
        plainTextEdit_6 = new QPlainTextEdit(menu);
        plainTextEdit_6->setObjectName("plainTextEdit_6");
        plainTextEdit_6->setGeometry(QRect(40, 30, 131, 31));
        plainTextEdit_6->setStyleSheet(QString::fromUtf8("font-family: Baloo 2;\n"
"font-weight: bold;\n"
"background: white;\n"
"font-size: 15px;\n"
""));
        plainTextEdit_6->setFrameShape(QFrame::NoFrame);
        plainTextEdit_6->setFrameShadow(QFrame::Plain);
        plainTextEdit_6->setBackgroundVisible(false);
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
        membership_1->setStyleSheet(QString::fromUtf8("background: rgb(240, 240, 240);"));
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
        pushButton_2 = new QPushButton(menuPanel);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(30, 600, 71, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"	color: rgb(106, 146, 255);\n"
"}"));
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
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        back->setIcon(icon);
        frame_4 = new QFrame(frame);
        frame_4->setObjectName("frame_4");
        frame_4->setGeometry(QRect(300, 40, 641, 571));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        heading_2 = new QFrame(frame_4);
        heading_2->setObjectName("heading_2");
        heading_2->setGeometry(QRect(0, -10, 641, 121));
        heading_2->setFrameShape(QFrame::StyledPanel);
        heading_2->setFrameShadow(QFrame::Raised);
        plainTextEdit_5 = new QPlainTextEdit(heading_2);
        plainTextEdit_5->setObjectName("plainTextEdit_5");
        plainTextEdit_5->setGeometry(QRect(0, 20, 641, 91));
        plainTextEdit_5->setStyleSheet(QString::fromUtf8("background: rgb(235, 235, 235);\n"
"border-radius: 10px;"));
        plainTextEdit_5->setFrameShadow(QFrame::Raised);
        plainTextEdit_7 = new QPlainTextEdit(heading_2);
        plainTextEdit_7->setObjectName("plainTextEdit_7");
        plainTextEdit_7->setGeometry(QRect(30, 40, 231, 41));
        plainTextEdit_7->setStyleSheet(QString::fromUtf8("font-family: Baloo 2;\n"
"font-weight: bold;\n"
"font-size: 23px;\n"
"background: transparent;"));
        plainTextEdit_7->setFrameShape(QFrame::NoFrame);
        plainTextEdit_8 = new QPlainTextEdit(heading_2);
        plainTextEdit_8->setObjectName("plainTextEdit_8");
        plainTextEdit_8->setGeometry(QRect(30, 70, 411, 31));
        plainTextEdit_8->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font-family: Baloo 2;\n"
"font-size: 13px;"));
        plainTextEdit_8->setFrameShape(QFrame::NoFrame);
        frame_5 = new QFrame(frame_4);
        frame_5->setObjectName("frame_5");
        frame_5->setGeometry(QRect(0, 150, 291, 171));
        frame_5->setStyleSheet(QString::fromUtf8("background: rgb(220, 245, 255);\n"
"border-radius: 10px;\n"
"border-color: black;"));
        frame_5->setFrameShape(QFrame::Box);
        frame_5->setFrameShadow(QFrame::Raised);
        frame_2 = new QFrame(frame_5);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(0, 60, 291, 51));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        add_Book = new QPushButton(frame_2);
        add_Book->setObjectName("add_Book");
        add_Book->setGeometry(QRect(0, 10, 291, 24));
        add_Book->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border: none;\n"
"font-weight: bold;\n"
"font-size: 23px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	color: rgb(106, 146, 255);\n"
"}\n"
""));
        frame_6 = new QFrame(frame_4);
        frame_6->setObjectName("frame_6");
        frame_6->setGeometry(QRect(350, 150, 291, 171));
        frame_6->setStyleSheet(QString::fromUtf8("background: rgb(235, 235, 235);\n"
"border-radius: 10px;\n"
"border-color: black;\n"
"\n"
"QFrame::Raised"));
        frame_6->setFrameShape(QFrame::Box);
        frame_6->setFrameShadow(QFrame::Raised);
        frame_8 = new QFrame(frame_6);
        frame_8->setObjectName("frame_8");
        frame_8->setGeometry(QRect(0, 60, 291, 51));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        add_Book_3 = new QPushButton(frame_8);
        add_Book_3->setObjectName("add_Book_3");
        add_Book_3->setGeometry(QRect(0, 10, 291, 24));
        add_Book_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border: none;\n"
"font-weight: bold;\n"
"font-size: 23px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	color: rgb(106, 146, 255);\n"
"}\n"
""));
        frame_7 = new QFrame(frame_4);
        frame_7->setObjectName("frame_7");
        frame_7->setGeometry(QRect(350, 370, 291, 171));
        frame_7->setStyleSheet(QString::fromUtf8("background: rgb(220, 245, 255);\n"
"border-radius: 10px;\n"
"border-color: black;"));
        frame_7->setFrameShape(QFrame::Box);
        frame_7->setFrameShadow(QFrame::Raised);
        frame_3 = new QFrame(frame_7);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(0, 60, 291, 51));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        add_Book_2 = new QPushButton(frame_3);
        add_Book_2->setObjectName("add_Book_2");
        add_Book_2->setGeometry(QRect(0, 10, 291, 24));
        add_Book_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border: none;\n"
"font-weight: bold;\n"
"font-size: 23px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	color: rgb(106, 146, 255);\n"
"}\n"
""));
        frame_9 = new QFrame(frame_4);
        frame_9->setObjectName("frame_9");
        frame_9->setGeometry(QRect(0, 370, 291, 171));
        frame_9->setStyleSheet(QString::fromUtf8("background: rgb(235, 235, 235);\n"
"border-radius: 10px;\n"
"border-color: black;\n"
"\n"
"QFrame::Raised"));
        frame_9->setFrameShape(QFrame::Box);
        frame_9->setFrameShadow(QFrame::Raised);
        frame_12 = new QFrame(frame_9);
        frame_12->setObjectName("frame_12");
        frame_12->setGeometry(QRect(0, 60, 291, 51));
        frame_12->setFrameShape(QFrame::StyledPanel);
        frame_12->setFrameShadow(QFrame::Raised);
        removeMem = new QPushButton(frame_12);
        removeMem->setObjectName("removeMem");
        removeMem->setGeometry(QRect(0, 10, 291, 24));
        removeMem->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border: none;\n"
"font-weight: bold;\n"
"font-size: 23px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	color: rgb(106, 146, 255);\n"
"}\n"
""));

        retranslateUi(AdminMembership);

        QMetaObject::connectSlotsByName(AdminMembership);
    } // setupUi

    void retranslateUi(QDialog *AdminMembership)
    {
        AdminMembership->setWindowTitle(QCoreApplication::translate("AdminMembership", "Dialog", nullptr));
        menuPanel->setTitle(QString());
        logo->setText(QString());
        plainTextEdit_6->setPlainText(QCoreApplication::translate("AdminMembership", "Admin Menu", nullptr));
        label_5->setText(QString());
        catalogue->setText(QCoreApplication::translate("AdminMembership", "Catalogue", nullptr));
        label_6->setText(QString());
        manageBooks->setText(QCoreApplication::translate("AdminMembership", "Manage Books", nullptr));
        label_7->setText(QString());
        status->setText(QCoreApplication::translate("AdminMembership", "View Status", nullptr));
        label_8->setText(QString());
        membership->setText(QCoreApplication::translate("AdminMembership", "Membership", nullptr));
        pushButton_2->setText(QCoreApplication::translate("AdminMembership", "Logout", nullptr));
        back->setText(QCoreApplication::translate("AdminMembership", "Back", nullptr));
        plainTextEdit_5->setPlainText(QString());
        plainTextEdit_7->setPlainText(QCoreApplication::translate("AdminMembership", "Membership Portal", nullptr));
        plainTextEdit_8->setPlainText(QCoreApplication::translate("AdminMembership", "Please choose an option below", nullptr));
        add_Book->setText(QCoreApplication::translate("AdminMembership", "Add Member", nullptr));
        add_Book_3->setText(QCoreApplication::translate("AdminMembership", "Edit Member", nullptr));
        add_Book_2->setText(QCoreApplication::translate("AdminMembership", "View All Members", nullptr));
        removeMem->setText(QCoreApplication::translate("AdminMembership", "Remove Member", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminMembership: public Ui_AdminMembership {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINMEMBERSHIP_H
