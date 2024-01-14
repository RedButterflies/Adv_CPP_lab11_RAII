//
// Created by szyns on 14.01.2024.
//

#ifndef LAB11_EXERCISES_SHOP_H
#define LAB11_EXERCISES_SHOP_H
#include <string>
#include <iostream>
#include <vector>
#include "Warehouse.h"
using namespace std;

class Shop {
private:
    string shopName;
    vector<Warehouse>warehouseList;
public:
    explicit Shop(const string &shopName);
    void addWarehouse(const Warehouse& w);
    void sellProduct(string name, int numberOfItems);
    void warehouseDisplay();
    void shopNameDisplay();

    const string &getShopName() const;

    void setShopName(const string &shopName);

    const vector<Warehouse> &getWarehouseList() const;

    void setWarehouseList(const vector<Warehouse> &warehouseList);

    virtual ~Shop();
};


#endif //LAB11_EXERCISES_SHOP_H
