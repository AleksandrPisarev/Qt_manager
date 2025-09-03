#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QStandardItemModel>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableWidget->setColumnCount(5);
    ui->tableWidget->setRowCount(100);
    ui->tableWidget->setHorizontalHeaderItem(0,new QTableWidgetItem("категория"));
    ui->tableWidget->setHorizontalHeaderItem(1,new QTableWidgetItem("наименование"));
    ui->tableWidget->setHorizontalHeaderItem(2,new QTableWidgetItem("цена"));
    ui->tableWidget->setHorizontalHeaderItem(3,new QTableWidgetItem("кол-во"));
    ui->tableWidget->setHorizontalHeaderItem(4,new QTableWidgetItem("ед.изм."));
    ui->tableWidget->setColumnWidth(0, 100);
    ui->tableWidget->setColumnWidth(1, 150);
    ui->tableWidget->setColumnWidth(2, 70);
    ui->tableWidget->setColumnWidth(3, 50);
    ui->tableWidget->setColumnWidth(4, 50);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::clearData(){
    ui->categoryComboBox->clear();
    ui->productSellComboBox->clear();
    ui->tableWidget->clear();
}

void MainWindow::appendData(){
    ui->categoryComboBox->insertItems(1, categories);
    ui->productSellComboBox->insertItems(1,productSell);
    ui->tableWidget->setHorizontalHeaderItem(0,new QTableWidgetItem("категория"));
    ui->tableWidget->setHorizontalHeaderItem(1,new QTableWidgetItem("наименование"));
    ui->tableWidget->setHorizontalHeaderItem(2,new QTableWidgetItem("цена"));
    ui->tableWidget->setHorizontalHeaderItem(3,new QTableWidgetItem("кол-во"));
    ui->tableWidget->setHorizontalHeaderItem(4,new QTableWidgetItem("ед.изм."));
    for (int i = 0; i < products.size(); ++i){
        Product* product = products[i];
        QTableWidgetItem* productCategory = new QTableWidgetItem(product->getCategory());
        QTableWidgetItem* productName = new QTableWidgetItem(product->getName());
        QTableWidgetItem* productPrice = new QTableWidgetItem(product->getPrice());
        QTableWidgetItem* productMuch = new QTableWidgetItem(product->getMuch());
        QTableWidgetItem* productUnit = new QTableWidgetItem(product->getUnit());
        ui->tableWidget->setItem(i,0,productCategory);
        ui->tableWidget->setItem(i,1,productName);
        ui->tableWidget->setItem(i,2,productPrice);
        ui->tableWidget->setItem(i,3,productMuch);
        ui->tableWidget->setItem(i,4,productUnit);
    }
}

void MainWindow::upDate(){
    clearData();
    appendData();
}

void MainWindow::on_entercategory_clicked()
{
    QString categoryName = ui->categoryNameEdit->text();
    categories.push_back(categoryName);
    ui->categoryNameEdit->clear();
    upDate();
}

void MainWindow::on_enterproduct_clicked()
{
    QString category = ui->categoryComboBox->currentText();
    QString productName = ui->productNameEdit->text();
    QString producrPrice = ui->productPriceEdit->text();
    QString productMuch = ui->productMuchEdit->text();
    QString productUnit = ui->productUnitEdit->text();
    if (category.size() != 0 && productName.size() != 0 && producrPrice.size() != 0 && productMuch.size() != 0 && productUnit.size() != 0){
        Product* product = new Product(productName, category, producrPrice, productMuch, productUnit);
        products.push_back(product);
        productSell.push_back(productName);
        ui->infoEdit->clear();
        ui->productNameEdit->clear();
        ui->productPriceEdit->clear();
        ui->productMuchEdit->clear();
        ui->productUnitEdit->clear();
        upDate();
    }
    else ui->infoEdit->setText("Не все поля заполнены. Заполните все поля.");
}

void MainWindow::on_sellproduct_clicked()
{
    int inStock = -1; //переменная наличия товара на складе
    QString productNameSell = ui->productSellComboBox->currentText();
    QString productMuchSell = ui->productMuchSell->text();
    if (productNameSell.size() != 0 && productMuchSell.size() != 0){
        for (int i=0; i<products.size(); ++i){
            if (products[i]->getName() == productNameSell){
                inStock = i;
                break;
            } 
        }
        if (inStock >=0){
            double dproductMuchSell = productMuchSell.toDouble();
            double dproductMuch = products[inStock]->getMuch().toDouble();
            if (dproductMuch >= dproductMuchSell){
                double dproductPrice = products[inStock]->getPrice().toDouble();
                double dproducktMuchResult = dproductMuch - dproductMuchSell;
                if (dproducktMuchResult == 0){
                    products.removeAt(inStock);
                    productSell.removeAt(inStock);
                }
                else {
                    QString sproducktMuchResult = QString::number(dproducktMuchResult);
                    products[inStock]->setMuch(sproducktMuchResult);
                }
                double dSumSell = dproductMuchSell * dproductPrice;
                double dBoxOffice = ui->boxOffice->text().toDouble();
                double dTotalSum = dSumSell + dBoxOffice;
                QString strTotalSum = QString::number(dTotalSum);
                ui->boxOffice->setText(strTotalSum);
                ui->infoEdit->clear();
                ui->productMuchSell->clear();
                upDate();
            }
            else ui->infoEdit->setText("Количество данного товара нехватает на складе.");
        }
        else ui->infoEdit->setText("Данного товара нет на складе.");
    }
    else ui->infoEdit->setText("Не все поля заполнены. Заполните все поля.");
}

