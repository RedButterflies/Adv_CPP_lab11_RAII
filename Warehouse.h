//
// Created by szyns on 14.01.2024.
//

#ifndef LAB11_EXERCISES_WAREHOUSE_H
#define LAB11_EXERCISES_WAREHOUSE_H
#include<string>
#include <iostream>
using namespace std;


class Warehouse {
private:
    string productName;
    int availableNumber;
public:
    Warehouse(const string &productName, int availableNumber);

    const string &getProductName() const;

    void setProductName(const string &productName);

    int getAvailableNumber() const;

    void setAvailableNumber(int availableNumber);
    void info();

    virtual ~Warehouse();


};


#endif //LAB11_EXERCISES_WAREHOUSE_H
