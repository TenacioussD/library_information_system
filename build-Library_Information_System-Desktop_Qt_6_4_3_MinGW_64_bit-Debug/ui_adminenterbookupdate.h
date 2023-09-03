/********************************************************************************
** Form generated from reading UI file 'adminenterbookupdate.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINENTERBOOKUPDATE_H
#define UI_ADMINENTERBOOKUPDATE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminEnterBookUpdate
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
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
    QFrame *frame_2;
    QPushButton *image_2;
    QLabel *label_4;
    QLineEdit *lineEditAuthor;
    QLabel *label_13;
    QLineEdit *lineEditTitle;
    QPushButton *confirm_2;
    QFrame *frame_73;
    QLabel *imageLabel;
    QFrame *frame_74;
    QLabel *authorLabel;
    QLabel *titleLabel;

    void setupUi(QMainWindow *AdminEnterBookUpdate)
    {
        if (AdminEnterBookUpdate->objectName().isEmpty())
            AdminEnterBookUpdate->setObjectName("AdminEnterBookUpdate");
        AdminEnterBookUpdate->resize(1019, 670);
        centralwidget = new QWidget(AdminEnterBookUpdate);
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
        plainTextEdit_6->setGeometry(QRect(50, 30, 101, 31));
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
        manageBooks_1->setStyleSheet(QString::fromUtf8("background: rgb(240, 240, 240);"));
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
        plainTextEdit_10->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit_10->setReadOnly(true);
        plainTextEdit_11 = new QPlainTextEdit(heading_3);
        plainTextEdit_11->setObjectName("plainTextEdit_11");
        plainTextEdit_11->setGeometry(QRect(30, 70, 411, 31));
        plainTextEdit_11->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font-family: Baloo 2;\n"
"font-size: 13px;"));
        plainTextEdit_11->setFrameShape(QFrame::NoFrame);
        plainTextEdit_11->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit_11->setReadOnly(true);
        frame_9 = new QFrame(frame);
        frame_9->setObjectName("frame_9");
        frame_9->setGeometry(QRect(300, 200, 641, 401));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        frame_2 = new QFrame(frame_9);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(220, 0, 411, 271));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        image_2 = new QPushButton(frame_2);
        image_2->setObjectName("image_2");
        image_2->setGeometry(QRect(0, 220, 171, 31));
        image_2->setContextMenuPolicy(Qt::NoContextMenu);
        image_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        image_2->setAutoDefault(false);
        label_4 = new QLabel(frame_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(0, 10, 71, 16));
        label_4->setStyleSheet(QString::fromUtf8("font-family: Baloo 2;\n"
"font-weight: bold;"));
        lineEditAuthor = new QLineEdit(frame_2);
        lineEditAuthor->setObjectName("lineEditAuthor");
        lineEditAuthor->setGeometry(QRect(0, 140, 411, 31));
        lineEditAuthor->setStyleSheet(QString::fromUtf8("border: 0.5px solid black;\n"
"border-radius: 5px;\n"
"background: rgb(235, 235, 235);"));
        label_13 = new QLabel(frame_2);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(0, 110, 71, 16));
        label_13->setStyleSheet(QString::fromUtf8("font-family: Baloo 2;\n"
"font-weight: bold;"));
        lineEditTitle = new QLineEdit(frame_2);
        lineEditTitle->setObjectName("lineEditTitle");
        lineEditTitle->setGeometry(QRect(0, 40, 411, 31));
        lineEditTitle->setStyleSheet(QString::fromUtf8("border: 0.5px solid black;\n"
"border-radius: 5px;\n"
"background: rgb(235, 235, 235);"));
        confirm_2 = new QPushButton(frame_2);
        confirm_2->setObjectName("confirm_2");
        confirm_2->setGeometry(QRect(240, 220, 171, 31));
        confirm_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"font-size: 14px;\n"
"border-radius: 10px;\n"
"background: black;\n"
"font-family: open sans;\n"
"color: white;\n"
"font-weight: bold;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	color: rgb(106, 146, 255);\n"
"}"));
        frame_73 = new QFrame(frame_9);
        frame_73->setObjectName("frame_73");
        frame_73->setGeometry(QRect(0, 0, 211, 341));
        frame_73->setFrameShape(QFrame::StyledPanel);
        frame_73->setFrameShadow(QFrame::Raised);
        imageLabel = new QLabel(frame_73);
        imageLabel->setObjectName("imageLabel");
        imageLabel->setGeometry(QRect(0, 0, 151, 211));
        imageLabel->setScaledContents(true);
        frame_74 = new QFrame(frame_73);
        frame_74->setObjectName("frame_74");
        frame_74->setGeometry(QRect(0, 230, 171, 71));
        frame_74->setFrameShape(QFrame::StyledPanel);
        frame_74->setFrameShadow(QFrame::Raised);
        authorLabel = new QLabel(frame_74);
        authorLabel->setObjectName("authorLabel");
        authorLabel->setGeometry(QRect(0, 20, 171, 21));
        authorLabel->setStyleSheet(QString::fromUtf8("font-family: Baloo 2;\n"
"background: white;\n"
"font-size: 12px;"));
        authorLabel->setFrameShape(QFrame::NoFrame);
        titleLabel = new QLabel(frame_74);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setGeometry(QRect(0, 0, 171, 21));
        titleLabel->setStyleSheet(QString::fromUtf8("font-weight: bold;\n"
"font-family: Baloo 2;\n"
"background: white;\n"
"font-size: 13px;"));
        titleLabel->setFrameShape(QFrame::NoFrame);

        verticalLayout->addWidget(frame);

        AdminEnterBookUpdate->setCentralWidget(centralwidget);

        retranslateUi(AdminEnterBookUpdate);

        QMetaObject::connectSlotsByName(AdminEnterBookUpdate);
    } // setupUi

    void retranslateUi(QMainWindow *AdminEnterBookUpdate)
    {
        AdminEnterBookUpdate->setWindowTitle(QCoreApplication::translate("AdminEnterBookUpdate", "MainWindow", nullptr));
        menuPanel->setTitle(QString());
        logo->setText(QString());
        plainTextEdit_6->setPlainText(QCoreApplication::translate("AdminEnterBookUpdate", "Admin Menu", nullptr));
        label_5->setText(QString());
        catalogue->setText(QCoreApplication::translate("AdminEnterBookUpdate", "Catalogue", nullptr));
        label_6->setText(QString());
        manageBooks->setText(QCoreApplication::translate("AdminEnterBookUpdate", "Manage Books", nullptr));
        label_7->setText(QString());
        status->setText(QCoreApplication::translate("AdminEnterBookUpdate", "View Status", nullptr));
        label_8->setText(QString());
        membership->setText(QCoreApplication::translate("AdminEnterBookUpdate", "Membership", nullptr));
        pushButton_2->setText(QCoreApplication::translate("AdminEnterBookUpdate", "Logout", nullptr));
        back->setText(QCoreApplication::translate("AdminEnterBookUpdate", "Back", nullptr));
        plainTextEdit_9->setPlainText(QString());
        plainTextEdit_10->setPlainText(QCoreApplication::translate("AdminEnterBookUpdate", "Update Book", nullptr));
        plainTextEdit_11->setPlainText(QCoreApplication::translate("AdminEnterBookUpdate", "Please enter the revised information", nullptr));
        image_2->setText(QCoreApplication::translate("AdminEnterBookUpdate", "Upload Image", nullptr));
        label_4->setText(QCoreApplication::translate("AdminEnterBookUpdate", "Book Title", nullptr));
        lineEditAuthor->setPlaceholderText(QCoreApplication::translate("AdminEnterBookUpdate", "Enter new author", nullptr));
        label_13->setText(QCoreApplication::translate("AdminEnterBookUpdate", "Book Author", nullptr));
        lineEditTitle->setPlaceholderText(QCoreApplication::translate("AdminEnterBookUpdate", "Enter new title", nullptr));
        confirm_2->setText(QCoreApplication::translate("AdminEnterBookUpdate", "Confirm Book Details", nullptr));
        imageLabel->setText(QString());
        authorLabel->setText(QString());
        titleLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AdminEnterBookUpdate: public Ui_AdminEnterBookUpdate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINENTERBOOKUPDATE_H
