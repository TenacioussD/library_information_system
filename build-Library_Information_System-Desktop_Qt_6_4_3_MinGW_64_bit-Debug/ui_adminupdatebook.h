/********************************************************************************
** Form generated from reading UI file 'adminupdatebook.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINUPDATEBOOK_H
#define UI_ADMINUPDATEBOOK_H

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
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminUpdateBook
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
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame_3;
    QFrame *frame_4;
    QFrame *book3;
    QLabel *label_36;
    QFrame *frame_60;
    QPlainTextEdit *title3;
    QPlainTextEdit *author3;
    QPushButton *edit3;
    QFrame *frame_61;
    QLabel *label_37;
    QFrame *frame_62;
    QPlainTextEdit *plainTextEdit_69;
    QPlainTextEdit *plainTextEdit_70;
    QFrame *frame_63;
    QLabel *label_24;
    QFrame *frame_64;
    QPlainTextEdit *plainTextEdit_43;
    QPlainTextEdit *plainTextEdit_44;
    QFrame *frame_65;
    QLabel *label_38;
    QFrame *frame_66;
    QPlainTextEdit *plainTextEdit_71;
    QPlainTextEdit *plainTextEdit_72;
    QFrame *frame_67;
    QLabel *label_39;
    QFrame *frame_68;
    QPlainTextEdit *plainTextEdit_73;
    QPlainTextEdit *plainTextEdit_74;
    QFrame *frame_69;
    QLabel *label_40;
    QFrame *frame_70;
    QPlainTextEdit *plainTextEdit_75;
    QPlainTextEdit *plainTextEdit_76;
    QFrame *book4;
    QLabel *label_41;
    QFrame *frame_72;
    QPlainTextEdit *title4;
    QPlainTextEdit *author4;
    QPushButton *edit4;
    QFrame *book1;
    QLabel *image1;
    QFrame *frame_74;
    QPlainTextEdit *author1;
    QPushButton *edit1;
    QPlainTextEdit *title1;
    QFrame *frame_75;
    QLabel *label_43;
    QFrame *frame_76;
    QPlainTextEdit *plainTextEdit_81;
    QPlainTextEdit *plainTextEdit_82;
    QFrame *book2;
    QLabel *label_25;
    QFrame *frame_35;
    QPlainTextEdit *title2;
    QPlainTextEdit *author2;
    QPushButton *edit2;
    QFrame *frame_77;
    QLabel *label_44;
    QFrame *frame_78;
    QPlainTextEdit *plainTextEdit_83;
    QPlainTextEdit *plainTextEdit_84;
    QFrame *frame_79;
    QLabel *label_45;
    QFrame *frame_80;
    QPlainTextEdit *plainTextEdit_85;
    QPlainTextEdit *plainTextEdit_86;

    void setupUi(QMainWindow *AdminUpdateBook)
    {
        if (AdminUpdateBook->objectName().isEmpty())
            AdminUpdateBook->setObjectName("AdminUpdateBook");
        AdminUpdateBook->resize(1019, 670);
        centralwidget = new QWidget(AdminUpdateBook);
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
        plainTextEdit_14 = new QPlainTextEdit(heading_4);
        plainTextEdit_14->setObjectName("plainTextEdit_14");
        plainTextEdit_14->setGeometry(QRect(30, 70, 571, 31));
        plainTextEdit_14->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font-family: Baloo 2;\n"
"font-size: 13px;"));
        plainTextEdit_14->setFrameShape(QFrame::NoFrame);
        plainTextEdit_14->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea = new QScrollArea(frame_2);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(300, 180, 651, 431));
        scrollArea->setStyleSheet(QString::fromUtf8("/* VERTICAL SCROLL*/\n"
"\n"
"QScrollBar::handle:vertical {\n"
"border: none;\n"
"border-radius: 5px;\n"
"background: rgb(215, 242, 255);\n"
"margin: 15px 0 15px 0;\n"
"width: 14px;\n"
"}\n"
"\n"
"/* SCROLL BUTTON - TOP*/\n"
"\n"
"QScrollBar::sub-line:vertical {\n"
"border:none;\n"
"background: rgb(215, 242, 255);\n"
"height: 15px;\n"
"border-top-left-radius: 7px;\n"
"border-top-right-radius: 7px;\n"
"subcontrol-position: top;\n"
"subcontrol-origin: margin; \n"
"}\n"
"\n"
"\n"
"/* SCROLL BUTTON - BOTTOM*/\n"
"\n"
"QScrollBar::add-line:vertical {\n"
"border:none;\n"
"background: rgb(215, 242, 255);\n"
"height: 15px;\n"
"border-bottom-left-radius: 7px;\n"
"border-bottom-right-radius: 7px;\n"
"subcontrol-position: bottom;\n"
"subcontrol-origin: margin; \n"
"}\n"
"\n"
""));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, -215, 634, 678));
        scrollAreaWidgetContents->setStyleSheet(QString::fromUtf8("border-style: none;"));
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_3->setObjectName("verticalLayout_3");
        frame_3 = new QFrame(scrollAreaWidgetContents);
        frame_3->setObjectName("frame_3");
        frame_3->setMinimumSize(QSize(0, 660));
        frame_3->setStyleSheet(QString::fromUtf8("background: white;"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        frame_4 = new QFrame(frame_3);
        frame_4->setObjectName("frame_4");
        frame_4->setGeometry(QRect(0, -10, 641, 651));
        frame_4->setMinimumSize(QSize(10, 10));
        frame_4->setMouseTracking(false);
        frame_4->setStyleSheet(QString::fromUtf8("background: white;"));
        book3 = new QFrame(frame_4);
        book3->setObjectName("book3");
        book3->setGeometry(QRect(309, 9, 131, 231));
        book3->setFrameShape(QFrame::StyledPanel);
        book3->setFrameShadow(QFrame::Raised);
        label_36 = new QLabel(book3);
        label_36->setObjectName("label_36");
        label_36->setGeometry(QRect(10, 0, 111, 141));
        label_36->setPixmap(QPixmap(QString::fromUtf8(":/images/book-covers/book12.png")));
        label_36->setScaledContents(true);
        frame_60 = new QFrame(book3);
        frame_60->setObjectName("frame_60");
        frame_60->setGeometry(QRect(10, 140, 121, 81));
        frame_60->setFrameShape(QFrame::StyledPanel);
        frame_60->setFrameShadow(QFrame::Raised);
        title3 = new QPlainTextEdit(frame_60);
        title3->setObjectName("title3");
        title3->setGeometry(QRect(0, 10, 111, 21));
        title3->setStyleSheet(QString::fromUtf8("font-weight: bold;\n"
"font-family: Baloo 2;\n"
"background: white;"));
        title3->setFrameShape(QFrame::NoFrame);
        title3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        title3->setTabChangesFocus(false);
        title3->setLineWrapMode(QPlainTextEdit::WidgetWidth);
        title3->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        author3 = new QPlainTextEdit(frame_60);
        author3->setObjectName("author3");
        author3->setGeometry(QRect(0, 30, 104, 21));
        author3->setStyleSheet(QString::fromUtf8("font-family: Baloo 2;\n"
"background: white;"));
        author3->setFrameShape(QFrame::NoFrame);
        author3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        author3->setReadOnly(true);
        edit3 = new QPushButton(frame_60);
        edit3->setObjectName("edit3");
        edit3->setGeometry(QRect(0, 60, 51, 21));
        edit3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background: transparent;\n"
"font-size: 11px;\n"
"border: 0.5px solid;\n"
"border-color: rgb(146, 184, 212);\n"
"border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	color: rgb(106, 146, 255);\n"
"}"));
        edit3->setAutoDefault(false);
        frame_61 = new QFrame(frame_4);
        frame_61->setObjectName("frame_61");
        frame_61->setGeometry(QRect(160, 460, 141, 210));
        frame_61->setFrameShape(QFrame::StyledPanel);
        frame_61->setFrameShadow(QFrame::Raised);
        label_37 = new QLabel(frame_61);
        label_37->setObjectName("label_37");
        label_37->setGeometry(QRect(10, 0, 111, 141));
        label_37->setPixmap(QPixmap(QString::fromUtf8(":/images/book-covers/book15.png")));
        label_37->setScaledContents(true);
        frame_62 = new QFrame(frame_61);
        frame_62->setObjectName("frame_62");
        frame_62->setGeometry(QRect(10, 150, 111, 41));
        frame_62->setFrameShape(QFrame::StyledPanel);
        frame_62->setFrameShadow(QFrame::Raised);
        plainTextEdit_69 = new QPlainTextEdit(frame_62);
        plainTextEdit_69->setObjectName("plainTextEdit_69");
        plainTextEdit_69->setGeometry(QRect(0, 0, 91, 21));
        plainTextEdit_69->setStyleSheet(QString::fromUtf8("font-weight: bold;\n"
"font-family: Baloo 2;\n"
"background: white;"));
        plainTextEdit_69->setFrameShape(QFrame::NoFrame);
        plainTextEdit_69->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit_69->setTabChangesFocus(false);
        plainTextEdit_69->setLineWrapMode(QPlainTextEdit::WidgetWidth);
        plainTextEdit_69->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        plainTextEdit_70 = new QPlainTextEdit(frame_62);
        plainTextEdit_70->setObjectName("plainTextEdit_70");
        plainTextEdit_70->setGeometry(QRect(0, 20, 104, 21));
        plainTextEdit_70->setStyleSheet(QString::fromUtf8("font-family: Baloo 2;\n"
"background: white;"));
        plainTextEdit_70->setFrameShape(QFrame::NoFrame);
        plainTextEdit_70->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit_70->setReadOnly(true);
        frame_63 = new QFrame(frame_4);
        frame_63->setObjectName("frame_63");
        frame_63->setGeometry(QRect(0, 250, 144, 211));
        frame_63->setFrameShape(QFrame::StyledPanel);
        frame_63->setFrameShadow(QFrame::Raised);
        label_24 = new QLabel(frame_63);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(20, 0, 111, 141));
        label_24->setPixmap(QPixmap(QString::fromUtf8(":/images/book-covers/book2.png")));
        label_24->setScaledContents(true);
        frame_64 = new QFrame(frame_63);
        frame_64->setObjectName("frame_64");
        frame_64->setGeometry(QRect(20, 150, 111, 41));
        frame_64->setFrameShape(QFrame::StyledPanel);
        frame_64->setFrameShadow(QFrame::Raised);
        plainTextEdit_43 = new QPlainTextEdit(frame_64);
        plainTextEdit_43->setObjectName("plainTextEdit_43");
        plainTextEdit_43->setGeometry(QRect(0, 0, 91, 21));
        plainTextEdit_43->setStyleSheet(QString::fromUtf8("font-weight: bold;\n"
"font-family: Baloo 2;\n"
"background: white;"));
        plainTextEdit_43->setFrameShape(QFrame::NoFrame);
        plainTextEdit_43->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit_43->setTabChangesFocus(false);
        plainTextEdit_43->setLineWrapMode(QPlainTextEdit::WidgetWidth);
        plainTextEdit_43->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        plainTextEdit_44 = new QPlainTextEdit(frame_64);
        plainTextEdit_44->setObjectName("plainTextEdit_44");
        plainTextEdit_44->setGeometry(QRect(0, 20, 104, 21));
        plainTextEdit_44->setStyleSheet(QString::fromUtf8("font-family: Baloo 2;\n"
"background: white;"));
        plainTextEdit_44->setFrameShape(QFrame::NoFrame);
        plainTextEdit_44->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit_44->setReadOnly(true);
        frame_65 = new QFrame(frame_4);
        frame_65->setObjectName("frame_65");
        frame_65->setGeometry(QRect(310, 460, 131, 210));
        frame_65->setFrameShape(QFrame::StyledPanel);
        frame_65->setFrameShadow(QFrame::Raised);
        label_38 = new QLabel(frame_65);
        label_38->setObjectName("label_38");
        label_38->setGeometry(QRect(10, 0, 111, 141));
        label_38->setPixmap(QPixmap(QString::fromUtf8(":/images/book-covers/book7.png")));
        label_38->setScaledContents(true);
        frame_66 = new QFrame(frame_65);
        frame_66->setObjectName("frame_66");
        frame_66->setGeometry(QRect(10, 150, 111, 41));
        frame_66->setFrameShape(QFrame::StyledPanel);
        frame_66->setFrameShadow(QFrame::Raised);
        plainTextEdit_71 = new QPlainTextEdit(frame_66);
        plainTextEdit_71->setObjectName("plainTextEdit_71");
        plainTextEdit_71->setGeometry(QRect(0, 0, 91, 21));
        plainTextEdit_71->setStyleSheet(QString::fromUtf8("font-weight: bold;\n"
"font-family: Baloo 2;\n"
"background: white;"));
        plainTextEdit_71->setFrameShape(QFrame::NoFrame);
        plainTextEdit_71->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit_71->setTabChangesFocus(false);
        plainTextEdit_71->setLineWrapMode(QPlainTextEdit::WidgetWidth);
        plainTextEdit_71->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        plainTextEdit_72 = new QPlainTextEdit(frame_66);
        plainTextEdit_72->setObjectName("plainTextEdit_72");
        plainTextEdit_72->setGeometry(QRect(0, 20, 104, 21));
        plainTextEdit_72->setStyleSheet(QString::fromUtf8("font-family: Baloo 2;\n"
"background: white;"));
        plainTextEdit_72->setFrameShape(QFrame::NoFrame);
        plainTextEdit_72->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit_72->setReadOnly(true);
        frame_67 = new QFrame(frame_4);
        frame_67->setObjectName("frame_67");
        frame_67->setGeometry(QRect(160, 250, 141, 211));
        frame_67->setFrameShape(QFrame::StyledPanel);
        frame_67->setFrameShadow(QFrame::Raised);
        label_39 = new QLabel(frame_67);
        label_39->setObjectName("label_39");
        label_39->setGeometry(QRect(10, 0, 111, 141));
        label_39->setPixmap(QPixmap(QString::fromUtf8(":/images/book-covers/book13.png")));
        label_39->setScaledContents(true);
        frame_68 = new QFrame(frame_67);
        frame_68->setObjectName("frame_68");
        frame_68->setGeometry(QRect(10, 150, 111, 41));
        frame_68->setFrameShape(QFrame::StyledPanel);
        frame_68->setFrameShadow(QFrame::Raised);
        plainTextEdit_73 = new QPlainTextEdit(frame_68);
        plainTextEdit_73->setObjectName("plainTextEdit_73");
        plainTextEdit_73->setGeometry(QRect(0, 0, 111, 21));
        plainTextEdit_73->setStyleSheet(QString::fromUtf8("font-weight: bold;\n"
"font-family: Baloo 2;\n"
"background: white;"));
        plainTextEdit_73->setFrameShape(QFrame::NoFrame);
        plainTextEdit_73->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit_73->setTabChangesFocus(false);
        plainTextEdit_73->setLineWrapMode(QPlainTextEdit::WidgetWidth);
        plainTextEdit_73->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        plainTextEdit_74 = new QPlainTextEdit(frame_68);
        plainTextEdit_74->setObjectName("plainTextEdit_74");
        plainTextEdit_74->setGeometry(QRect(0, 20, 104, 21));
        plainTextEdit_74->setStyleSheet(QString::fromUtf8("font-family: Baloo 2;\n"
"background: white;"));
        plainTextEdit_74->setFrameShape(QFrame::NoFrame);
        plainTextEdit_74->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit_74->setReadOnly(true);
        frame_69 = new QFrame(frame_4);
        frame_69->setObjectName("frame_69");
        frame_69->setGeometry(QRect(460, 460, 131, 210));
        frame_69->setFrameShape(QFrame::StyledPanel);
        frame_69->setFrameShadow(QFrame::Raised);
        label_40 = new QLabel(frame_69);
        label_40->setObjectName("label_40");
        label_40->setGeometry(QRect(10, 0, 111, 141));
        label_40->setPixmap(QPixmap(QString::fromUtf8(":/images/book-covers/book.png")));
        label_40->setScaledContents(true);
        frame_70 = new QFrame(frame_69);
        frame_70->setObjectName("frame_70");
        frame_70->setGeometry(QRect(10, 150, 111, 41));
        frame_70->setFrameShape(QFrame::StyledPanel);
        frame_70->setFrameShadow(QFrame::Raised);
        plainTextEdit_75 = new QPlainTextEdit(frame_70);
        plainTextEdit_75->setObjectName("plainTextEdit_75");
        plainTextEdit_75->setGeometry(QRect(0, 0, 91, 21));
        plainTextEdit_75->setStyleSheet(QString::fromUtf8("font-weight: bold;\n"
"font-family: Baloo 2;\n"
"background: white;"));
        plainTextEdit_75->setFrameShape(QFrame::NoFrame);
        plainTextEdit_75->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit_75->setTabChangesFocus(false);
        plainTextEdit_75->setLineWrapMode(QPlainTextEdit::WidgetWidth);
        plainTextEdit_75->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        plainTextEdit_76 = new QPlainTextEdit(frame_70);
        plainTextEdit_76->setObjectName("plainTextEdit_76");
        plainTextEdit_76->setGeometry(QRect(0, 20, 104, 21));
        plainTextEdit_76->setStyleSheet(QString::fromUtf8("font-family: Baloo 2;\n"
"background: white;"));
        plainTextEdit_76->setFrameShape(QFrame::NoFrame);
        plainTextEdit_76->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit_76->setReadOnly(true);
        book4 = new QFrame(frame_4);
        book4->setObjectName("book4");
        book4->setGeometry(QRect(458, 9, 131, 231));
        book4->setFrameShape(QFrame::StyledPanel);
        book4->setFrameShadow(QFrame::Raised);
        label_41 = new QLabel(book4);
        label_41->setObjectName("label_41");
        label_41->setGeometry(QRect(10, 0, 111, 141));
        label_41->setPixmap(QPixmap(QString::fromUtf8(":/images/book-covers/book9.png")));
        label_41->setScaledContents(true);
        frame_72 = new QFrame(book4);
        frame_72->setObjectName("frame_72");
        frame_72->setGeometry(QRect(10, 150, 121, 71));
        frame_72->setFrameShape(QFrame::StyledPanel);
        frame_72->setFrameShadow(QFrame::Raised);
        title4 = new QPlainTextEdit(frame_72);
        title4->setObjectName("title4");
        title4->setGeometry(QRect(0, 0, 91, 21));
        title4->setStyleSheet(QString::fromUtf8("font-weight: bold;\n"
"font-family: Baloo 2;\n"
"background: white;"));
        title4->setFrameShape(QFrame::NoFrame);
        title4->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        title4->setTabChangesFocus(false);
        title4->setLineWrapMode(QPlainTextEdit::WidgetWidth);
        title4->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        author4 = new QPlainTextEdit(frame_72);
        author4->setObjectName("author4");
        author4->setGeometry(QRect(0, 20, 104, 21));
        author4->setStyleSheet(QString::fromUtf8("font-family: Baloo 2;\n"
"background: white;"));
        author4->setFrameShape(QFrame::NoFrame);
        author4->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        author4->setReadOnly(true);
        edit4 = new QPushButton(frame_72);
        edit4->setObjectName("edit4");
        edit4->setGeometry(QRect(0, 50, 51, 21));
        edit4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background: transparent;\n"
"font-size: 11px;\n"
"border: 0.5px solid;\n"
"border-color: rgb(146, 184, 212);\n"
"border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	color: rgb(106, 146, 255);\n"
"}"));
        edit4->setAutoDefault(false);
        book1 = new QFrame(frame_4);
        book1->setObjectName("book1");
        book1->setGeometry(QRect(2, 9, 131, 231));
        book1->setFrameShape(QFrame::StyledPanel);
        book1->setFrameShadow(QFrame::Raised);
        image1 = new QLabel(book1);
        image1->setObjectName("image1");
        image1->setGeometry(QRect(10, 0, 111, 141));
        image1->setPixmap(QPixmap(QString::fromUtf8(":/images/book-covers/book14.png")));
        image1->setScaledContents(true);
        frame_74 = new QFrame(book1);
        frame_74->setObjectName("frame_74");
        frame_74->setGeometry(QRect(10, 140, 111, 81));
        frame_74->setFrameShape(QFrame::StyledPanel);
        frame_74->setFrameShadow(QFrame::Raised);
        author1 = new QPlainTextEdit(frame_74);
        author1->setObjectName("author1");
        author1->setGeometry(QRect(0, 30, 91, 21));
        author1->setLayoutDirection(Qt::LeftToRight);
        author1->setStyleSheet(QString::fromUtf8("font-family: Baloo 2;\n"
"background: white;\n"
"text-align: center;"));
        author1->setFrameShape(QFrame::NoFrame);
        author1->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        author1->setReadOnly(true);
        edit1 = new QPushButton(frame_74);
        edit1->setObjectName("edit1");
        edit1->setGeometry(QRect(0, 60, 51, 21));
        edit1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background: transparent;\n"
"font-size: 11px;\n"
"border: 0.5px solid;\n"
"border-color: rgb(146, 184, 212);\n"
"border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	color: rgb(106, 146, 255);\n"
"}"));
        edit1->setAutoDefault(false);
        title1 = new QPlainTextEdit(frame_74);
        title1->setObjectName("title1");
        title1->setGeometry(QRect(0, 10, 91, 21));
        title1->setLayoutDirection(Qt::LeftToRight);
        title1->setStyleSheet(QString::fromUtf8("font-weight: bold;\n"
"font-family: Baloo 2;\n"
"background: white;"));
        title1->setFrameShape(QFrame::NoFrame);
        title1->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        title1->setReadOnly(true);
        frame_75 = new QFrame(frame_4);
        frame_75->setObjectName("frame_75");
        frame_75->setGeometry(QRect(0, 460, 144, 210));
        frame_75->setFrameShape(QFrame::StyledPanel);
        frame_75->setFrameShadow(QFrame::Raised);
        label_43 = new QLabel(frame_75);
        label_43->setObjectName("label_43");
        label_43->setGeometry(QRect(20, 0, 111, 141));
        label_43->setPixmap(QPixmap(QString::fromUtf8(":/images/book-covers/book16.png")));
        label_43->setScaledContents(true);
        frame_76 = new QFrame(frame_75);
        frame_76->setObjectName("frame_76");
        frame_76->setGeometry(QRect(20, 150, 111, 41));
        frame_76->setFrameShape(QFrame::StyledPanel);
        frame_76->setFrameShadow(QFrame::Raised);
        plainTextEdit_81 = new QPlainTextEdit(frame_76);
        plainTextEdit_81->setObjectName("plainTextEdit_81");
        plainTextEdit_81->setGeometry(QRect(0, 0, 91, 21));
        plainTextEdit_81->setStyleSheet(QString::fromUtf8("font-weight: bold;\n"
"font-family: Baloo 2;\n"
"background: white;"));
        plainTextEdit_81->setFrameShape(QFrame::NoFrame);
        plainTextEdit_81->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit_81->setTabChangesFocus(false);
        plainTextEdit_81->setLineWrapMode(QPlainTextEdit::WidgetWidth);
        plainTextEdit_81->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        plainTextEdit_82 = new QPlainTextEdit(frame_76);
        plainTextEdit_82->setObjectName("plainTextEdit_82");
        plainTextEdit_82->setGeometry(QRect(0, 20, 104, 21));
        plainTextEdit_82->setStyleSheet(QString::fromUtf8("font-family: Baloo 2;\n"
"background: white;"));
        plainTextEdit_82->setFrameShape(QFrame::NoFrame);
        plainTextEdit_82->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit_82->setReadOnly(true);
        book2 = new QFrame(frame_4);
        book2->setObjectName("book2");
        book2->setGeometry(QRect(159, 9, 131, 231));
        book2->setFrameShape(QFrame::StyledPanel);
        book2->setFrameShadow(QFrame::Raised);
        label_25 = new QLabel(book2);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(10, 0, 111, 141));
        label_25->setPixmap(QPixmap(QString::fromUtf8(":/images/book-covers/book11.png")));
        label_25->setScaledContents(true);
        frame_35 = new QFrame(book2);
        frame_35->setObjectName("frame_35");
        frame_35->setGeometry(QRect(10, 140, 111, 81));
        frame_35->setFrameShape(QFrame::StyledPanel);
        frame_35->setFrameShadow(QFrame::Raised);
        title2 = new QPlainTextEdit(frame_35);
        title2->setObjectName("title2");
        title2->setGeometry(QRect(0, 10, 91, 21));
        title2->setStyleSheet(QString::fromUtf8("font-weight: bold;\n"
"font-family: Baloo 2;\n"
"background: white;"));
        title2->setFrameShape(QFrame::NoFrame);
        title2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        title2->setTabChangesFocus(false);
        title2->setLineWrapMode(QPlainTextEdit::WidgetWidth);
        title2->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        author2 = new QPlainTextEdit(frame_35);
        author2->setObjectName("author2");
        author2->setGeometry(QRect(0, 30, 101, 21));
        author2->setStyleSheet(QString::fromUtf8("font-family: Baloo 2;\n"
"background: white;"));
        author2->setFrameShape(QFrame::NoFrame);
        author2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        author2->setReadOnly(true);
        edit2 = new QPushButton(frame_35);
        edit2->setObjectName("edit2");
        edit2->setGeometry(QRect(0, 60, 51, 21));
        edit2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background: transparent;\n"
"font-size: 11px;\n"
"border: 0.5px solid;\n"
"border-color: rgb(146, 184, 212);\n"
"border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	color: rgb(106, 146, 255);\n"
"}"));
        edit2->setAutoDefault(false);
        frame_77 = new QFrame(frame_4);
        frame_77->setObjectName("frame_77");
        frame_77->setGeometry(QRect(460, 250, 131, 211));
        frame_77->setFrameShape(QFrame::StyledPanel);
        frame_77->setFrameShadow(QFrame::Raised);
        label_44 = new QLabel(frame_77);
        label_44->setObjectName("label_44");
        label_44->setGeometry(QRect(10, 0, 111, 141));
        label_44->setPixmap(QPixmap(QString::fromUtf8(":/images/book-covers/book6.png")));
        label_44->setScaledContents(true);
        frame_78 = new QFrame(frame_77);
        frame_78->setObjectName("frame_78");
        frame_78->setGeometry(QRect(10, 150, 111, 41));
        frame_78->setFrameShape(QFrame::StyledPanel);
        frame_78->setFrameShadow(QFrame::Raised);
        plainTextEdit_83 = new QPlainTextEdit(frame_78);
        plainTextEdit_83->setObjectName("plainTextEdit_83");
        plainTextEdit_83->setGeometry(QRect(0, 0, 91, 21));
        plainTextEdit_83->setStyleSheet(QString::fromUtf8("font-weight: bold;\n"
"font-family: Baloo 2;\n"
"background: white;"));
        plainTextEdit_83->setFrameShape(QFrame::NoFrame);
        plainTextEdit_83->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit_83->setTabChangesFocus(false);
        plainTextEdit_83->setLineWrapMode(QPlainTextEdit::WidgetWidth);
        plainTextEdit_83->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        plainTextEdit_84 = new QPlainTextEdit(frame_78);
        plainTextEdit_84->setObjectName("plainTextEdit_84");
        plainTextEdit_84->setGeometry(QRect(0, 20, 104, 21));
        plainTextEdit_84->setStyleSheet(QString::fromUtf8("font-family: Baloo 2;\n"
"background: white;"));
        plainTextEdit_84->setFrameShape(QFrame::NoFrame);
        plainTextEdit_84->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit_84->setReadOnly(true);
        frame_79 = new QFrame(frame_4);
        frame_79->setObjectName("frame_79");
        frame_79->setGeometry(QRect(310, 250, 131, 211));
        frame_79->setFrameShape(QFrame::StyledPanel);
        frame_79->setFrameShadow(QFrame::Raised);
        label_45 = new QLabel(frame_79);
        label_45->setObjectName("label_45");
        label_45->setGeometry(QRect(10, 0, 111, 141));
        label_45->setPixmap(QPixmap(QString::fromUtf8(":/images/book-covers/book10.png")));
        label_45->setScaledContents(true);
        frame_80 = new QFrame(frame_79);
        frame_80->setObjectName("frame_80");
        frame_80->setGeometry(QRect(10, 150, 111, 41));
        frame_80->setFrameShape(QFrame::StyledPanel);
        frame_80->setFrameShadow(QFrame::Raised);
        plainTextEdit_85 = new QPlainTextEdit(frame_80);
        plainTextEdit_85->setObjectName("plainTextEdit_85");
        plainTextEdit_85->setGeometry(QRect(0, 0, 111, 21));
        plainTextEdit_85->setStyleSheet(QString::fromUtf8("font-weight: bold;\n"
"font-family: Baloo 2;\n"
"background: white;"));
        plainTextEdit_85->setFrameShape(QFrame::NoFrame);
        plainTextEdit_85->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit_85->setTabChangesFocus(false);
        plainTextEdit_85->setLineWrapMode(QPlainTextEdit::WidgetWidth);
        plainTextEdit_85->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        plainTextEdit_86 = new QPlainTextEdit(frame_80);
        plainTextEdit_86->setObjectName("plainTextEdit_86");
        plainTextEdit_86->setGeometry(QRect(0, 20, 104, 21));
        plainTextEdit_86->setStyleSheet(QString::fromUtf8("font-family: Baloo 2;\n"
"background: white;"));
        plainTextEdit_86->setFrameShape(QFrame::NoFrame);
        plainTextEdit_86->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit_86->setReadOnly(true);

        verticalLayout_3->addWidget(frame_3);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(frame_2);

        AdminUpdateBook->setCentralWidget(centralwidget);

        retranslateUi(AdminUpdateBook);

        QMetaObject::connectSlotsByName(AdminUpdateBook);
    } // setupUi

    void retranslateUi(QMainWindow *AdminUpdateBook)
    {
        AdminUpdateBook->setWindowTitle(QCoreApplication::translate("AdminUpdateBook", "MainWindow", nullptr));
        menuPanel_2->setTitle(QString());
        logo_2->setText(QString());
        plainTextEdit_7->setPlainText(QCoreApplication::translate("AdminUpdateBook", "Admin Menu", nullptr));
        label_9->setText(QString());
        catalogue_3->setText(QCoreApplication::translate("AdminUpdateBook", "Catalogue", nullptr));
        label_10->setText(QString());
        manageBooks_3->setText(QCoreApplication::translate("AdminUpdateBook", "Manage Books", nullptr));
        label_11->setText(QString());
        status_3->setText(QCoreApplication::translate("AdminUpdateBook", "View Status", nullptr));
        label_12->setText(QString());
        membership_3->setText(QCoreApplication::translate("AdminUpdateBook", "Membership", nullptr));
        pushButton_3->setText(QCoreApplication::translate("AdminUpdateBook", "Logout", nullptr));
        back_2->setText(QCoreApplication::translate("AdminUpdateBook", "Back", nullptr));
        plainTextEdit_12->setPlainText(QString());
        plainTextEdit_13->setPlainText(QCoreApplication::translate("AdminUpdateBook", "Update Book Details", nullptr));
        plainTextEdit_14->setPlainText(QCoreApplication::translate("AdminUpdateBook", "Please select a book to change its details", nullptr));
        label_36->setText(QString());
        title3->setPlainText(QCoreApplication::translate("AdminUpdateBook", "Embrace The Wild", nullptr));
        author3->setPlainText(QCoreApplication::translate("AdminUpdateBook", "Kylan Gentry", nullptr));
        edit3->setText(QCoreApplication::translate("AdminUpdateBook", "Edit", nullptr));
        label_37->setText(QString());
        plainTextEdit_69->setPlainText(QCoreApplication::translate("AdminUpdateBook", "Learn & Play", nullptr));
        plainTextEdit_70->setPlainText(QCoreApplication::translate("AdminUpdateBook", "John Glover", nullptr));
        label_24->setText(QString());
        plainTextEdit_43->setPlainText(QCoreApplication::translate("AdminUpdateBook", "The Bike Guy", nullptr));
        plainTextEdit_44->setPlainText(QCoreApplication::translate("AdminUpdateBook", "Mia Gas", nullptr));
        label_38->setText(QString());
        plainTextEdit_71->setPlainText(QCoreApplication::translate("AdminUpdateBook", "How To Skip", nullptr));
        plainTextEdit_72->setPlainText(QCoreApplication::translate("AdminUpdateBook", "Tatiana McGregor", nullptr));
        label_39->setText(QString());
        plainTextEdit_73->setPlainText(QCoreApplication::translate("AdminUpdateBook", "We Are Business", nullptr));
        plainTextEdit_74->setPlainText(QCoreApplication::translate("AdminUpdateBook", "Julies Maldover", nullptr));
        label_40->setText(QString());
        plainTextEdit_75->setPlainText(QCoreApplication::translate("AdminUpdateBook", "The Orange Book", nullptr));
        plainTextEdit_76->setPlainText(QCoreApplication::translate("AdminUpdateBook", "Marceline Avila", nullptr));
        label_41->setText(QString());
        title4->setPlainText(QCoreApplication::translate("AdminUpdateBook", "Atomic Love", nullptr));
        author4->setPlainText(QCoreApplication::translate("AdminUpdateBook", "Bowen Higgins", nullptr));
        edit4->setText(QCoreApplication::translate("AdminUpdateBook", "Edit", nullptr));
        image1->setText(QString());
        author1->setPlainText(QCoreApplication::translate("AdminUpdateBook", "Peter Jackson", nullptr));
        edit1->setText(QCoreApplication::translate("AdminUpdateBook", "Edit", nullptr));
        title1->setPlainText(QCoreApplication::translate("AdminUpdateBook", "Great Lakes", nullptr));
        label_43->setText(QString());
        plainTextEdit_81->setPlainText(QCoreApplication::translate("AdminUpdateBook", "Comic Book", nullptr));
        plainTextEdit_82->setPlainText(QCoreApplication::translate("AdminUpdateBook", "Kane Dyer", nullptr));
        label_25->setText(QString());
        title2->setPlainText(QCoreApplication::translate("AdminUpdateBook", "A Love Story", nullptr));
        author2->setPlainText(QCoreApplication::translate("AdminUpdateBook", "Franklin Sierra", nullptr));
        edit2->setText(QCoreApplication::translate("AdminUpdateBook", "Edit", nullptr));
        label_44->setText(QString());
        plainTextEdit_83->setPlainText(QCoreApplication::translate("AdminUpdateBook", "Cheesecakes", nullptr));
        plainTextEdit_84->setPlainText(QCoreApplication::translate("AdminUpdateBook", "Tim Smith", nullptr));
        label_45->setText(QString());
        plainTextEdit_85->setPlainText(QCoreApplication::translate("AdminUpdateBook", "Snow At Sunset", nullptr));
        plainTextEdit_86->setPlainText(QCoreApplication::translate("AdminUpdateBook", "Samantha Dee", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminUpdateBook: public Ui_AdminUpdateBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINUPDATEBOOK_H
