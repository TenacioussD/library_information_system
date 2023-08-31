/********************************************************************************
** Form generated from reading UI file 'admincatalogue.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINCATALOGUE_H
#define UI_ADMINCATALOGUE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminCatalogue
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
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
    QPushButton *logout;
    QPushButton *back;
    QFrame *heading;
    QPlainTextEdit *plainTextEdit_2;
    QPlainTextEdit *plainTextEdit_3;
    QPlainTextEdit *plainTextEdit_4;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame_3;
    QFrame *frame_4;
    QFrame *book3;
    QLabel *image3;
    QFrame *frame_60;
    QPlainTextEdit *title3;
    QPlainTextEdit *author3;
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
    QFrame *frame_71;
    QLabel *image4;
    QFrame *frame_72;
    QPlainTextEdit *title4;
    QPlainTextEdit *author4;
    QFrame *book1;
    QLabel *image1;
    QFrame *frame_74;
    QPlainTextEdit *title1;
    QPlainTextEdit *author1;
    QFrame *frame_75;
    QLabel *label_43;
    QFrame *frame_76;
    QPlainTextEdit *plainTextEdit_81;
    QPlainTextEdit *plainTextEdit_82;
    QFrame *book2;
    QLabel *image2;
    QFrame *frame_35;
    QPlainTextEdit *title2;
    QPlainTextEdit *author2;
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

    void setupUi(QMainWindow *AdminCatalogue)
    {
        if (AdminCatalogue->objectName().isEmpty())
            AdminCatalogue->setObjectName("AdminCatalogue");
        AdminCatalogue->resize(1019, 670);
        centralwidget = new QWidget(AdminCatalogue);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
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
        catalogue_1 = new QFrame(menu);
        catalogue_1->setObjectName("catalogue_1");
        catalogue_1->setGeometry(QRect(20, 80, 151, 51));
        catalogue_1->setStyleSheet(QString::fromUtf8("background: rgb(240, 240, 240);\n"
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
        catalogue->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font-size: 14px;\n"
"border: none;"));
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
        label = new QLabel(menu);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 30, 191, 20));
        label->setLayoutDirection(Qt::LeftToRight);
        label->setStyleSheet(QString::fromUtf8("font-weight: bold;\n"
"background: white;\n"
"font-size: 15px;\n"
""));
        label->setAlignment(Qt::AlignCenter);
        logout = new QPushButton(menuPanel);
        logout->setObjectName("logout");
        logout->setGeometry(QRect(30, 600, 71, 31));
        logout->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
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
        scrollArea = new QScrollArea(frame);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(290, 170, 651, 431));
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
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 634, 678));
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
        book3->setGeometry(QRect(309, 9, 143, 210));
        book3->setFrameShape(QFrame::StyledPanel);
        book3->setFrameShadow(QFrame::Raised);
        image3 = new QLabel(book3);
        image3->setObjectName("image3");
        image3->setGeometry(QRect(0, 0, 111, 141));
        image3->setPixmap(QPixmap(QString::fromUtf8(":/images/book-covers/book12.png")));
        image3->setScaledContents(true);
        frame_60 = new QFrame(book3);
        frame_60->setObjectName("frame_60");
        frame_60->setGeometry(QRect(0, 150, 111, 41));
        frame_60->setFrameShape(QFrame::StyledPanel);
        frame_60->setFrameShadow(QFrame::Raised);
        title3 = new QPlainTextEdit(frame_60);
        title3->setObjectName("title3");
        title3->setGeometry(QRect(0, 0, 111, 21));
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
        author3->setGeometry(QRect(0, 20, 104, 21));
        author3->setStyleSheet(QString::fromUtf8("font-family: Baloo 2;\n"
"background: white;"));
        author3->setFrameShape(QFrame::NoFrame);
        author3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        frame_61 = new QFrame(frame_4);
        frame_61->setObjectName("frame_61");
        frame_61->setGeometry(QRect(159, 442, 144, 210));
        frame_61->setFrameShape(QFrame::StyledPanel);
        frame_61->setFrameShadow(QFrame::Raised);
        label_37 = new QLabel(frame_61);
        label_37->setObjectName("label_37");
        label_37->setGeometry(QRect(0, 0, 111, 141));
        label_37->setPixmap(QPixmap(QString::fromUtf8(":/images/book-covers/book15.png")));
        label_37->setScaledContents(true);
        frame_62 = new QFrame(frame_61);
        frame_62->setObjectName("frame_62");
        frame_62->setGeometry(QRect(0, 150, 111, 41));
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
        frame_63 = new QFrame(frame_4);
        frame_63->setObjectName("frame_63");
        frame_63->setGeometry(QRect(9, 225, 144, 211));
        frame_63->setFrameShape(QFrame::StyledPanel);
        frame_63->setFrameShadow(QFrame::Raised);
        label_24 = new QLabel(frame_63);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(0, 0, 111, 141));
        label_24->setPixmap(QPixmap(QString::fromUtf8(":/images/book-covers/book2.png")));
        label_24->setScaledContents(true);
        frame_64 = new QFrame(frame_63);
        frame_64->setObjectName("frame_64");
        frame_64->setGeometry(QRect(0, 150, 111, 41));
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
        frame_65 = new QFrame(frame_4);
        frame_65->setObjectName("frame_65");
        frame_65->setGeometry(QRect(309, 442, 143, 210));
        frame_65->setFrameShape(QFrame::StyledPanel);
        frame_65->setFrameShadow(QFrame::Raised);
        label_38 = new QLabel(frame_65);
        label_38->setObjectName("label_38");
        label_38->setGeometry(QRect(0, 0, 111, 141));
        label_38->setPixmap(QPixmap(QString::fromUtf8(":/images/book-covers/book7.png")));
        label_38->setScaledContents(true);
        frame_66 = new QFrame(frame_65);
        frame_66->setObjectName("frame_66");
        frame_66->setGeometry(QRect(0, 150, 111, 41));
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
        frame_67 = new QFrame(frame_4);
        frame_67->setObjectName("frame_67");
        frame_67->setGeometry(QRect(159, 225, 144, 211));
        frame_67->setFrameShape(QFrame::StyledPanel);
        frame_67->setFrameShadow(QFrame::Raised);
        label_39 = new QLabel(frame_67);
        label_39->setObjectName("label_39");
        label_39->setGeometry(QRect(0, 0, 111, 141));
        label_39->setPixmap(QPixmap(QString::fromUtf8(":/images/book-covers/book13.png")));
        label_39->setScaledContents(true);
        frame_68 = new QFrame(frame_67);
        frame_68->setObjectName("frame_68");
        frame_68->setGeometry(QRect(0, 150, 111, 41));
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
        frame_69 = new QFrame(frame_4);
        frame_69->setObjectName("frame_69");
        frame_69->setGeometry(QRect(458, 442, 144, 210));
        frame_69->setFrameShape(QFrame::StyledPanel);
        frame_69->setFrameShadow(QFrame::Raised);
        label_40 = new QLabel(frame_69);
        label_40->setObjectName("label_40");
        label_40->setGeometry(QRect(0, 0, 111, 141));
        label_40->setPixmap(QPixmap(QString::fromUtf8(":/images/book-covers/book.png")));
        label_40->setScaledContents(true);
        frame_70 = new QFrame(frame_69);
        frame_70->setObjectName("frame_70");
        frame_70->setGeometry(QRect(0, 150, 111, 41));
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
        frame_71 = new QFrame(frame_4);
        frame_71->setObjectName("frame_71");
        frame_71->setGeometry(QRect(458, 9, 144, 210));
        frame_71->setFrameShape(QFrame::StyledPanel);
        frame_71->setFrameShadow(QFrame::Raised);
        image4 = new QLabel(frame_71);
        image4->setObjectName("image4");
        image4->setGeometry(QRect(0, 0, 111, 141));
        image4->setPixmap(QPixmap(QString::fromUtf8(":/images/book-covers/book9.png")));
        image4->setScaledContents(true);
        frame_72 = new QFrame(frame_71);
        frame_72->setObjectName("frame_72");
        frame_72->setGeometry(QRect(0, 150, 111, 41));
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
        book1 = new QFrame(frame_4);
        book1->setObjectName("book1");
        book1->setGeometry(QRect(9, 9, 144, 210));
        book1->setFrameShape(QFrame::StyledPanel);
        book1->setFrameShadow(QFrame::Raised);
        image1 = new QLabel(book1);
        image1->setObjectName("image1");
        image1->setGeometry(QRect(0, 0, 111, 141));
        image1->setPixmap(QPixmap(QString::fromUtf8(":/images/book-covers/book14.png")));
        image1->setScaledContents(true);
        frame_74 = new QFrame(book1);
        frame_74->setObjectName("frame_74");
        frame_74->setGeometry(QRect(0, 140, 111, 51));
        frame_74->setFrameShape(QFrame::StyledPanel);
        frame_74->setFrameShadow(QFrame::Raised);
        title1 = new QPlainTextEdit(frame_74);
        title1->setObjectName("title1");
        title1->setGeometry(QRect(0, 10, 91, 21));
        title1->setStyleSheet(QString::fromUtf8("font-weight: bold;\n"
"font-family: Baloo 2;\n"
"background: white;"));
        title1->setFrameShape(QFrame::NoFrame);
        title1->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        title1->setTabChangesFocus(false);
        title1->setLineWrapMode(QPlainTextEdit::WidgetWidth);
        title1->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        author1 = new QPlainTextEdit(frame_74);
        author1->setObjectName("author1");
        author1->setGeometry(QRect(0, 30, 104, 21));
        author1->setStyleSheet(QString::fromUtf8("font-family: Baloo 2;\n"
"background: white;"));
        author1->setFrameShape(QFrame::NoFrame);
        author1->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        frame_75 = new QFrame(frame_4);
        frame_75->setObjectName("frame_75");
        frame_75->setGeometry(QRect(9, 442, 144, 210));
        frame_75->setFrameShape(QFrame::StyledPanel);
        frame_75->setFrameShadow(QFrame::Raised);
        label_43 = new QLabel(frame_75);
        label_43->setObjectName("label_43");
        label_43->setGeometry(QRect(0, 0, 111, 141));
        label_43->setPixmap(QPixmap(QString::fromUtf8(":/images/book-covers/book16.png")));
        label_43->setScaledContents(true);
        frame_76 = new QFrame(frame_75);
        frame_76->setObjectName("frame_76");
        frame_76->setGeometry(QRect(0, 150, 111, 41));
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
        book2 = new QFrame(frame_4);
        book2->setObjectName("book2");
        book2->setGeometry(QRect(159, 9, 144, 210));
        book2->setFrameShape(QFrame::StyledPanel);
        book2->setFrameShadow(QFrame::Raised);
        image2 = new QLabel(book2);
        image2->setObjectName("image2");
        image2->setGeometry(QRect(0, 0, 111, 141));
        image2->setPixmap(QPixmap(QString::fromUtf8(":/images/book-covers/book11.png")));
        image2->setScaledContents(true);
        frame_35 = new QFrame(book2);
        frame_35->setObjectName("frame_35");
        frame_35->setGeometry(QRect(0, 150, 111, 51));
        frame_35->setFrameShape(QFrame::StyledPanel);
        frame_35->setFrameShadow(QFrame::Raised);
        title2 = new QPlainTextEdit(frame_35);
        title2->setObjectName("title2");
        title2->setGeometry(QRect(0, 0, 91, 21));
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
        author2->setGeometry(QRect(0, 20, 104, 21));
        author2->setStyleSheet(QString::fromUtf8("font-family: Baloo 2;\n"
"background: white;"));
        author2->setFrameShape(QFrame::NoFrame);
        author2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        frame_77 = new QFrame(frame_4);
        frame_77->setObjectName("frame_77");
        frame_77->setGeometry(QRect(458, 225, 144, 211));
        frame_77->setFrameShape(QFrame::StyledPanel);
        frame_77->setFrameShadow(QFrame::Raised);
        label_44 = new QLabel(frame_77);
        label_44->setObjectName("label_44");
        label_44->setGeometry(QRect(0, 0, 111, 141));
        label_44->setPixmap(QPixmap(QString::fromUtf8(":/images/book-covers/book6.png")));
        label_44->setScaledContents(true);
        frame_78 = new QFrame(frame_77);
        frame_78->setObjectName("frame_78");
        frame_78->setGeometry(QRect(0, 150, 111, 41));
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
        frame_79 = new QFrame(frame_4);
        frame_79->setObjectName("frame_79");
        frame_79->setGeometry(QRect(309, 225, 143, 211));
        frame_79->setFrameShape(QFrame::StyledPanel);
        frame_79->setFrameShadow(QFrame::Raised);
        label_45 = new QLabel(frame_79);
        label_45->setObjectName("label_45");
        label_45->setGeometry(QRect(0, 0, 111, 141));
        label_45->setPixmap(QPixmap(QString::fromUtf8(":/images/book-covers/book10.png")));
        label_45->setScaledContents(true);
        frame_80 = new QFrame(frame_79);
        frame_80->setObjectName("frame_80");
        frame_80->setGeometry(QRect(0, 150, 111, 41));
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

        verticalLayout_3->addWidget(frame_3);

        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout->addWidget(frame);

        AdminCatalogue->setCentralWidget(centralwidget);

        retranslateUi(AdminCatalogue);

        QMetaObject::connectSlotsByName(AdminCatalogue);
    } // setupUi

    void retranslateUi(QMainWindow *AdminCatalogue)
    {
        AdminCatalogue->setWindowTitle(QCoreApplication::translate("AdminCatalogue", "MainWindow", nullptr));
        menuPanel->setTitle(QString());
        logo->setText(QString());
        label_5->setText(QString());
        catalogue->setText(QCoreApplication::translate("AdminCatalogue", "Catalogue", nullptr));
        label_6->setText(QString());
        manageBooks->setText(QCoreApplication::translate("AdminCatalogue", "Manage Books", nullptr));
        label_7->setText(QString());
        status->setText(QCoreApplication::translate("AdminCatalogue", "View Status", nullptr));
        label_8->setText(QString());
        membership->setText(QCoreApplication::translate("AdminCatalogue", "Membership", nullptr));
        label->setText(QCoreApplication::translate("AdminCatalogue", "Admin Menu", nullptr));
        logout->setText(QCoreApplication::translate("AdminCatalogue", "Logout", nullptr));
        back->setText(QCoreApplication::translate("AdminCatalogue", "Back", nullptr));
        plainTextEdit_2->setPlainText(QString());
        plainTextEdit_3->setPlainText(QCoreApplication::translate("AdminCatalogue", "View the Catalogue", nullptr));
        plainTextEdit_4->setPlainText(QCoreApplication::translate("AdminCatalogue", "Here you can browse for books currently in the system", nullptr));
        image3->setText(QString());
        title3->setPlainText(QCoreApplication::translate("AdminCatalogue", "Embrace The Wild", nullptr));
        author3->setPlainText(QCoreApplication::translate("AdminCatalogue", "Kylan Gentry", nullptr));
        label_37->setText(QString());
        plainTextEdit_69->setPlainText(QCoreApplication::translate("AdminCatalogue", "Learn & Play", nullptr));
        plainTextEdit_70->setPlainText(QCoreApplication::translate("AdminCatalogue", "John Glover", nullptr));
        label_24->setText(QString());
        plainTextEdit_43->setPlainText(QCoreApplication::translate("AdminCatalogue", "The Bike Guy", nullptr));
        plainTextEdit_44->setPlainText(QCoreApplication::translate("AdminCatalogue", "Mia Gas", nullptr));
        label_38->setText(QString());
        plainTextEdit_71->setPlainText(QCoreApplication::translate("AdminCatalogue", "How To Skip", nullptr));
        plainTextEdit_72->setPlainText(QCoreApplication::translate("AdminCatalogue", "Tatiana McGregor", nullptr));
        label_39->setText(QString());
        plainTextEdit_73->setPlainText(QCoreApplication::translate("AdminCatalogue", "We Are Business", nullptr));
        plainTextEdit_74->setPlainText(QCoreApplication::translate("AdminCatalogue", "Julies Maldover", nullptr));
        label_40->setText(QString());
        plainTextEdit_75->setPlainText(QCoreApplication::translate("AdminCatalogue", "The Orange Book", nullptr));
        plainTextEdit_76->setPlainText(QCoreApplication::translate("AdminCatalogue", "Marceline Avila", nullptr));
        image4->setText(QString());
        title4->setPlainText(QCoreApplication::translate("AdminCatalogue", "Atomic Love", nullptr));
        author4->setPlainText(QCoreApplication::translate("AdminCatalogue", "Bowen Higgins", nullptr));
        image1->setText(QString());
        title1->setPlainText(QCoreApplication::translate("AdminCatalogue", "Great Lakes", nullptr));
        author1->setPlainText(QCoreApplication::translate("AdminCatalogue", "Peter Jackson", nullptr));
        label_43->setText(QString());
        plainTextEdit_81->setPlainText(QCoreApplication::translate("AdminCatalogue", "Comic Book", nullptr));
        plainTextEdit_82->setPlainText(QCoreApplication::translate("AdminCatalogue", "Kane Dyer", nullptr));
        image2->setText(QString());
        title2->setPlainText(QCoreApplication::translate("AdminCatalogue", "A Love Story", nullptr));
        author2->setPlainText(QCoreApplication::translate("AdminCatalogue", "Franklin Sierra", nullptr));
        label_44->setText(QString());
        plainTextEdit_83->setPlainText(QCoreApplication::translate("AdminCatalogue", "Cheesecakes", nullptr));
        plainTextEdit_84->setPlainText(QCoreApplication::translate("AdminCatalogue", "Tim Smith", nullptr));
        label_45->setText(QString());
        plainTextEdit_85->setPlainText(QCoreApplication::translate("AdminCatalogue", "Snow At Sunset", nullptr));
        plainTextEdit_86->setPlainText(QCoreApplication::translate("AdminCatalogue", "Samantha Dee", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminCatalogue: public Ui_AdminCatalogue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINCATALOGUE_H
