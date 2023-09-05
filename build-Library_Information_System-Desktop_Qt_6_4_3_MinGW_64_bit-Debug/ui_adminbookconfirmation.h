/********************************************************************************
** Form generated from reading UI file 'adminbookconfirmation.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINBOOKCONFIRMATION_H
#define UI_ADMINBOOKCONFIRMATION_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminBookConfirmation
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFrame *frame_2;
    QGroupBox *menuPanel_2;
    QLabel *logo_2;
    QFrame *menu_2;
    QListWidget *listWidget_3;
    QPlainTextEdit *plainTextEdit_7;
    QFrame *catalogue_2;
    QLabel *label_9;
    QPushButton *catalogue_3;
    QFrame *manageBooks_2;
    QLabel *label_10;
    QPushButton *manageBooks_3;
    QFrame *status_2;
    QLabel *label_11;
    QPushButton *status_3;
    QFrame *membership_2;
    QLabel *label_12;
    QPushButton *membership_3;
    QPushButton *pushButton_3;
    QPushButton *back_2;
    QFrame *heading_4;
    QPlainTextEdit *plainTextEdit_12;
    QPlainTextEdit *plainTextEdit_13;
    QPlainTextEdit *plainTextEdit_14;
    QFrame *frame_10;
    QPushButton *confirmDetails;
    QLabel *label;
    QFrame *frame_3;
    QLabel *label_4;
    QLabel *label_13;
    QTextEdit *textEditOutputTitle;
    QTextEdit *textEditOutputAuthor;

    void setupUi(QMainWindow *AdminBookConfirmation)
    {
        if (AdminBookConfirmation->objectName().isEmpty())
            AdminBookConfirmation->setObjectName("AdminBookConfirmation");
        AdminBookConfirmation->resize(1019, 670);
        centralwidget = new QWidget(AdminBookConfirmation);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName("frame_2");
        frame_2->setStyleSheet(QString::fromUtf8("background: white;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        menuPanel_2 = new QGroupBox(frame_2);
        menuPanel_2->setObjectName("menuPanel_2");
        menuPanel_2->setGeometry(QRect(0, 0, 231, 671));
        menuPanel_2->setStyleSheet(QString::fromUtf8("background: rgb(220, 245, 255);"));
        logo_2 = new QLabel(menuPanel_2);
        logo_2->setObjectName("logo_2");
        logo_2->setGeometry(QRect(50, 40, 131, 101));
        logo_2->setPixmap(QPixmap(QString::fromUtf8(":/images/logo.png")));
        logo_2->setScaledContents(true);
        menu_2 = new QFrame(menuPanel_2);
        menu_2->setObjectName("menu_2");
        menu_2->setGeometry(QRect(20, 180, 191, 381));
        menu_2->setFrameShape(QFrame::StyledPanel);
        menu_2->setFrameShadow(QFrame::Raised);
        listWidget_3 = new QListWidget(menu_2);
        listWidget_3->setObjectName("listWidget_3");
        listWidget_3->setGeometry(QRect(0, 10, 191, 341));
        listWidget_3->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-radius: 5px;"));
        listWidget_3->setFrameShadow(QFrame::Raised);
        plainTextEdit_7 = new QPlainTextEdit(menu_2);
        plainTextEdit_7->setObjectName("plainTextEdit_7");
        plainTextEdit_7->setGeometry(QRect(50, 30, 101, 31));
        plainTextEdit_7->setStyleSheet(QString::fromUtf8("font-family: Baloo 2;\n"
"font-weight: bold;\n"
"background: white;\n"
"font-size: 15px;\n"
""));
        plainTextEdit_7->setFrameShape(QFrame::NoFrame);
        plainTextEdit_7->setFrameShadow(QFrame::Plain);
        plainTextEdit_7->setBackgroundVisible(false);
        catalogue_2 = new QFrame(menu_2);
        catalogue_2->setObjectName("catalogue_2");
        catalogue_2->setGeometry(QRect(20, 80, 151, 51));
        catalogue_2->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-radius: 5px;"));
        catalogue_2->setFrameShape(QFrame::StyledPanel);
        catalogue_2->setFrameShadow(QFrame::Raised);
        label_9 = new QLabel(catalogue_2);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(10, 10, 31, 31));
        label_9->setPixmap(QPixmap(QString::fromUtf8(":/images/Icons/books.png")));
        label_9->setScaledContents(true);
        catalogue_3 = new QPushButton(catalogue_2);
        catalogue_3->setObjectName("catalogue_3");
        catalogue_3->setGeometry(QRect(50, 10, 71, 31));
        catalogue_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background: transparent;\n"
"font-size: 14px;\n"
"border: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	color: rgb(124, 204, 241);\n"
"}"));
        catalogue_3->setAutoDefault(false);
        manageBooks_2 = new QFrame(menu_2);
        manageBooks_2->setObjectName("manageBooks_2");
        manageBooks_2->setGeometry(QRect(20, 140, 151, 51));
        manageBooks_2->setStyleSheet(QString::fromUtf8("background: rgb(240, 240, 240);"));
        manageBooks_2->setFrameShape(QFrame::StyledPanel);
        manageBooks_2->setFrameShadow(QFrame::Raised);
        label_10 = new QLabel(manageBooks_2);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(10, 10, 31, 31));
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/images/Icons/book.png")));
        label_10->setScaledContents(true);
        manageBooks_3 = new QPushButton(manageBooks_2);
        manageBooks_3->setObjectName("manageBooks_3");
        manageBooks_3->setGeometry(QRect(50, 10, 91, 31));
        manageBooks_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background: transparent;\n"
"font-size: 14px;\n"
"border: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	color: rgb(124, 204, 241);\n"
"}"));
        status_2 = new QFrame(menu_2);
        status_2->setObjectName("status_2");
        status_2->setGeometry(QRect(20, 200, 151, 51));
        status_2->setStyleSheet(QString::fromUtf8("background: white;"));
        status_2->setFrameShape(QFrame::StyledPanel);
        status_2->setFrameShadow(QFrame::Raised);
        label_11 = new QLabel(status_2);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(10, 10, 31, 31));
        label_11->setPixmap(QPixmap(QString::fromUtf8(":/images/Icons/status.png")));
        label_11->setScaledContents(true);
        status_3 = new QPushButton(status_2);
        status_3->setObjectName("status_3");
        status_3->setGeometry(QRect(50, 10, 71, 31));
        status_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background: transparent;\n"
"font-size: 14px;\n"
"border: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	color: rgb(124, 204, 241);\n"
"}"));
        membership_2 = new QFrame(menu_2);
        membership_2->setObjectName("membership_2");
        membership_2->setGeometry(QRect(20, 260, 151, 51));
        membership_2->setStyleSheet(QString::fromUtf8("background: white;"));
        membership_2->setFrameShape(QFrame::StyledPanel);
        membership_2->setFrameShadow(QFrame::Raised);
        label_12 = new QLabel(membership_2);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(10, 10, 31, 31));
        label_12->setPixmap(QPixmap(QString::fromUtf8(":/images/Icons/user.png")));
        label_12->setScaledContents(true);
        membership_3 = new QPushButton(membership_2);
        membership_3->setObjectName("membership_3");
        membership_3->setGeometry(QRect(50, 10, 81, 31));
        membership_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background: transparent;\n"
"font-size: 14px;\n"
"border: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	color: rgb(124, 204, 241);\n"
"}"));
        pushButton_3 = new QPushButton(menuPanel_2);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(30, 600, 71, 31));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"	color: rgb(106, 146, 255);\n"
"}"));
        back_2 = new QPushButton(menuPanel_2);
        back_2->setObjectName("back_2");
        back_2->setGeometry(QRect(130, 600, 71, 31));
        back_2->setStyleSheet(QString::fromUtf8("/*QPushButton {\n"
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
        back_2->setIcon(icon);
        heading_4 = new QFrame(frame_2);
        heading_4->setObjectName("heading_4");
        heading_4->setGeometry(QRect(300, 30, 641, 121));
        heading_4->setFrameShape(QFrame::StyledPanel);
        heading_4->setFrameShadow(QFrame::Raised);
        plainTextEdit_12 = new QPlainTextEdit(heading_4);
        plainTextEdit_12->setObjectName("plainTextEdit_12");
        plainTextEdit_12->setGeometry(QRect(0, 20, 641, 91));
        plainTextEdit_12->setStyleSheet(QString::fromUtf8("background: rgb(235, 235, 235);\n"
"border-radius: 10px;"));
        plainTextEdit_12->setFrameShadow(QFrame::Raised);
        plainTextEdit_13 = new QPlainTextEdit(heading_4);
        plainTextEdit_13->setObjectName("plainTextEdit_13");
        plainTextEdit_13->setGeometry(QRect(30, 40, 371, 41));
        plainTextEdit_13->setStyleSheet(QString::fromUtf8("font-family: Baloo 2;\n"
"font-weight: bold;\n"
"font-size: 23px;\n"
"background: transparent;"));
        plainTextEdit_13->setFrameShape(QFrame::NoFrame);
        plainTextEdit_13->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit_13->setReadOnly(true);
        plainTextEdit_14 = new QPlainTextEdit(heading_4);
        plainTextEdit_14->setObjectName("plainTextEdit_14");
        plainTextEdit_14->setGeometry(QRect(30, 70, 571, 31));
        plainTextEdit_14->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font-family: Baloo 2;\n"
"font-size: 13px;"));
        plainTextEdit_14->setFrameShape(QFrame::NoFrame);
        plainTextEdit_14->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit_14->setReadOnly(true);
        frame_10 = new QFrame(frame_2);
        frame_10->setObjectName("frame_10");
        frame_10->setGeometry(QRect(340, 200, 541, 401));
        frame_10->setFrameShape(QFrame::StyledPanel);
        frame_10->setFrameShadow(QFrame::Raised);
        confirmDetails = new QPushButton(frame_10);
        confirmDetails->setObjectName("confirmDetails");
        confirmDetails->setGeometry(QRect(260, 290, 231, 31));
        confirmDetails->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        label = new QLabel(frame_10);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 20, 221, 301));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/book-covers/book12.png")));
        label->setScaledContents(true);
        frame_3 = new QFrame(frame_10);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(260, 20, 241, 231));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_4 = new QLabel(frame_3);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(0, 0, 91, 16));
        label_4->setStyleSheet(QString::fromUtf8("font-family: Baloo 2;\n"
"font-size: 17px;\n"
"font-weight: bold;"));
        label_13 = new QLabel(frame_3);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(0, 100, 121, 16));
        label_13->setStyleSheet(QString::fromUtf8("font-family: Baloo 2;\n"
"font-size: 17px;\n"
"font-weight: bold;"));
        textEditOutputTitle = new QTextEdit(frame_3);
        textEditOutputTitle->setObjectName("textEditOutputTitle");
        textEditOutputTitle->setGeometry(QRect(0, 30, 231, 31));
        textEditOutputTitle->setStyleSheet(QString::fromUtf8("font-family: Baloo 2;\n"
"font-size: 17px;"));
        textEditOutputTitle->setFrameShape(QFrame::NoFrame);
        textEditOutputAuthor = new QTextEdit(frame_3);
        textEditOutputAuthor->setObjectName("textEditOutputAuthor");
        textEditOutputAuthor->setGeometry(QRect(0, 130, 231, 31));
        textEditOutputAuthor->setStyleSheet(QString::fromUtf8("font-family: Baloo 2;\n"
"font-size: 17px;"));
        textEditOutputAuthor->setFrameShape(QFrame::NoFrame);
        textEditOutputAuthor->setFrameShadow(QFrame::Plain);

        verticalLayout->addWidget(frame_2);

        AdminBookConfirmation->setCentralWidget(centralwidget);

        retranslateUi(AdminBookConfirmation);

        QMetaObject::connectSlotsByName(AdminBookConfirmation);
    } // setupUi

    void retranslateUi(QMainWindow *AdminBookConfirmation)
    {
        AdminBookConfirmation->setWindowTitle(QCoreApplication::translate("AdminBookConfirmation", "MainWindow", nullptr));
        menuPanel_2->setTitle(QString());
        logo_2->setText(QString());
        plainTextEdit_7->setPlainText(QCoreApplication::translate("AdminBookConfirmation", "Admin Menu", nullptr));
        label_9->setText(QString());
        catalogue_3->setText(QCoreApplication::translate("AdminBookConfirmation", "Catalogue", nullptr));
        label_10->setText(QString());
        manageBooks_3->setText(QCoreApplication::translate("AdminBookConfirmation", "Manage Books", nullptr));
        label_11->setText(QString());
        status_3->setText(QCoreApplication::translate("AdminBookConfirmation", "View Status", nullptr));
        label_12->setText(QString());
        membership_3->setText(QCoreApplication::translate("AdminBookConfirmation", "Membership", nullptr));
        pushButton_3->setText(QCoreApplication::translate("AdminBookConfirmation", "Logout", nullptr));
        back_2->setText(QCoreApplication::translate("AdminBookConfirmation", "Back", nullptr));
        plainTextEdit_12->setPlainText(QString());
        plainTextEdit_13->setPlainText(QCoreApplication::translate("AdminBookConfirmation", "Add New Book Confirmation", nullptr));
        plainTextEdit_14->setPlainText(QCoreApplication::translate("AdminBookConfirmation", "Please confirm that you are happy for this book to be added to the catalogue", nullptr));
        confirmDetails->setText(QCoreApplication::translate("AdminBookConfirmation", "Confirm Book Details", nullptr));
        label->setText(QString());
        label_4->setText(QCoreApplication::translate("AdminBookConfirmation", "Book Title", nullptr));
        label_13->setText(QCoreApplication::translate("AdminBookConfirmation", "Book Author", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminBookConfirmation: public Ui_AdminBookConfirmation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINBOOKCONFIRMATION_H
