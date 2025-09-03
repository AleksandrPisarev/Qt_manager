#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<vector>
#include "product.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_entercategory_clicked();
    void clearData();
    void appendData();
    void upDate();

    void on_enterproduct_clicked();

    void on_sellproduct_clicked();

private:
    Ui::MainWindow *ui;
    QStringList categories;
    QStringList productSell;
    QList<Product*> products;
};
#endif // MAINWINDOW_H
