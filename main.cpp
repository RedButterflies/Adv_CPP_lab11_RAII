#include <iostream>
#include "Buffer.h"
#include "BufferArr.h"
#include "BufferFile.h"
#include <vector>
#include <memory>
#include <algorithm>
#include "Warehouse.h"
#include "Shop.h"
#include <list>
#include "Node.h"
#include "ListaDwukierunkowa.h"

int main() {

    //Zadanie 11.1
    vector<unique_ptr<Buffer>>bufory;
    BufferArr bufferArrA(3);
    BufferArr bufferArrB(2);
    BufferArr bufferArrC(1);
    BufferFile bufferFileA("numbersA.txt");
    BufferFile bufferFileB("numbersB.txt");
    BufferFile bufferFileC("numbersC.txt");
    bufory.push_back(make_unique<BufferArr>(bufferArrA));
    bufory.push_back(make_unique<BufferArr>(bufferArrB));
    bufory.push_back(make_unique<BufferArr>(bufferArrC));
    bufory.push_back(make_unique<BufferFile>(bufferFileA));
    bufory.push_back(make_unique<BufferFile>(bufferFileB));
    bufory.push_back(make_unique<BufferFile>(bufferFileC));

    int i = 5;
    for_each(bufory.begin(),bufory.end(),[&i](unique_ptr<Buffer> &b){b->add(i);i++;});
    for_each(bufory.begin(),bufory.end(),[&i](unique_ptr<Buffer> &b){b->add(i);i++;});
    for_each(bufory.begin(),bufory.end(),[&i](unique_ptr<Buffer> &b){b->add(i);i++;});
    for_each(bufory.begin(),bufory.end(),[](unique_ptr<Buffer> &b){b->write();});

    //Zadanie 11.2
    list<unique_ptr<Shop>>sklepy;
    Shop sA("Fantastyczny Jar");

    Warehouse wA("dzem jablkowy",15);
    Warehouse wB("marmolada truskawkowa",3);
    Warehouse wC("smar z jablek",1);
    sA.addWarehouse(wA);
    sA.addWarehouse(wB);
    sA.addWarehouse(wC);


    Shop sB("Stolarskie Marzenia");

    Warehouse wD("szafa",6);
    Warehouse wE("stol",3);
    Warehouse wF("biurko",1);
    sB.addWarehouse(wD);
    sB.addWarehouse(wE);
    sB.addWarehouse(wF);

    Shop sC("Spozywczak");

    Warehouse wG("ser",12);
    Warehouse wH("szynka",3);
    Warehouse wI("pomidor",1);
    sC.addWarehouse(wG);
    sC.addWarehouse(wH);
    sC.addWarehouse(wI);

    sklepy.push_back(make_unique<Shop>(sA));
    sklepy.push_back(make_unique<Shop>(sB));
    sklepy.push_back(make_unique<Shop>(sC));

    for_each(sklepy.begin(),sklepy.end(),[](unique_ptr<Shop> &s){
        s->shopNameDisplay();
        s->warehouseDisplay();

    });

    for_each(sklepy.begin(),sklepy.end(),[](unique_ptr<Shop> &s){
        s->shopNameDisplay();
        s->sellProduct("szynka",3);
        s->sellProduct("dzem jablkowy",3);
        s->sellProduct("biurko",3);

    });


    for_each(sklepy.begin(),sklepy.end(),[](unique_ptr<Shop> &s){
        s->shopNameDisplay();
        s->warehouseDisplay();

    });

    //Zadanie 11.3

    shared_ptr<Node>h;
    shared_ptr<Node>t;
    ListaDwukierunkowa lista = ListaDwukierunkowa(h,t);
    cout<<"Pusta lista: "<<lista.isEmpty()<<endl;
    lista.listDisplay();
    lista.deleteFront();
    lista.deleteEnd();
    lista.addFront(6);
    lista.addFront(1);
    lista.addFront(3);
    lista.addEnd(9);
    cout<<"Pusta lista: "<<lista.isEmpty()<<endl;
    lista.listDisplay();
    lista.deleteFront();
    lista.deleteEnd();
    lista.listDisplay();







    return 0;
}
