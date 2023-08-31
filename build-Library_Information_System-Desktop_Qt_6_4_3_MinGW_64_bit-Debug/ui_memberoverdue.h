/********************************************************************************
** Form generated from reading UI file 'memberoverdue.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMBEROVERDUE_H
#define UI_MEMBEROVERDUE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_MemberOverdue
{
public:
    QFrame *frame;
    QGroupBox *menuPanel;
    QLabel *logo;
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
    QLabel *label;
    QPushButton *back;
    QPushButton *logout;
    QFrame *heading;
    QPlainTextEdit *plainTextEdit_2;
    QPlainTextEdit *plainTextEdit_3;
    QPlainTextEdit *plainTextEdit_4;
    QTableView *viewOverdue;

    void setupUi(QDialog *MemberOverdue)
    {
        if (MemberOverdue->objectName().isEmpty())
            MemberOverdue->setObjectName("MemberOverdue");
        MemberOverdue->resize(1019, 670);
        frame = new QFrame(MemberOverdue);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, -10, 1021, 681));
        frame->setStyleSheet(QString::fromUtf8("background: white;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        menuPanel = new QGroupBox(frame);
        menuPanel->setObjectName("menuPanel");
        menuPanel->setGeometry(QRect(0, 0, 231, 681));
        menuPanel->setStyleSheet(QString::fromUtf8("background: rgb(220, 245, 255);"));
        logo = new QLabel(menuPanel);
        logo->setObjectName("logo");
        logo->setGeometry(QRect(50, 40, 131, 101));
        logo->setPixmap(QPixmap(QString::fromUtf8(":/images/logo.png")));
        logo->setScaledContents(true);
        menu = new QFrame(menuPanel);
        menu->setObjectName("menu");
        menu->setGeometry(QRect(0, 170, 221, 381));
        menu->setFrameShape(QFrame::StyledPanel);
        menu->setFrameShadow(QFrame::Raised);
        listWidget_2 = new QListWidget(menu);
        listWidget_2->setObjectName("listWidget_2");
        listWidget_2->setGeometry(QRect(20, 10, 191, 351));
        listWidget_2->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-radius: 5px;"));
        listWidget_2->setFrameShadow(QFrame::Raised);
        catalogue_1 = new QFrame(menu);
        catalogue_1->setObjectName("catalogue_1");
        catalogue_1->setGeometry(QRect(40, 80, 151, 51));
        catalogue_1->setStyleSheet(QString::fromUtf8("background: white;"));
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
        manageBooks_1->setGeometry(QRect(40, 140, 151, 51));
        manageBooks_1->setStyleSheet(QString::fromUtf8("background: rgb(240, 240, 240);\n"
"border-radius: 5px;"));
        manageBooks_1->setFrameShape(QFrame::StyledPanel);
        manageBooks_1->setFrameShadow(QFrame::Raised);
        label_6 = new QLabel(manageBooks_1);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 10, 31, 31));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/images/Icons/overdue.png")));
        label_6->setScaledContents(true);
        manageBooks = new QPushButton(manageBooks_1);
        manageBooks->setObjectName("manageBooks");
        manageBooks->setGeometry(QRect(50, 10, 61, 31));
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
        status_1->setGeometry(QRect(40, 200, 151, 51));
        status_1->setStyleSheet(QString::fromUtf8("background: white;"));
        status_1->setFrameShape(QFrame::StyledPanel);
        status_1->setFrameShadow(QFrame::Raised);
        label_7 = new QLabel(status_1);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 10, 31, 31));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/images/Icons/book.png")));
        label_7->setScaledContents(true);
        status = new QPushButton(status_1);
        status->setObjectName("status");
        status->setGeometry(QRect(50, 10, 81, 31));
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
        membership_1->setGeometry(QRect(40, 260, 151, 51));
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
        label->setGeometry(QRect(20, 30, 191, 20));
        label->setLayoutDirection(Qt::LeftToRight);
        label->setStyleSheet(QString::fromUtf8("font-weight: bold;\n"
"background: white;\n"
"font-size: 15px;\n"
""));
        label->setAlignment(Qt::AlignCenter);
        back = new QPushButton(menuPanel);
        back->setObjectName("back");
        back->setGeometry(QRect(130, 610, 71, 31));
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
            icon.addFile(QString::fromUtf8("../../../../../../LIS/LIS"), QSize(), QIcon::Normal, QIcon::Off);
        }
        back->setIcon(icon);
        logout = new QPushButton(menuPanel);
        logout->setObjectName("logout");
        logout->setGeometry(QRect(30, 610, 71, 31));
        logout->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"	color: rgb(106, 146, 255);\n"
"}"));
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
        viewOverdue = new QTableView(frame);
        viewOverdue->setObjectName("viewOverdue");
        viewOverdue->setGeometry(QRect(300, 210, 641, 391));

        retranslateUi(MemberOverdue);

        QMetaObject::connectSlotsByName(MemberOverdue);
    } // setupUi

    void retranslateUi(QDialog *MemberOverdue)
    {
        MemberOverdue->setWindowTitle(QCoreApplication::translate("MemberOverdue", "Dialog", nullptr));
        menuPanel->setTitle(QString());
        logo->setText(QString());
        label_5->setText(QString());
        catalogue->setText(QCoreApplication::translate("MemberOverdue", "Catalogue", nullptr));
        label_6->setText(QString());
        manageBooks->setText(QCoreApplication::translate("MemberOverdue", "Overdue", nullptr));
        label_7->setText(QString());
        status->setText(QCoreApplication::translate("MemberOverdue", "Pre-Booked", nullptr));
        label_8->setText(QString());
        membership->setText(QCoreApplication::translate("MemberOverdue", "Membership", nullptr));
        label->setText(QCoreApplication::translate("MemberOverdue", "Member Menu", nullptr));
        back->setText(QCoreApplication::translate("MemberOverdue", "Back", nullptr));
        logout->setText(QCoreApplication::translate("MemberOverdue", "Logout", nullptr));
        plainTextEdit_2->setPlainText(QString());
        plainTextEdit_3->setPlainText(QCoreApplication::translate("MemberOverdue", "View Overdue Books", nullptr));
        plainTextEdit_4->setPlainText(QCoreApplication::translate("MemberOverdue", "Here you view your overdue books", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MemberOverdue: public Ui_MemberOverdue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMBEROVERDUE_H
