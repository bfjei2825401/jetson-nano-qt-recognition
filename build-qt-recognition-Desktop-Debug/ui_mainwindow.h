/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelTitleVideo;
    QVBoxLayout *verticalLayout_7;
    QFrame *frameImage;
    QLabel *labelImageWindow;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelTitleClass;
    QLabel *labelClassVal;
    QHBoxLayout *horizontalLayout_6;
    QLabel *labelTitleSimilarity;
    QLabel *labelSimilarityVal;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *buttonSelectImage;
    QPushButton *buttonRecognize;
    QPushButton *buttonExit;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1000, 750);
        MainWindow->setMinimumSize(QSize(1000, 750));
        MainWindow->setMaximumSize(QSize(1000, 750));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        font.setKerning(true);
        MainWindow->setFont(font);
        MainWindow->setAcceptDrops(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalLayout_4->setContentsMargins(-1, -1, 0, -1);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(10);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        labelTitleVideo = new QLabel(centralwidget);
        labelTitleVideo->setObjectName(QString::fromUtf8("labelTitleVideo"));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setWeight(50);
        labelTitleVideo->setFont(font1);
        labelTitleVideo->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(labelTitleVideo);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        frameImage = new QFrame(centralwidget);
        frameImage->setObjectName(QString::fromUtf8("frameImage"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frameImage->sizePolicy().hasHeightForWidth());
        frameImage->setSizePolicy(sizePolicy);
        frameImage->setMinimumSize(QSize(0, 0));
        frameImage->setAutoFillBackground(false);
        frameImage->setStyleSheet(QString::fromUtf8(""));
        frameImage->setFrameShape(QFrame::Panel);
        frameImage->setFrameShadow(QFrame::Plain);
        frameImage->setLineWidth(1);
        frameImage->setMidLineWidth(0);
        labelImageWindow = new QLabel(frameImage);
        labelImageWindow->setObjectName(QString::fromUtf8("labelImageWindow"));
        labelImageWindow->setGeometry(QRect(0, 0, 0, 0));
        labelImageWindow->setMinimumSize(QSize(0, 0));
        labelImageWindow->setMaximumSize(QSize(16777215, 16777215));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        labelImageWindow->setFont(font2);
        labelImageWindow->setScaledContents(true);
        labelImageWindow->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(frameImage);


        verticalLayout_2->addLayout(verticalLayout_7);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        labelTitleClass = new QLabel(centralwidget);
        labelTitleClass->setObjectName(QString::fromUtf8("labelTitleClass"));
        QFont font3;
        font3.setPointSize(14);
        labelTitleClass->setFont(font3);
        labelTitleClass->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(labelTitleClass);

        labelClassVal = new QLabel(centralwidget);
        labelClassVal->setObjectName(QString::fromUtf8("labelClassVal"));
        labelClassVal->setFont(font3);

        horizontalLayout_2->addWidget(labelClassVal);


        verticalLayout_6->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout_6);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        labelTitleSimilarity = new QLabel(centralwidget);
        labelTitleSimilarity->setObjectName(QString::fromUtf8("labelTitleSimilarity"));
        labelTitleSimilarity->setFont(font3);
        labelTitleSimilarity->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(labelTitleSimilarity);

        labelSimilarityVal = new QLabel(centralwidget);
        labelSimilarityVal->setObjectName(QString::fromUtf8("labelSimilarityVal"));
        labelSimilarityVal->setFont(font3);

        horizontalLayout_6->addWidget(labelSimilarityVal);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(30);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(20, -1, 20, -1);
        buttonSelectImage = new QPushButton(centralwidget);
        buttonSelectImage->setObjectName(QString::fromUtf8("buttonSelectImage"));
        buttonSelectImage->setFont(font3);

        horizontalLayout_3->addWidget(buttonSelectImage);

        buttonRecognize = new QPushButton(centralwidget);
        buttonRecognize->setObjectName(QString::fromUtf8("buttonRecognize"));
        buttonRecognize->setFont(font3);

        horizontalLayout_3->addWidget(buttonRecognize);

        buttonExit = new QPushButton(centralwidget);
        buttonExit->setObjectName(QString::fromUtf8("buttonExit"));
        buttonExit->setFont(font3);

        horizontalLayout_3->addWidget(buttonExit);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalLayout_2->setStretch(1, 1);

        horizontalLayout->addLayout(verticalLayout_2);


        horizontalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_4->setStretch(0, 5);

        verticalLayout->addLayout(horizontalLayout_4);

        verticalLayout->setStretch(0, 20);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Qt Recognition Demo", 0, QApplication::UnicodeUTF8));
        labelTitleVideo->setText(QApplication::translate("MainWindow", "Image", 0, QApplication::UnicodeUTF8));
        labelImageWindow->setText(QString());
        labelTitleClass->setText(QApplication::translate("MainWindow", "Class: ", 0, QApplication::UnicodeUTF8));
        labelClassVal->setText(QApplication::translate("MainWindow", "N/A", 0, QApplication::UnicodeUTF8));
        labelTitleSimilarity->setText(QApplication::translate("MainWindow", "Precision: ", 0, QApplication::UnicodeUTF8));
        labelSimilarityVal->setText(QApplication::translate("MainWindow", "N/A", 0, QApplication::UnicodeUTF8));
        buttonSelectImage->setText(QApplication::translate("MainWindow", "Select Image", 0, QApplication::UnicodeUTF8));
        buttonRecognize->setText(QApplication::translate("MainWindow", "Recognize", 0, QApplication::UnicodeUTF8));
        buttonExit->setText(QApplication::translate("MainWindow", "Exit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
