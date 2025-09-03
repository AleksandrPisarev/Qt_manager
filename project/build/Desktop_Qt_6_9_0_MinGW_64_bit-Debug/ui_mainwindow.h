/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *entercategory;
    QLineEdit *categoryNameEdit;
    QComboBox *categoryComboBox;
    QPushButton *enterproduct;
    QTableWidget *tableWidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *productPriceEdit;
    QLabel *label_3;
    QLineEdit *productMuchEdit;
    QLabel *label_4;
    QLineEdit *productUnitEdit;
    QLineEdit *infoEdit;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *productMuchSell;
    QPushButton *sellproduct;
    QLabel *label_7;
    QLineEdit *boxOffice;
    QLabel *label_8;
    QComboBox *productSellComboBox;
    QLineEdit *productNameEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1308, 690);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(116, 111, 89);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        entercategory = new QPushButton(centralwidget);
        entercategory->setObjectName("entercategory");
        entercategory->setGeometry(QRect(360, 30, 131, 31));
        categoryNameEdit = new QLineEdit(centralwidget);
        categoryNameEdit->setObjectName("categoryNameEdit");
        categoryNameEdit->setGeometry(QRect(10, 20, 341, 21));
        categoryNameEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        categoryComboBox = new QComboBox(centralwidget);
        categoryComboBox->setObjectName("categoryComboBox");
        categoryComboBox->setGeometry(QRect(10, 50, 341, 22));
        enterproduct = new QPushButton(centralwidget);
        enterproduct->setObjectName("enterproduct");
        enterproduct->setGeometry(QRect(370, 150, 121, 31));
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(820, 50, 471, 601));
        tableWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 100, 131, 16));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(116, 111, 89);\n"
"color: rgb(0, 0, 255);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 140, 81, 16));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(116, 111, 89);\n"
"color: rgb(0, 0, 255);"));
        productPriceEdit = new QLineEdit(centralwidget);
        productPriceEdit->setObjectName("productPriceEdit");
        productPriceEdit->setGeometry(QRect(10, 160, 91, 22));
        productPriceEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(110, 140, 111, 16));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(116, 111, 89);\n"
"color: rgb(0, 0, 255);"));
        productMuchEdit = new QLineEdit(centralwidget);
        productMuchEdit->setObjectName("productMuchEdit");
        productMuchEdit->setGeometry(QRect(110, 160, 113, 22));
        productMuchEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(240, 140, 111, 16));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(116, 111, 89);\n"
"color: rgb(0, 0, 255);"));
        productUnitEdit = new QLineEdit(centralwidget);
        productUnitEdit->setObjectName("productUnitEdit");
        productUnitEdit->setGeometry(QRect(240, 160, 113, 22));
        productUnitEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        infoEdit = new QLineEdit(centralwidget);
        infoEdit->setObjectName("infoEdit");
        infoEdit->setGeometry(QRect(890, 20, 341, 22));
        infoEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(255, 0, 0);"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(120, 240, 131, 16));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(116, 111, 89);\n"
"color: rgb(0, 0, 255);"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(140, 290, 111, 16));
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        productMuchSell = new QLineEdit(centralwidget);
        productMuchSell->setObjectName("productMuchSell");
        productMuchSell->setGeometry(QRect(110, 310, 141, 22));
        productMuchSell->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        sellproduct = new QPushButton(centralwidget);
        sellproduct->setObjectName("sellproduct");
        sellproduct->setGeometry(QRect(380, 260, 101, 31));
        QFont font;
        font.setPointSize(10);
        sellproduct->setFont(font);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(990, 0, 151, 20));
        label_7->setStyleSheet(QString::fromUtf8("background-color: rgb(116, 111, 89);\n"
"color: rgb(0, 0, 255);"));
        boxOffice = new QLineEdit(centralwidget);
        boxOffice->setObjectName("boxOffice");
        boxOffice->setGeometry(QRect(600, 50, 211, 22));
        boxOffice->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(650, 30, 121, 20));
        label_8->setStyleSheet(QString::fromUtf8("background-color: rgb(116, 111, 89);\n"
"color: rgb(0, 0, 255);"));
        productSellComboBox = new QComboBox(centralwidget);
        productSellComboBox->setObjectName("productSellComboBox");
        productSellComboBox->setGeometry(QRect(10, 260, 341, 22));
        productNameEdit = new QLineEdit(centralwidget);
        productNameEdit->setObjectName("productNameEdit");
        productNameEdit->setGeometry(QRect(12, 120, 331, 22));
        productNameEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1308, 22));
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
        entercategory->setText(QCoreApplication::translate("MainWindow", "\320\264\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\272\320\260\321\202\320\265\320\263\320\276\321\200\320\270\321\216", nullptr));
        enterproduct->setText(QCoreApplication::translate("MainWindow", "\320\264\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\202\320\276\320\262\320\260\321\200", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\275\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265 \321\202\320\276\320\262\320\260\321\200\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\321\206\320\265\320\275\320\260 \321\202\320\276\320\262\320\260\321\200\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\202\320\276\320\262\320\260\321\200\320\260", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\265\320\264\320\270\320\275\320\270\321\206\320\260 \320\270\320\267\320\274\320\265\321\200\320\265\320\275\320\270\321\217", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\275\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265 \321\202\320\276\320\262\320\260\321\200\320\260", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\202\320\276\320\262\320\260\321\200\320\260", nullptr));
        sellproduct->setText(QCoreApplication::translate("MainWindow", "\320\277\321\200\320\276\320\264\320\260\321\202\321\214 \321\202\320\276\320\262\320\260\321\200", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\320\276\320\275\320\275\320\276\320\265 \320\276\320\272\320\275\320\276", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\320\272\320\260\321\201\321\201\320\260: \321\201\321\203\320\274\320\274\320\260 \320\277\321\200\320\276\320\264\320\260\320\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
