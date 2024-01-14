//
// Created by szyns on 14.01.2024.
//

#ifndef LAB11_EXERCISES_LISTADWUKIERUNKOWA_H
#define LAB11_EXERCISES_LISTADWUKIERUNKOWA_H
#include "Node.h"
#include <memory>
#include <algorithm>
#include <string>
#include <iostream>
using namespace std;

class ListaDwukierunkowa {
private:
    shared_ptr<Node>head;
    shared_ptr<Node>tail;
public:
    ListaDwukierunkowa(const shared_ptr<Node> &head, const shared_ptr<Node> &tail);

    const shared_ptr<Node> &getHead() const;

    void setHead(const shared_ptr<Node> &head);

    const shared_ptr<Node> &getTail() const;

    void setTail(const shared_ptr<Node> &tail);

    void addFront(int data);

    void addEnd(int data);

    void listDisplay();

    bool isEmpty();

    void deleteFront();

    void deleteEnd();



    virtual ~ListaDwukierunkowa();

};


#endif //LAB11_EXERCISES_LISTADWUKIERUNKOWA_H
