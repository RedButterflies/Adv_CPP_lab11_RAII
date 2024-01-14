//
// Created by szyns on 14.01.2024.
//

#include "Shop.h"
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
Shop::Shop(const string &shopName) : shopName(shopName) {}

void Shop::addWarehouse(const Warehouse& w) {
    warehouseList.push_back(w);

}

void Shop::sellProduct(string name, int numberOfItems) {
    int x = 0;
    int y = 1;
     for_each(warehouseList.begin(),warehouseList.end(),[&y,&x,&name, &numberOfItems](Warehouse &w){
         if( w.getProductName() == name && w.getAvailableNumber() >= numberOfItems){
             w.setAvailableNumber(w.getAvailableNumber()-numberOfItems);
         cout<<"\nProdukt "<<name<<" sprzedany w ilosci "<<numberOfItems<<"\n"<<endl;
         x=0;
         y=0;
         }
         else if(w.getProductName() == name && w.getAvailableNumber() < numberOfItems)
         {
             cout<<"\nZbyt mala ilosc produktu "<<name<<" w magazynie\n"<<endl;
             x=0;

         }
         else
         {
             x=1;
         }
     });
    if(x==1 && y==1)
    {
        cout<<"\nProdukt "<<name<<" nie zostal znaleziony w magazynie\n"<<endl;
        x = 0;
    }
    else
    {

    }

}

void Shop::warehouseDisplay() {
    cout<<"\nLista magazynow, z ktorych korzysta sklep "<<shopName<<": "<<endl;
    for_each(warehouseList.begin(),warehouseList.end(),[](Warehouse &w){w.info();cout<<"\n"<<endl;});

}

void Shop::shopNameDisplay() {
    cout<<"\nNazwa sklepu: "<<shopName<<endl;

}

Shop::~Shop() {
    cout<<"Destruktor klasy Shop"<<endl;

}

const string &Shop::getShopName() const {
    return shopName;
}

void Shop::setShopName(const string &shopName) {
    Shop::shopName = shopName;
}

const vector<Warehouse> &Shop::getWarehouseList() const {
    return warehouseList;
}

void Shop::setWarehouseList(const vector<Warehouse> &warehouseList) {
    Shop::warehouseList = warehouseList;
}
