/********************************************************************************
** Form generated from reading UI file 'membercatalogue.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMBERCATALOGUE_H
#define UI_MEMBERCATALOGUE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MemberCatalogue
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
    QPushButton *back;
    QPushButton *logout;
    QFrame *heading;
    QPlainTextEdit *plainTextEdit_2;
    QPlainTextEdit *plainTextEdit_3;
    QPlainTextEdit *plainTextEdit_4;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame_3;
    QFrame *frame_4;
    QFrame *frame_59;
    QLabel *labelThree;
    QFrame *frame_60;
    QPlainTextEdit *titleThree;
    QPlainTextEdit *authorThree;
    QFrame *frame_61;
    QLabel *labelTen;
    QFrame *frame_62;
    QPlainTextEdit *titleTen;
    QPlainTextEdit *authorTen;
    QFrame *frame_63;
    QLabel *labelFive;
    QFrame *frame_64;
    QPlainTextEdit *titleFive;
    QPlainTextEdit *authorFive;
    QFrame *frame_65;
    QLabel *labelEleven;
    QFrame *frame_66;
    QPlainTextEdit *titleEleven;
    QPlainTextEdit *authorEleven;
    QFrame *frame_67;
    QLabel *labelSix;
    QFrame *frame_68;
    QPlainTextEdit *titleSix;
    QPlainTextEdit *authorSix;
    QFrame *frame_69;
    QLabel *labelTwelfe;
    QFrame *frame_70;
    QPlainTextEdit *titleTwelfe;
    QPlainTextEdit *authorTwelfe;
    QFrame *frame_71;
    QLabel *labelFour;
    QFrame *frame_72;
    QPlainTextEdit *titleFour;
    QPlainTextEdit *authorFour;
    QFrame *frame_73;
    QLabel *labelOne;
    QFrame *frame_74;
    QPlainTextEdit *titleOne;
    QPlainTextEdit *authorOne;
    QFrame *frame_75;
    QLabel *labelNine;
    QFrame *frame_76;
    QPlainTextEdit *titleNine;
    QPlainTextEdit *authorNine;
    QFrame *frame_33;
    QLabel *labelTwo;
    QFrame *frame_35;
    QPlainTextEdit *titleTwo;
    QPlainTextEdit *authorTwo;
    QFrame *frame_77;
    QLabel *labelEight;
    QFrame *frame_78;
    QPlainTextEdit *titleEight;
    QPlainTextEdit *authorEight;
    QFrame *frame_79;
    QLabel *labelSeven;
    QFrame *frame_80;
    QPlainTextEdit *titleSeven;
    QPlainTextEdit *authorSeven;
    QFrame *frame_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QPlainTextEdit *plainTextEdit;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QLineEdit *lineEdit_title;
    QLabel *label_9;
    QLineEdit *lineEdit_author;
    QPushButton *pushButton;

    void setupUi(QMainWindow *MemberCatalogue)
    {
        if (MemberCatalogue->objectName().isEmpty())
            MemberCatalogue->setObjectName("MemberCatalogue");
        MemberCatalogue->resize(1019, 670);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MemberCatalogue->sizePolicy().hasHeightForWidth());
        MemberCatalogue->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(MemberCatalogue);
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
        manageBooks_1->setStyleSheet(QString::fromUtf8("background: white;"));
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
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
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
        heading->setGeometry(QRect(300, 0, 641, 121));
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
        plainTextEdit_3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit_3->setReadOnly(true);
        plainTextEdit_4 = new QPlainTextEdit(heading);
        plainTextEdit_4->setObjectName("plainTextEdit_4");
        plainTextEdit_4->setGeometry(QRect(30, 70, 411, 31));
        plainTextEdit_4->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font-family: Baloo 2;\n"
"font-size: 13px;"));
        plainTextEdit_4->setFrameShape(QFrame::NoFrame);
        plainTextEdit_4->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit_4->setReadOnly(true);
        scrollArea = new QScrollArea(frame);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(290, 140, 651, 221));
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
        frame_59 = new QFrame(frame_4);
        frame_59->setObjectName("frame_59");
        frame_59->setGeometry(QRect(309, 9, 143, 210));
        frame_59->setFrameShape(QFrame::StyledPanel);
        frame_59->setFrameShadow(QFrame::Raised);
        labelThree = new QLabel(frame_59);
        labelThree->setObjectName("labelThree");
        labelThree->setGeometry(QRect(0, 0, 111, 141));
        labelThree->setPixmap(QPixmap(QString::fromUtf8(":/images/book-covers/book12.png")));
        labelThree->setScaledContents(true);
        frame_60 = new QFrame(frame_59);
        frame_60->setObjectName("frame_60");
        frame_60->setGeometry(QRect(0, 150, 111, 41));
        frame_60->setFrameShape(QFrame::StyledPanel);
        frame_60->setFrameShadow(QFrame::Raised);
        titleThree = new QPlainTextEdit(frame_60);
        titleThree->setObjectName("titleThree");
        titleThree->setGeometry(QRect(0, 0, 111, 21));
        titleThree->setStyleSheet(QString::fromUtf8("font-weight: bold;\n"
"font-family: Baloo 2;\n"
"background: white;"));
        titleThree->setFrameShape(QFrame::NoFrame);
        titleThree->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        titleThree->setTabChangesFocus(false);
        titleThree->setLineWrapMode(QPlainTextEdit::WidgetWidth);
        titleThree->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        authorThree = new QPlainTextEdit(frame_60);
        authorThree->setObjectName("authorThree");
        authorThree->setGeometry(QRect(0, 20, 104, 21));
        authorThree->setStyleSheet(QString::fromUtf8("font-family: Baloo 2;\n"
"background: white;"));
        authorThree->setFrameShape(QFrame::NoFrame);
        authorThree->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        frame_61 = new QFrame(frame_4);
        frame_61->setObjectName("frame_61");
        frame_61->setGeometry(QRect(159, 442, 144, 210));
        frame_61->setFrameShape(QFrame::StyledPanel);
        frame_61->setFrameShadow(QFrame::Raised);
        labelTen = new QLabel(frame_61);
        labelTen->setObjectName("labelTen");
        labelTen->setGeometry(QRect(0, 0, 111, 141));
        labelTen->setPixmap(QPixmap(QString::fromUtf8(":/images/book-covers/book15.png")));
        labelTen->setScaledContents(true);
        frame_62 = new QFrame(frame_61);
        frame_62->setObjectName("frame_62");
        frame_62->setGeometry(QRect(0, 150, 111, 41));
        frame_62->setFrameShape(QFrame::StyledPanel);
        frame_62->setFrameShadow(QFrame::Raised);
        titleTen = new QPlainTextEdit(frame_62);
        titleTen->setObjectName("titleTen");
        titleTen->setGeometry(QRect(0, 0, 91, 21));
        titleTen->setStyleSheet(QString::fromUtf8("font-weight: bold;\n"
"font-family: Baloo 2;\n"
"background: white;"));
        titleTen->setFrameShape(QFrame::NoFrame);
        titleTen->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        titleTen->setTabChangesFocus(false);
        titleTen->setLineWrapMode(QPlainTextEdit::WidgetWidth);
        titleTen->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        authorTen = new QPlainTextEdit(frame_62);
        authorTen->setObjectName("authorTen");
        authorTen->setGeometry(QRect(0, 20, 104, 21));
        authorTen->setStyleSheet(QString::fromUtf8("font-family: Baloo 2;\n"
"background: white;"));
        authorTen->setFrameShape(QFrame::NoFrame);
        authorTen->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        frame_63 = new QFrame(frame_4);
        frame_63->setObjectName("frame_63");
        frame_63->setGeometry(QRect(9, 225, 144, 211));
        frame_63->setFrameShape(QFrame::StyledPanel);
        frame_63->setFrameShadow(QFrame::Raised);
        labelFive = new QLabel(frame_63);
        labelFive->setObjectName("labelFive");
        labelFive->setGeometry(QRect(0, 0, 111, 141));
        labelFive->setPixmap(QPixmap(QString::fromUtf8(":/images/book-covers/book2.png")));
        labelFive->setScaledContents(true);
        frame_64 = new QFrame(frame_63);
        frame_64->setObjectName("frame_64");
        frame_64->setGeometry(QRect(0, 150, 111, 41));
        frame_64->setFrameShape(QFrame::StyledPanel);
        frame_64->setFrameShadow(QFrame::Raised);
        titleFive = new QPlainTextEdit(frame_64);
        titleFive->setObjectName("titleFive");
        titleFive->setGeometry(QRect(0, 0, 91, 21));
        titleFive->setStyleSheet(QString::fromUtf8("font-weight: bold;\n"
"font-family: Baloo 2;\n"
"background: white;"));
        titleFive->setFrameShape(QFrame::NoFrame);
        titleFive->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        titleFive->setTabChangesFocus(false);
        titleFive->setLineWrapMode(QPlainTextEdit::WidgetWidth);
        titleFive->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        authorFive = new QPlainTextEdit(frame_64);
        authorFive->setObjectName("authorFive");
        authorFive->setGeometry(QRect(0, 20, 104, 21));
        authorFive->setStyleSheet(QString::fromUtf8("font-family: Baloo 2;\n"
"background: white;"));
        authorFive->setFrameShape(QFrame::NoFrame);
        authorFive->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        frame_65 = new QFrame(frame_4);
        frame_65->setObjectName("frame_65");
        frame_65->setGeometry(QRect(309, 442, 143, 210));
        frame_65->setFrameShape(QFrame::StyledPanel);
        frame_65->setFrameShadow(QFrame::Raised);
        labelEleven = new QLabel(frame_65);
        labelEleven->setObjectName("labelEleven");
        labelEleven->setGeometry(QRect(0, 0, 111, 141));
        labelEleven->setPixmap(QPixmap(QString::fromUtf8(":/images/book-covers/book7.png")));
        labelEleven->setScaledContents(true);
        frame_66 = new QFrame(frame_65);
        frame_66->setObjectName("frame_66");
        frame_66->setGeometry(QRect(0, 150, 111, 41));
        frame_66->setFrameShape(QFrame::StyledPanel);
        frame_66->setFrameShadow(QFrame::Raised);
        titleEleven = new QPlainTextEdit(frame_66);
        titleEleven->setObjectName("titleEleven");
        titleEleven->setGeometry(QRect(0, 0, 91, 21));
        titleEleven->setStyleSheet(QString::fromUtf8("font-weight: bold;\n"
"font-family: Baloo 2;\n"
"background: white;"));
        titleEleven->setFrameShape(QFrame::NoFrame);
        titleEleven->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        titleEleven->setTabChangesFocus(false);
        titleEleven->setLineWrapMode(QPlainTextEdit::WidgetWidth);
        titleEleven->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        authorEleven = new QPlainTextEdit(frame_66);
        authorEleven->setObjectName("authorEleven");
        authorEleven->setGeometry(QRect(0, 20, 104, 21));
        authorEleven->setStyleSheet(QString::fromUtf8("font-family: Baloo 2;\n"
"background: white;"));
        authorEleven->setFrameShape(QFrame::NoFrame);
        authorEleven->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        frame_67 = new QFrame(frame_4);
        frame_67->setObjectName("frame_67");
        frame_67->setGeometry(QRect(159, 225, 144, 211));
        frame_67->setFrameShape(QFrame::StyledPanel);
        frame_67->setFrameShadow(QFrame::Raised);
        labelSix = new QLabel(frame_67);
        labelSix->setObjectName("labelSix");
        labelSix->setGeometry(QRect(0, 0, 111, 141));
        labelSix->setPixmap(QPixmap(QString::fromUtf8(":/images/book-covers/book13.png")));
        labelSix->setScaledContents(true);
        frame_68 = new QFrame(frame_67);
        frame_68->setObjectName("frame_68");
        frame_68->setGeometry(QRect(0, 150, 111, 41));
        frame_68->setFrameShape(QFrame::StyledPanel);
        frame_68->setFrameShadow(QFrame::Raised);
        titleSix = new QPlainTextEdit(frame_68);
        titleSix->setObjectName("titleSix");
        titleSix->setGeometry(QRect(0, 0, 111, 21));
        titleSix->setStyleSheet(QString::fromUtf8("font-weight: bold;\n"
"font-family: Baloo 2;\n"
"background: white;"));
        titleSix->setFrameShape(QFrame::NoFrame);
        titleSix->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        titleSix->setTabChangesFocus(false);
        titleSix->setLineWrapMode(QPlainTextEdit::WidgetWidth);
        titleSix->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        authorSix = new QPlainTextEdit(frame_68);
        authorSix->setObjectName("authorSix");
        authorSix->setGeometry(QRect(0, 20, 104, 21));
        authorSix->setStyleSheet(QString::fromUtf8("font-family: Baloo 2;\n"
"background: white;"));
        authorSix->setFrameShape(QFrame::NoFrame);
        authorSix->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        frame_69 = new QFrame(frame_4);
        frame_69->setObjectName("frame_69");
        frame_69->setGeometry(QRect(458, 442, 144, 210));
        frame_69->setFrameShape(QFrame::StyledPanel);
        frame_69->setFrameShadow(QFrame::Raised);
        labelTwelfe = new QLabel(frame_69);
        labelTwelfe->setObjectName("labelTwelfe");
        labelTwelfe->setGeometry(QRect(0, 0, 111, 141));
        labelTwelfe->setPixmap(QPixmap(QString::fromUtf8(":/images/book-covers/book.png")));
        labelTwelfe->setScaledContents(true);
        frame_70 = new QFrame(frame_69);
        frame_70->setObjectName("frame_70");
        frame_70->setGeometry(QRect(0, 150, 111, 41));
        frame_70->setFrameShape(QFrame::StyledPanel);
        frame_70->setFrameShadow(QFrame::Raised);
        titleTwelfe = new QPlainTextEdit(frame_70);
        titleTwelfe->setObjectName("titleTwelfe");
        titleTwelfe->setGeometry(QRect(0, 0, 91, 21));
        titleTwelfe->setStyleSheet(QString::fromUtf8("font-weight: bold;\n"
"font-family: Baloo 2;\n"
"background: white;"));
        titleTwelfe->setFrameShape(QFrame::NoFrame);
        titleTwelfe->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        titleTwelfe->setTabChangesFocus(false);
        titleTwelfe->setLineWrapMode(QPlainTextEdit::WidgetWidth);
        titleTwelfe->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        authorTwelfe = new QPlainTextEdit(frame_70);
        authorTwelfe->setObjectName("authorTwelfe");
        authorTwelfe->setGeometry(QRect(0, 20, 104, 21));
        authorTwelfe->setStyleSheet(QString::fromUtf8("font-family: Baloo 2;\n"
"background: white;"));
        authorTwelfe->setFrameShape(QFrame::NoFrame);
        authorTwelfe->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        frame_71 = new QFrame(frame_4);
        frame_71->setObjectName("frame_71");
        frame_71->setGeometry(QRect(458, 9, 144, 210));
        frame_71->setFrameShape(QFrame::StyledPanel);
        frame_71->setFrameShadow(QFrame::Raised);
        labelFour = new QLabel(frame_71);
        labelFour->setObjectName("labelFour");
        labelFour->setGeometry(QRect(0, 0, 111, 141));
        labelFour->setPixmap(QPixmap(QString::fromUtf8(":/images/book-covers/book9.png")));
        labelFour->setScaledContents(true);
        frame_72 = new QFrame(frame_71);
        frame_72->setObjectName("frame_72");
        frame_72->setGeometry(QRect(0, 150, 111, 41));
        frame_72->setFrameShape(QFrame::StyledPanel);
        frame_72->setFrameShadow(QFrame::Raised);
        titleFour = new QPlainTextEdit(frame_72);
        titleFour->setObjectName("titleFour");
        titleFour->setGeometry(QRect(0, 0, 91, 21));
        titleFour->setStyleSheet(QString::fromUtf8("font-weight: bold;\n"
"font-family: Baloo 2;\n"
"background: white;"));
        titleFour->setFrameShape(QFrame::NoFrame);
        titleFour->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        titleFour->setTabChangesFocus(false);
        titleFour->setLineWrapMode(QPlainTextEdit::WidgetWidth);
        titleFour->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        authorFour = new QPlainTextEdit(frame_72);
        authorFour->setObjectName("authorFour");
        authorFour->setGeometry(QRect(0, 20, 104, 21));
        authorFour->setStyleSheet(QString::fromUtf8("font-family: Baloo 2;\n"
"background: white;"));
        authorFour->setFrameShape(QFrame::NoFrame);
        authorFour->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        frame_73 = new QFrame(frame_4);
        frame_73->setObjectName("frame_73");
        frame_73->setGeometry(QRect(9, 9, 144, 210));
        frame_73->setFrameShape(QFrame::StyledPanel);
        frame_73->setFrameShadow(QFrame::Raised);
        labelOne = new QLabel(frame_73);
        labelOne->setObjectName("labelOne");
        labelOne->setGeometry(QRect(0, 0, 111, 141));
        labelOne->setPixmap(QPixmap(QString::fromUtf8(":/images/book-covers/book14.png")));
        labelOne->setScaledContents(true);
        frame_74 = new QFrame(frame_73);
        frame_74->setObjectName("frame_74");
        frame_74->setGeometry(QRect(0, 140, 141, 51));
        frame_74->setFrameShape(QFrame::StyledPanel);
        frame_74->setFrameShadow(QFrame::Raised);
        titleOne = new QPlainTextEdit(frame_74);
        titleOne->setObjectName("titleOne");
        titleOne->setGeometry(QRect(0, 10, 141, 21));
        titleOne->setStyleSheet(QString::fromUtf8("font-weight: bold;\n"
"font-family: Baloo 2;\n"
"background: white;"));
        titleOne->setFrameShape(QFrame::NoFrame);
        titleOne->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        titleOne->setTabChangesFocus(false);
        titleOne->setLineWrapMode(QPlainTextEdit::WidgetWidth);
        titleOne->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        authorOne = new QPlainTextEdit(frame_74);
        authorOne->setObjectName("authorOne");
        authorOne->setGeometry(QRect(0, 30, 141, 21));
        authorOne->setStyleSheet(QString::fromUtf8("font-family: Baloo 2;\n"
"background: white;"));
        authorOne->setFrameShape(QFrame::NoFrame);
        authorOne->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        frame_75 = new QFrame(frame_4);
        frame_75->setObjectName("frame_75");
        frame_75->setGeometry(QRect(9, 442, 144, 210));
        frame_75->setFrameShape(QFrame::StyledPanel);
        frame_75->setFrameShadow(QFrame::Raised);
        labelNine = new QLabel(frame_75);
        labelNine->setObjectName("labelNine");
        labelNine->setGeometry(QRect(0, 0, 111, 141));
        labelNine->setPixmap(QPixmap(QString::fromUtf8(":/images/book-covers/book16.png")));
        labelNine->setScaledContents(true);
        frame_76 = new QFrame(frame_75);
        frame_76->setObjectName("frame_76");
        frame_76->setGeometry(QRect(0, 150, 111, 41));
        frame_76->setFrameShape(QFrame::StyledPanel);
        frame_76->setFrameShadow(QFrame::Raised);
        titleNine = new QPlainTextEdit(frame_76);
        titleNine->setObjectName("titleNine");
        titleNine->setGeometry(QRect(0, 0, 91, 21));
        titleNine->setStyleSheet(QString::fromUtf8("font-weight: bold;\n"
"font-family: Baloo 2;\n"
"background: white;"));
        titleNine->setFrameShape(QFrame::NoFrame);
        titleNine->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        titleNine->setTabChangesFocus(false);
        titleNine->setLineWrapMode(QPlainTextEdit::WidgetWidth);
        titleNine->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        authorNine = new QPlainTextEdit(frame_76);
        authorNine->setObjectName("authorNine");
        authorNine->setGeometry(QRect(0, 20, 104, 21));
        authorNine->setStyleSheet(QString::fromUtf8("font-family: Baloo 2;\n"
"background: white;"));
        authorNine->setFrameShape(QFrame::NoFrame);
        authorNine->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        frame_33 = new QFrame(frame_4);
        frame_33->setObjectName("frame_33");
        frame_33->setGeometry(QRect(159, 9, 144, 210));
        frame_33->setFrameShape(QFrame::StyledPanel);
        frame_33->setFrameShadow(QFrame::Raised);
        labelTwo = new QLabel(frame_33);
        labelTwo->setObjectName("labelTwo");
        labelTwo->setGeometry(QRect(0, 0, 111, 141));
        labelTwo->setPixmap(QPixmap(QString::fromUtf8(":/images/book-covers/book11.png")));
        labelTwo->setScaledContents(true);
        frame_35 = new QFrame(frame_33);
        frame_35->setObjectName("frame_35");
        frame_35->setGeometry(QRect(0, 150, 111, 51));
        frame_35->setFrameShape(QFrame::StyledPanel);
        frame_35->setFrameShadow(QFrame::Raised);
        titleTwo = new QPlainTextEdit(frame_35);
        titleTwo->setObjectName("titleTwo");
        titleTwo->setGeometry(QRect(0, 0, 91, 21));
        titleTwo->setStyleSheet(QString::fromUtf8("font-weight: bold;\n"
"font-family: Baloo 2;\n"
"background: white;"));
        titleTwo->setFrameShape(QFrame::NoFrame);
        titleTwo->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        titleTwo->setTabChangesFocus(false);
        titleTwo->setLineWrapMode(QPlainTextEdit::WidgetWidth);
        titleTwo->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        authorTwo = new QPlainTextEdit(frame_35);
        authorTwo->setObjectName("authorTwo");
        authorTwo->setGeometry(QRect(0, 20, 104, 21));
        authorTwo->setStyleSheet(QString::fromUtf8("font-family: Baloo 2;\n"
"background: white;"));
        authorTwo->setFrameShape(QFrame::NoFrame);
        authorTwo->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        frame_77 = new QFrame(frame_4);
        frame_77->setObjectName("frame_77");
        frame_77->setGeometry(QRect(458, 225, 144, 211));
        frame_77->setFrameShape(QFrame::StyledPanel);
        frame_77->setFrameShadow(QFrame::Raised);
        labelEight = new QLabel(frame_77);
        labelEight->setObjectName("labelEight");
        labelEight->setGeometry(QRect(0, 0, 111, 141));
        labelEight->setPixmap(QPixmap(QString::fromUtf8(":/images/book-covers/book6.png")));
        labelEight->setScaledContents(true);
        frame_78 = new QFrame(frame_77);
        frame_78->setObjectName("frame_78");
        frame_78->setGeometry(QRect(0, 150, 111, 41));
        frame_78->setFrameShape(QFrame::StyledPanel);
        frame_78->setFrameShadow(QFrame::Raised);
        titleEight = new QPlainTextEdit(frame_78);
        titleEight->setObjectName("titleEight");
        titleEight->setGeometry(QRect(0, 0, 91, 21));
        titleEight->setStyleSheet(QString::fromUtf8("font-weight: bold;\n"
"font-family: Baloo 2;\n"
"background: white;"));
        titleEight->setFrameShape(QFrame::NoFrame);
        titleEight->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        titleEight->setTabChangesFocus(false);
        titleEight->setLineWrapMode(QPlainTextEdit::WidgetWidth);
        titleEight->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        authorEight = new QPlainTextEdit(frame_78);
        authorEight->setObjectName("authorEight");
        authorEight->setGeometry(QRect(0, 20, 104, 21));
        authorEight->setStyleSheet(QString::fromUtf8("font-family: Baloo 2;\n"
"background: white;"));
        authorEight->setFrameShape(QFrame::NoFrame);
        authorEight->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        frame_79 = new QFrame(frame_4);
        frame_79->setObjectName("frame_79");
        frame_79->setGeometry(QRect(309, 225, 143, 211));
        frame_79->setFrameShape(QFrame::StyledPanel);
        frame_79->setFrameShadow(QFrame::Raised);
        labelSeven = new QLabel(frame_79);
        labelSeven->setObjectName("labelSeven");
        labelSeven->setGeometry(QRect(0, 0, 111, 141));
        labelSeven->setPixmap(QPixmap(QString::fromUtf8(":/images/book-covers/book10.png")));
        labelSeven->setScaledContents(true);
        frame_80 = new QFrame(frame_79);
        frame_80->setObjectName("frame_80");
        frame_80->setGeometry(QRect(0, 150, 111, 41));
        frame_80->setFrameShape(QFrame::StyledPanel);
        frame_80->setFrameShadow(QFrame::Raised);
        titleSeven = new QPlainTextEdit(frame_80);
        titleSeven->setObjectName("titleSeven");
        titleSeven->setGeometry(QRect(0, 0, 111, 21));
        titleSeven->setStyleSheet(QString::fromUtf8("font-weight: bold;\n"
"font-family: Baloo 2;\n"
"background: white;"));
        titleSeven->setFrameShape(QFrame::NoFrame);
        titleSeven->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        titleSeven->setTabChangesFocus(false);
        titleSeven->setLineWrapMode(QPlainTextEdit::WidgetWidth);
        titleSeven->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        authorSeven = new QPlainTextEdit(frame_80);
        authorSeven->setObjectName("authorSeven");
        authorSeven->setGeometry(QRect(0, 20, 104, 21));
        authorSeven->setStyleSheet(QString::fromUtf8("font-family: Baloo 2;\n"
"background: white;"));
        authorSeven->setFrameShape(QFrame::NoFrame);
        authorSeven->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        verticalLayout_3->addWidget(frame_3);

        scrollArea->setWidget(scrollAreaWidgetContents);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(260, 380, 701, 241));
        frame_2->setStyleSheet(QString::fromUtf8("background: rgb(220, 245, 255);\n"
"border-radius: 10px;\n"
"border-color: black;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(frame_2);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 10, 691, 219));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        plainTextEdit = new QPlainTextEdit(layoutWidget);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setStyleSheet(QString::fromUtf8("font-family: Baloo 2;\n"
"font-weight: bold;\n"
"font-size: 23px;\n"
"background: transparent;"));

        horizontalLayout_2->addWidget(plainTextEdit);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("font-family: Baloo 2;\n"
"font-size: 17px;\n"
"font-weight: bold;"));

        verticalLayout->addWidget(label_4);

        lineEdit_title = new QLineEdit(layoutWidget);
        lineEdit_title->setObjectName("lineEdit_title");
        lineEdit_title->setStyleSheet(QString::fromUtf8("border: 0.5px solid black;\n"
"border-radius: 5px;\n"
"background: rgb(235, 235, 235);"));

        verticalLayout->addWidget(lineEdit_title);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName("label_9");
        label_9->setStyleSheet(QString::fromUtf8("font-family: Baloo 2;\n"
"font-size: 17px;\n"
"font-weight: bold;"));

        verticalLayout->addWidget(label_9);

        lineEdit_author = new QLineEdit(layoutWidget);
        lineEdit_author->setObjectName("lineEdit_author");
        lineEdit_author->setStyleSheet(QString::fromUtf8("border: 0.5px solid black;\n"
"border-radius: 5px;\n"
"background: rgb(235, 235, 235);"));

        verticalLayout->addWidget(lineEdit_author);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_4->addLayout(horizontalLayout_2);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background: rgb(235, 235, 235);\n"
"border-radius: 10px;\n"
"font-size: 14px;\n"
"font-family: open sans;\n"
"color: black;\n"
"font-weight: bold;\n"
"}\n"
"\n"
"\n"
"QPushButton:hover \n"
"{\n"
"	color: rgb(106, 146, 255);\n"
"}"));

        verticalLayout_4->addWidget(pushButton);


        horizontalLayout->addWidget(frame);

        MemberCatalogue->setCentralWidget(centralwidget);

        retranslateUi(MemberCatalogue);

        QMetaObject::connectSlotsByName(MemberCatalogue);
    } // setupUi

    void retranslateUi(QMainWindow *MemberCatalogue)
    {
        MemberCatalogue->setWindowTitle(QCoreApplication::translate("MemberCatalogue", "MainWindow", nullptr));
        menuPanel->setTitle(QString());
        logo->setText(QString());
        label_5->setText(QString());
        catalogue->setText(QCoreApplication::translate("MemberCatalogue", "Catalogue", nullptr));
        label_6->setText(QString());
        manageBooks->setText(QCoreApplication::translate("MemberCatalogue", "Overdue", nullptr));
        label_7->setText(QString());
        status->setText(QCoreApplication::translate("MemberCatalogue", "Pre-Booked", nullptr));
        label_8->setText(QString());
        membership->setText(QCoreApplication::translate("MemberCatalogue", "Membership", nullptr));
        label->setText(QCoreApplication::translate("MemberCatalogue", "Member Menu", nullptr));
        back->setText(QCoreApplication::translate("MemberCatalogue", "Back", nullptr));
        logout->setText(QCoreApplication::translate("MemberCatalogue", "Logout", nullptr));
        plainTextEdit_2->setPlainText(QString());
        plainTextEdit_3->setPlainText(QCoreApplication::translate("MemberCatalogue", "View the Catalogue", nullptr));
        plainTextEdit_4->setPlainText(QCoreApplication::translate("MemberCatalogue", "Here you can browse for books currently in the system", nullptr));
        labelThree->setText(QString());
        titleThree->setPlainText(QCoreApplication::translate("MemberCatalogue", "Embrace The Wild", nullptr));
        authorThree->setPlainText(QCoreApplication::translate("MemberCatalogue", "Kylan Gentry", nullptr));
        labelTen->setText(QString());
        titleTen->setPlainText(QCoreApplication::translate("MemberCatalogue", "Learn & Play", nullptr));
        authorTen->setPlainText(QCoreApplication::translate("MemberCatalogue", "John Glover", nullptr));
        labelFive->setText(QString());
        titleFive->setPlainText(QCoreApplication::translate("MemberCatalogue", "The Bike Guy", nullptr));
        authorFive->setPlainText(QCoreApplication::translate("MemberCatalogue", "Mia Gas", nullptr));
        labelEleven->setText(QString());
        titleEleven->setPlainText(QCoreApplication::translate("MemberCatalogue", "How To Skip", nullptr));
        authorEleven->setPlainText(QCoreApplication::translate("MemberCatalogue", "Tatiana McGregor", nullptr));
        labelSix->setText(QString());
        titleSix->setPlainText(QCoreApplication::translate("MemberCatalogue", "We Are Business", nullptr));
        authorSix->setPlainText(QCoreApplication::translate("MemberCatalogue", "Julies Maldover", nullptr));
        labelTwelfe->setText(QString());
        titleTwelfe->setPlainText(QCoreApplication::translate("MemberCatalogue", "The Orange Book", nullptr));
        authorTwelfe->setPlainText(QCoreApplication::translate("MemberCatalogue", "Marceline Avila", nullptr));
        labelFour->setText(QString());
        titleFour->setPlainText(QCoreApplication::translate("MemberCatalogue", "Atomic Love", nullptr));
        authorFour->setPlainText(QCoreApplication::translate("MemberCatalogue", "Bowen Higgins", nullptr));
        labelOne->setText(QString());
        titleOne->setPlainText(QCoreApplication::translate("MemberCatalogue", "Winds of Change", nullptr));
        authorOne->setPlainText(QCoreApplication::translate("MemberCatalogue", "Susan Jackson", nullptr));
        labelNine->setText(QString());
        titleNine->setPlainText(QCoreApplication::translate("MemberCatalogue", "Comic Book", nullptr));
        authorNine->setPlainText(QCoreApplication::translate("MemberCatalogue", "Kane Dyer", nullptr));
        labelTwo->setText(QString());
        titleTwo->setPlainText(QCoreApplication::translate("MemberCatalogue", "A Love Story", nullptr));
        authorTwo->setPlainText(QCoreApplication::translate("MemberCatalogue", "Franklin Sierra", nullptr));
        labelEight->setText(QString());
        titleEight->setPlainText(QCoreApplication::translate("MemberCatalogue", "Cheesecakes", nullptr));
        authorEight->setPlainText(QCoreApplication::translate("MemberCatalogue", "Tim Smith", nullptr));
        labelSeven->setText(QString());
        titleSeven->setPlainText(QCoreApplication::translate("MemberCatalogue", "Snow At Sunset", nullptr));
        authorSeven->setPlainText(QCoreApplication::translate("MemberCatalogue", "Samantha Dee", nullptr));
        plainTextEdit->setPlainText(QCoreApplication::translate("MemberCatalogue", "Add a book you'd like to order", nullptr));
        label_4->setText(QCoreApplication::translate("MemberCatalogue", "Book Title", nullptr));
        lineEdit_title->setText(QCoreApplication::translate("MemberCatalogue", "Add a book title", nullptr));
        lineEdit_title->setPlaceholderText(QCoreApplication::translate("MemberCatalogue", "Enter title", nullptr));
        label_9->setText(QCoreApplication::translate("MemberCatalogue", "Book Author", nullptr));
        lineEdit_author->setText(QCoreApplication::translate("MemberCatalogue", "Add the author of the book", nullptr));
        lineEdit_author->setPlaceholderText(QCoreApplication::translate("MemberCatalogue", "Enter title", nullptr));
        pushButton->setText(QCoreApplication::translate("MemberCatalogue", "Order book", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MemberCatalogue: public Ui_MemberCatalogue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMBERCATALOGUE_H
