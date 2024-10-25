/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_2;
    QPushButton *createButton;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label;
    QLabel *label_3;
    QLineEdit *lineEditName;
    QSpinBox *spinBoxRoomCount;
    QDoubleSpinBox *doubleSpinBoxPrice;
    QSpinBox *spinBoxMaxGuests;
    QTextEdit *textEditDescription;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(122, 59, 101, 31));
        createButton = new QPushButton(centralwidget);
        createButton->setObjectName("createButton");
        createButton->setGeometry(QRect(220, 260, 191, 41));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(170, 180, 91, 31));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(40, 150, 171, 20));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(140, 30, 111, 20));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(150, 110, 61, 20));
        lineEditName = new QLineEdit(centralwidget);
        lineEditName->setObjectName("lineEditName");
        lineEditName->setGeometry(QRect(220, 30, 191, 24));
        spinBoxRoomCount = new QSpinBox(centralwidget);
        spinBoxRoomCount->setObjectName("spinBoxRoomCount");
        spinBoxRoomCount->setGeometry(QRect(220, 60, 61, 31));
        doubleSpinBoxPrice = new QDoubleSpinBox(centralwidget);
        doubleSpinBoxPrice->setObjectName("doubleSpinBoxPrice");
        doubleSpinBoxPrice->setGeometry(QRect(220, 104, 62, 31));
        spinBoxMaxGuests = new QSpinBox(centralwidget);
        spinBoxMaxGuests->setObjectName("spinBoxMaxGuests");
        spinBoxMaxGuests->setGeometry(QRect(220, 144, 61, 31));
        textEditDescription = new QTextEdit(centralwidget);
        textEditDescription->setObjectName("textEditDescription");
        textEditDescription->setGeometry(QRect(220, 180, 191, 70));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(220, 320, 201, 171));
        textEdit->setStyleSheet(QString::fromUtf8("background-color: black;  /* \320\232\320\276\320\273\321\226\321\200 \321\204\320\276\320\275\321\203 */\n"
"color: white;             /* \320\232\320\276\320\273\321\226\321\200 \321\202\320\265\320\272\321\201\321\202\321\203 */\n"
""));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\232\321\226\320\273\321\214\320\272\321\226\321\201\321\202\321\214 \320\272\321\226\320\274\320\275\320\260\321\202", nullptr));
        createButton->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\262\320\276\321\200\320\270\321\202\320\270 \320\246\320\265\320\275\321\202\321\200 \320\237\321\200\321\226\320\275\321\217\321\202\321\226\321\217 \320\240\321\226\321\210\320\265\320\275\321\226\320\271", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\236\320\277\320\270\321\201 ", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\234\320\260\320\272\321\201\320\270\320\274\320\260\320\273\321\214\320\275\320\260 \320\272\321\226\320\273\321\214\320\272\321\226\321\201\321\202\321\214 \320\263\320\276\321\201\321\202\320\265\320\271", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\262\320\260 \320\266\320\270\321\202\320\273\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\246\321\226\320\275\320\260 \320\267\320\260 \320\275\321\226\321\207", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
