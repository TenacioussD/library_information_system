/********************************************************************************
** Form generated from reading UI file 'admineditbookdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINEDITBOOKDIALOG_H
#define UI_ADMINEDITBOOKDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AdminEditBookDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QGroupBox *bottomPanel;
    QFrame *frame_2;
    QPushButton *cancelButton;
    QPushButton *pushButton;
    QLabel *logo_2;
    QFrame *frame_3;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_3;
    QPlainTextEdit *plainTextEdit;
    QLineEdit *lineEditTitle;
    QLineEdit *lineEditAuthor;

    void setupUi(QDialog *AdminEditBookDialog)
    {
        if (AdminEditBookDialog->objectName().isEmpty())
            AdminEditBookDialog->setObjectName("AdminEditBookDialog");
        AdminEditBookDialog->resize(409, 260);
        verticalLayout = new QVBoxLayout(AdminEditBookDialog);
        verticalLayout->setObjectName("verticalLayout");
        frame = new QFrame(AdminEditBookDialog);
        frame->setObjectName("frame");
        frame->setStyleSheet(QString::fromUtf8("background: white;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        bottomPanel = new QGroupBox(frame);
        bottomPanel->setObjectName("bottomPanel");
        bottomPanel->setGeometry(QRect(10, 190, 371, 41));
        bottomPanel->setStyleSheet(QString::fromUtf8("background: rgb(220, 245, 255);"));
        frame_2 = new QFrame(bottomPanel);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(100, 10, 181, 21));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        cancelButton = new QPushButton(frame_2);
        cancelButton->setObjectName("cancelButton");
        cancelButton->setGeometry(QRect(100, 0, 75, 21));
        cancelButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background: white;\n"
"border-radius: 5px;\n"
"border: 1px solid grey;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	color: rgb(106, 146, 255);\n"
"}"));
        pushButton = new QPushButton(frame_2);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, 0, 75, 21));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background: white;\n"
"border-radius: 5px;\n"
"border: 1px solid grey;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	color: rgb(106, 146, 255);\n"
"}"));
        logo_2 = new QLabel(frame);
        logo_2->setObjectName("logo_2");
        logo_2->setGeometry(QRect(170, 10, 51, 41));
        logo_2->setPixmap(QPixmap(QString::fromUtf8(":/images/logo.png")));
        logo_2->setScaledContents(true);
        frame_3 = new QFrame(frame);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(60, 60, 271, 121));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        textEdit_2 = new QTextEdit(frame_3);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(0, 40, 41, 31));
        textEdit_2->setFrameShape(QFrame::NoFrame);
        textEdit_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_2->setReadOnly(true);
        textEdit_3 = new QTextEdit(frame_3);
        textEdit_3->setObjectName("textEdit_3");
        textEdit_3->setGeometry(QRect(0, 80, 51, 31));
        textEdit_3->setFrameShape(QFrame::NoFrame);
        textEdit_3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_3->setReadOnly(true);
        plainTextEdit = new QPlainTextEdit(frame_3);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(0, 0, 281, 31));
        plainTextEdit->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Calibri\";"));
        plainTextEdit->setFrameShape(QFrame::NoFrame);
        plainTextEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit->setReadOnly(true);
        lineEditTitle = new QLineEdit(frame_3);
        lineEditTitle->setObjectName("lineEditTitle");
        lineEditTitle->setGeometry(QRect(70, 40, 191, 22));
        lineEditTitle->setStyleSheet(QString::fromUtf8("border: none;"));
        lineEditTitle->setReadOnly(true);
        lineEditAuthor = new QLineEdit(frame_3);
        lineEditAuthor->setObjectName("lineEditAuthor");
        lineEditAuthor->setGeometry(QRect(70, 80, 191, 22));
        lineEditAuthor->setStyleSheet(QString::fromUtf8("border: none;"));
        lineEditAuthor->setReadOnly(true);

        verticalLayout->addWidget(frame);


        retranslateUi(AdminEditBookDialog);

        QMetaObject::connectSlotsByName(AdminEditBookDialog);
    } // setupUi

    void retranslateUi(QDialog *AdminEditBookDialog)
    {
        AdminEditBookDialog->setWindowTitle(QCoreApplication::translate("AdminEditBookDialog", "Dialog", nullptr));
        bottomPanel->setTitle(QString());
        cancelButton->setText(QCoreApplication::translate("AdminEditBookDialog", "Cancel", nullptr));
        pushButton->setText(QCoreApplication::translate("AdminEditBookDialog", "Confirm", nullptr));
        logo_2->setText(QString());
        textEdit_2->setHtml(QCoreApplication::translate("AdminEditBookDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Title:</p></body></html>", nullptr));
        textEdit_3->setHtml(QCoreApplication::translate("AdminEditBookDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Author:</p></body></html>", nullptr));
        plainTextEdit->setPlainText(QCoreApplication::translate("AdminEditBookDialog", "Please confirm the details are correct", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminEditBookDialog: public Ui_AdminEditBookDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINEDITBOOKDIALOG_H
