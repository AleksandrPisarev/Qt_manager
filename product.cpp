#include "product.h"

Product::Product()
{

}
Product::Product(QString name, QString category, QString price, QString much, QString unit){
    this->name = name;
    this->category = category;
    this->price = price;
    this->much = much;
    this->unit = unit;
}
QString Product::getName(){
    return name;
}

QString Product::getCategory(){
    return category;
}
QString Product::getPrice(){
    return price;
}
QString Product::getMuch(){
    return much;
}
QString Product::getUnit(){
    return unit;
}
void Product::setMuch(QString much){
    this->much = much;
}
