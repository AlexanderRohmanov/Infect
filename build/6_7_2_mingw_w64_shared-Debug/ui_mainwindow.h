/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsViewDefault;
    QPushButton *pushButton;
    QLabel *LabelCOUNT;
    QLabel *label;
    QFrame *line;
    QLabel *label_2;
    QLabel *labelRecoveredCount;
    QLabel *labelHealthyCount;
    QLabel *label_3;
    QLabel *labelSickCount;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QLabel *label_4;
    QGraphicsView *graphicsViewChart;
    QGraphicsView *graphicsViewDistance;
    QLabel *label_5;
    QFrame *line_5;
    QFrame *line_6;
    QLabel *labelRecoveredCount_2;
    QLabel *LabelCOUNT_2;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *labelSickCount_2;
    QFrame *line_7;
    QLabel *label_8;
    QGraphicsView *graphicsViewChart_Distance;
    QPushButton *pushButton_Distance;
    QLabel *labelHealthyCount_2;
    QFrame *line_8;
    QLabel *label_9;
    QFrame *line_9;
    QFrame *line_10;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1160, 1200);
        MainWindow->setMinimumSize(QSize(1160, 800));
        MainWindow->setMaximumSize(QSize(1160, 1500));
        MainWindow->setBaseSize(QSize(500, 300));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::MediaRecord));
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255)"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        graphicsViewDefault = new QGraphicsView(centralwidget);
        graphicsViewDefault->setObjectName("graphicsViewDefault");
        graphicsViewDefault->setGeometry(QRect(29, 215, 450, 260));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(graphicsViewDefault->sizePolicy().hasHeightForWidth());
        graphicsViewDefault->setSizePolicy(sizePolicy);
        graphicsViewDefault->setMinimumSize(QSize(310, 202));
        graphicsViewDefault->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(170, 212, 203)"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(529, 338, 91, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Calibri")});
        font.setPointSize(12);
        pushButton->setFont(font);
        pushButton->setAutoFillBackground(false);
        pushButton->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(170, 212, 203);"));
        pushButton->setFlat(false);
        LabelCOUNT = new QLabel(centralwidget);
        LabelCOUNT->setObjectName("LabelCOUNT");
        LabelCOUNT->setGeometry(QRect(527, 214, 181, 21));
        QFont font1;
        font1.setPointSize(12);
        LabelCOUNT->setFont(font1);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(527, 294, 141, 21));
        label->setFont(font1);
        label->setTextFormat(Qt::TextFormat::AutoText);
        line = new QFrame(centralwidget);
        line->setObjectName("line");
        line->setGeometry(QRect(527, 232, 221, 16));
        line->setAutoFillBackground(false);
        line->setStyleSheet(QString::fromUtf8("color: rgb(170, 212, 203)"));
        line->setFrameShadow(QFrame::Shadow::Plain);
        line->setLineWidth(1);
        line->setFrameShape(QFrame::Shape::HLine);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(527, 268, 111, 20));
        label_2->setFont(font1);
        labelRecoveredCount = new QLabel(centralwidget);
        labelRecoveredCount->setObjectName("labelRecoveredCount");
        labelRecoveredCount->setGeometry(QRect(711, 297, 31, 20));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        labelRecoveredCount->setFont(font2);
        labelRecoveredCount->setStyleSheet(QString::fromUtf8("color: rgb(178, 102, 181)"));
        labelRecoveredCount->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        labelHealthyCount = new QLabel(centralwidget);
        labelHealthyCount->setObjectName("labelHealthyCount");
        labelHealthyCount->setGeometry(QRect(701, 270, 41, 20));
        labelHealthyCount->setFont(font2);
        labelHealthyCount->setStyleSheet(QString::fromUtf8("color: rgb(52, 143, 116)"));
        labelHealthyCount->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(527, 242, 111, 20));
        label_3->setFont(font1);
        labelSickCount = new QLabel(centralwidget);
        labelSickCount->setObjectName("labelSickCount");
        labelSickCount->setGeometry(QRect(711, 243, 31, 20));
        labelSickCount->setFont(font2);
        labelSickCount->setStyleSheet(QString::fromUtf8("color: rgb(152, 80, 29)"));
        labelSickCount->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(527, 257, 221, 16));
        line_2->setAutoFillBackground(false);
        line_2->setStyleSheet(QString::fromUtf8("color: rgb(170, 212, 203)"));
        line_2->setFrameShadow(QFrame::Shadow::Plain);
        line_2->setLineWidth(1);
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_3 = new QFrame(centralwidget);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(527, 283, 221, 16));
        line_3->setAutoFillBackground(false);
        line_3->setStyleSheet(QString::fromUtf8("color: rgb(170, 212, 203)"));
        line_3->setFrameShadow(QFrame::Shadow::Plain);
        line_3->setLineWidth(1);
        line_3->setFrameShape(QFrame::Shape::HLine);
        line_4 = new QFrame(centralwidget);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(527, 310, 221, 16));
        line_4->setAutoFillBackground(false);
        line_4->setStyleSheet(QString::fromUtf8("color: rgb(170, 212, 203)"));
        line_4->setFrameShadow(QFrame::Shadow::Plain);
        line_4->setLineWidth(1);
        line_4->setFrameShape(QFrame::Shape::HLine);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(40, 153, 381, 61));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Segoe UI")});
        font3.setPointSize(13);
        font3.setKerning(true);
        label_4->setFont(font3);
        graphicsViewChart = new QGraphicsView(centralwidget);
        graphicsViewChart->setObjectName("graphicsViewChart");
        graphicsViewChart->setGeometry(QRect(790, 238, 330, 81));
        graphicsViewChart->setStyleSheet(QString::fromUtf8("background-color:  rgb(237, 239, 239);\n"
"border: 0px"));
        graphicsViewDistance = new QGraphicsView(centralwidget);
        graphicsViewDistance->setObjectName("graphicsViewDistance");
        graphicsViewDistance->setGeometry(QRect(30, 598, 450, 260));
        sizePolicy.setHeightForWidth(graphicsViewDistance->sizePolicy().hasHeightForWidth());
        graphicsViewDistance->setSizePolicy(sizePolicy);
        graphicsViewDistance->setMinimumSize(QSize(310, 202));
        graphicsViewDistance->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(170, 212, 203)"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(40, 534, 381, 61));
        label_5->setFont(font3);
        line_5 = new QFrame(centralwidget);
        line_5->setObjectName("line_5");
        line_5->setGeometry(QRect(527, 694, 221, 16));
        line_5->setAutoFillBackground(false);
        line_5->setStyleSheet(QString::fromUtf8("color: rgb(170, 212, 203)"));
        line_5->setFrameShadow(QFrame::Shadow::Plain);
        line_5->setLineWidth(1);
        line_5->setFrameShape(QFrame::Shape::HLine);
        line_6 = new QFrame(centralwidget);
        line_6->setObjectName("line_6");
        line_6->setGeometry(QRect(527, 616, 221, 16));
        line_6->setAutoFillBackground(false);
        line_6->setStyleSheet(QString::fromUtf8("color: rgb(170, 212, 203)"));
        line_6->setFrameShadow(QFrame::Shadow::Plain);
        line_6->setLineWidth(1);
        line_6->setFrameShape(QFrame::Shape::HLine);
        labelRecoveredCount_2 = new QLabel(centralwidget);
        labelRecoveredCount_2->setObjectName("labelRecoveredCount_2");
        labelRecoveredCount_2->setGeometry(QRect(711, 681, 31, 20));
        labelRecoveredCount_2->setFont(font2);
        labelRecoveredCount_2->setStyleSheet(QString::fromUtf8("color: rgb(178, 102, 181)"));
        labelRecoveredCount_2->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        LabelCOUNT_2 = new QLabel(centralwidget);
        LabelCOUNT_2->setObjectName("LabelCOUNT_2");
        LabelCOUNT_2->setGeometry(QRect(527, 598, 181, 21));
        LabelCOUNT_2->setFont(font1);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(527, 678, 141, 21));
        label_6->setFont(font1);
        label_6->setTextFormat(Qt::TextFormat::AutoText);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(527, 652, 111, 20));
        label_7->setFont(font1);
        labelSickCount_2 = new QLabel(centralwidget);
        labelSickCount_2->setObjectName("labelSickCount_2");
        labelSickCount_2->setGeometry(QRect(711, 627, 31, 20));
        labelSickCount_2->setFont(font2);
        labelSickCount_2->setStyleSheet(QString::fromUtf8("color: rgb(152, 80, 29)"));
        labelSickCount_2->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        line_7 = new QFrame(centralwidget);
        line_7->setObjectName("line_7");
        line_7->setGeometry(QRect(527, 641, 221, 16));
        line_7->setAutoFillBackground(false);
        line_7->setStyleSheet(QString::fromUtf8("color: rgb(170, 212, 203)"));
        line_7->setFrameShadow(QFrame::Shadow::Plain);
        line_7->setLineWidth(1);
        line_7->setFrameShape(QFrame::Shape::HLine);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(527, 626, 111, 20));
        label_8->setFont(font1);
        graphicsViewChart_Distance = new QGraphicsView(centralwidget);
        graphicsViewChart_Distance->setObjectName("graphicsViewChart_Distance");
        graphicsViewChart_Distance->setGeometry(QRect(790, 622, 330, 81));
        graphicsViewChart_Distance->setStyleSheet(QString::fromUtf8("background-color:  rgb(237, 239, 239);\n"
"border: 0px"));
        pushButton_Distance = new QPushButton(centralwidget);
        pushButton_Distance->setObjectName("pushButton_Distance");
        pushButton_Distance->setGeometry(QRect(530, 720, 91, 51));
        pushButton_Distance->setFont(font);
        pushButton_Distance->setAutoFillBackground(false);
        pushButton_Distance->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(170, 212, 203);"));
        pushButton_Distance->setFlat(false);
        labelHealthyCount_2 = new QLabel(centralwidget);
        labelHealthyCount_2->setObjectName("labelHealthyCount_2");
        labelHealthyCount_2->setGeometry(QRect(701, 654, 41, 20));
        labelHealthyCount_2->setFont(font2);
        labelHealthyCount_2->setStyleSheet(QString::fromUtf8("color: rgb(52, 143, 116)"));
        labelHealthyCount_2->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        line_8 = new QFrame(centralwidget);
        line_8->setObjectName("line_8");
        line_8->setGeometry(QRect(527, 668, 221, 16));
        line_8->setAutoFillBackground(false);
        line_8->setStyleSheet(QString::fromUtf8("color: rgb(170, 212, 203)"));
        line_8->setFrameShadow(QFrame::Shadow::Plain);
        line_8->setLineWidth(1);
        line_8->setFrameShape(QFrame::Shape::HLine);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(360, 30, 391, 61));
        label_9->setPixmap(QPixmap(QString::fromUtf8(":/images/images/Barnaul.png")));
        label_9->setScaledContents(true);
        line_9 = new QFrame(centralwidget);
        line_9->setObjectName("line_9");
        line_9->setGeometry(QRect(0, 100, 1171, 16));
        line_9->setAutoFillBackground(false);
        line_9->setStyleSheet(QString::fromUtf8("color: rgb(170, 212, 203)"));
        line_9->setFrameShadow(QFrame::Shadow::Plain);
        line_9->setLineWidth(2);
        line_9->setFrameShape(QFrame::Shape::HLine);
        line_10 = new QFrame(centralwidget);
        line_10->setObjectName("line_10");
        line_10->setGeometry(QRect(-10, 0, 1171, 16));
        line_10->setAutoFillBackground(false);
        line_10->setStyleSheet(QString::fromUtf8("color: rgb(170, 212, 203)"));
        line_10->setFrameShadow(QFrame::Shadow::Plain);
        line_10->setLineWidth(2);
        line_10->setFrameShape(QFrame::Shape::HLine);
        MainWindow->setCentralWidget(centralwidget);
        line_7->raise();
        line_8->raise();
        line_4->raise();
        line_3->raise();
        line_2->raise();
        line->raise();
        graphicsViewDefault->raise();
        pushButton->raise();
        LabelCOUNT->raise();
        label->raise();
        label_2->raise();
        labelRecoveredCount->raise();
        labelHealthyCount->raise();
        label_3->raise();
        labelSickCount->raise();
        label_4->raise();
        graphicsViewChart->raise();
        graphicsViewDistance->raise();
        label_5->raise();
        line_5->raise();
        line_6->raise();
        labelRecoveredCount_2->raise();
        LabelCOUNT_2->raise();
        label_6->raise();
        label_7->raise();
        labelSickCount_2->raise();
        label_8->raise();
        graphicsViewChart_Distance->raise();
        pushButton_Distance->raise();
        labelHealthyCount_2->raise();
        label_9->raise();
        line_9->raise();
        line_10->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1160, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "BP - Epidemic outbreak ", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "START", nullptr));
        LabelCOUNT->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273-\320\262\320\276 \320\277\320\260\321\206\320\270\320\265\320\275\321\202\320\276\320\262", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\267\320\264\320\276\321\200\320\276\320\262\320\265\320\262\321\210\320\270\321\205", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\227\320\264\320\276\321\200\320\276\320\262\321\213\321\205", nullptr));
        labelRecoveredCount->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        labelHealthyCount->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\221\320\276\320\273\321\214\320\275\321\213\321\205", nullptr));
        labelSickCount->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "1. \320\236\321\202\321\201\321\203\321\202\321\201\321\202\320\262\320\270\320\265 \320\274\320\265\321\200\n"
"\320\277\321\200\320\265\320\264\320\276\321\202\320\262\321\200\320\260\321\211\320\265\320\275\320\270\321\217 \321\200\320\260\321\201\320\277\321\200\320\276\321\201\321\202\321\200\320\260\320\275\320\265\320\275\320\270\321\217 \320\261\320\276\320\273\320\265\320\267\320\275\320\270", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "2. \320\241\320\276\320\261\320\273\321\216\320\264\320\265\320\275\320\270\320\265 \321\207\320\260\321\201\321\202\321\214\321\216\n"
"\320\263\321\200\320\260\320\266\320\264\320\260\320\275 \321\201\320\276\321\206\320\270\320\260\320\273\321\214\320\275\320\276\320\263\320\276 \320\264\320\270\321\201\321\202\320\260\320\275\321\206\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217", nullptr));
        labelRecoveredCount_2->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        LabelCOUNT_2->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273-\320\262\320\276 \320\277\320\260\321\206\320\270\320\265\320\275\321\202\320\276\320\262", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\267\320\264\320\276\321\200\320\276\320\262\320\265\320\262\321\210\320\270\321\205", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\227\320\264\320\276\321\200\320\276\320\262\321\213\321\205", nullptr));
        labelSickCount_2->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\320\221\320\276\320\273\321\214\320\275\321\213\321\205", nullptr));
        pushButton_Distance->setText(QCoreApplication::translate("MainWindow", "START", nullptr));
        labelHealthyCount_2->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_9->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
