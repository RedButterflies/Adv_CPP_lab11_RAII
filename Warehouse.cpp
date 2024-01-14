//
// Created by szyns on 14.01.2024.
//

#include "Warehouse.h"

Warehouse::Warehouse(const string &productName, int availableNumber) : productName(productName),
                                                                       availableNumber(availableNumber) {}

const string &Warehouse::getProductName() const {
    return productName;
}

void Warehouse::setProductName(const string &productName) {
    Warehouse::productName = productName;
}

int Warehouse::getAvailableNumber() const {
    return availableNumber;
}

void Warehouse::setAvailableNumber(int availableNumber) {
    Warehouse::availableNumber = availableNumber;
}

void Warehouse::info() {
    cout<<"Nazwa towaru: "<<productName<<endl;
    cout<<"Liczba sztuk towaru: "<<availableNumber<<endl;

}

Warehouse::~Warehouse() {
    cout<<"Destruktor klasy Warehouse"<<endl;

}
