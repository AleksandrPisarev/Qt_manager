#ifndef PRODUCT_H
#define PRODUCT_H

#include <QObject>

class Product : public QObject
{
    Q_OBJECT
    QString name;
    QString category;
    QString price;
    QString much;
    QString unit;
public:
    explicit Product();
    Product(QString name, QString category, QString price, QString much, QString unit);
    QString getName();
    QString getCategory();
    QString getPrice();
    QString getMuch();
    QString getUnit();
    void setMuch(QString much);
signals:

};

#endif // PRODUCT_H
