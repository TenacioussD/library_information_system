/********************************************************************************
** Form generated from reading UI file 'admineditmemberdetails.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINEDITMEMBERDETAILS_H
#define UI_ADMINEDITMEMBERDETAILS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminEditMemberDetails
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
    QFrame *heading_3;
    QPlainTextEdit *plainTextEdit_9;
    QPlainTextEdit *plainTextEdit_10;
    QPlainTextEdit *plainTextEdit_11;
    QFrame *frame_9;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *firstName;
    QLabel *label_3;
    QLineEdit *lastName;
    QLabel *label_4;
    QLineEdit *contactNum;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;

    void setupUi(QDialog *AdminEditMemberDetails)
    {
        if (AdminEditMemberDetails->objectName().isEmpty())
            AdminEditMemberDetails->setObjectName("AdminEditMemberDetails");
        AdminEditMemberDetails->resize(1019, 670);
        frame = new QFrame(AdminEditMemberDetails);
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
        plainTextEdit_6->setGeometry(QRect(30, 30, 151, 31));
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
        heading_3 = new QFrame(frame);
        heading_3->setObjectName("heading_3");
        heading_3->setGeometry(QRect(300, 30, 641, 121));
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
        frame_9 = new QFrame(frame);
        frame_9->setObjectName("frame_9");
        frame_9->setGeometry(QRect(350, 330, 531, 271));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(frame_9);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 0, 531, 271));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font-family: Baloo 2;\n"
"font-weight: bold;"));

        verticalLayout->addWidget(label_2);

        firstName = new QLineEdit(layoutWidget);
        firstName->setObjectName("firstName");
        firstName->setStyleSheet(QString::fromUtf8("border: 0.5px solid black;\n"
"border-radius: 5px;\n"
"background: rgb(235, 235, 235);"));

        verticalLayout->addWidget(firstName);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("font-family: Baloo 2;\n"
"font-weight: bold;"));

        verticalLayout->addWidget(label_3);

        lastName = new QLineEdit(layoutWidget);
        lastName->setObjectName("lastName");
        lastName->setStyleSheet(QString::fromUtf8("border: 0.5px solid black;\n"
"border-radius: 5px;\n"
"background: rgb(235, 235, 235);"));

        verticalLayout->addWidget(lastName);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("font-family: Baloo 2;\n"
"font-weight: bold;"));

        verticalLayout->addWidget(label_4);

        contactNum = new QLineEdit(layoutWidget);
        contactNum->setObjectName("contactNum");
        contactNum->setStyleSheet(QString::fromUtf8("border: 0.5px solid black;\n"
"border-radius: 5px;\n"
"background: rgb(235, 235, 235);"));

        verticalLayout->addWidget(contactNum);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"font-size: 14px;\n"
"border-radius: 10px;\n"
"background: rgb(220, 245, 255);\n"
"font-family: open sans;\n"
"color: black;\n"
"font-weight: bold;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	color: rgb(106, 146, 255);\n"
"}"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(AdminEditMemberDetails);

        QMetaObject::connectSlotsByName(AdminEditMemberDetails);
    } // setupUi

    void retranslateUi(QDialog *AdminEditMemberDetails)
    {
        AdminEditMemberDetails->setWindowTitle(QCoreApplication::translate("AdminEditMemberDetails", "Dialog", nullptr));
        menuPanel->setTitle(QString());
        logo->setText(QString());
        plainTextEdit_6->setPlainText(QCoreApplication::translate("AdminEditMemberDetails", "Admin Menu", nullptr));
        label_5->setText(QString());
        catalogue->setText(QCoreApplication::translate("AdminEditMemberDetails", "Catalogue", nullptr));
        label_6->setText(QString());
        manageBooks->setText(QCoreApplication::translate("AdminEditMemberDetails", "Manage Books", nullptr));
        label_7->setText(QString());
        status->setText(QCoreApplication::translate("AdminEditMemberDetails", "View Status", nullptr));
        label_8->setText(QString());
        membership->setText(QCoreApplication::translate("AdminEditMemberDetails", "Membership", nullptr));
        pushButton_2->setText(QCoreApplication::translate("AdminEditMemberDetails", "Logout", nullptr));
        back->setText(QCoreApplication::translate("AdminEditMemberDetails", "Back", nullptr));
        plainTextEdit_9->setPlainText(QString());
        plainTextEdit_10->setPlainText(QCoreApplication::translate("AdminEditMemberDetails", "Edit Member", nullptr));
        plainTextEdit_11->setPlainText(QCoreApplication::translate("AdminEditMemberDetails", "Update member information.", nullptr));
        label_2->setText(QCoreApplication::translate("AdminEditMemberDetails", "Name", nullptr));
        firstName->setText(QCoreApplication::translate("AdminEditMemberDetails", "Enter First Name", nullptr));
        firstName->setPlaceholderText(QCoreApplication::translate("AdminEditMemberDetails", "Enter title", nullptr));
        label_3->setText(QCoreApplication::translate("AdminEditMemberDetails", "Surname", nullptr));
        lastName->setText(QCoreApplication::translate("AdminEditMemberDetails", "Enter Last Name", nullptr));
        lastName->setPlaceholderText(QCoreApplication::translate("AdminEditMemberDetails", "Enter author", nullptr));
        label_4->setText(QCoreApplication::translate("AdminEditMemberDetails", "Contact Num", nullptr));
        contactNum->setText(QCoreApplication::translate("AdminEditMemberDetails", "Mobile or Telephone", nullptr));
        contactNum->setPlaceholderText(QCoreApplication::translate("AdminEditMemberDetails", "Enter author", nullptr));
        pushButton->setText(QCoreApplication::translate("AdminEditMemberDetails", "Edit Info", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminEditMemberDetails: public Ui_AdminEditMemberDetails {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINEDITMEMBERDETAILS_H
