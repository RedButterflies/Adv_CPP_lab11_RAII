//
// Created by szyns on 14.01.2024.
//

#ifndef LAB11_EXERCISES_NODE_H
#define LAB11_EXERCISES_NODE_H
#include <string>
#include <iostream>
#include <memory>

using namespace std;

class Node {

public:
    int data;
    shared_ptr<Node>next;
    weak_ptr<Node>previous;

    explicit Node(int data);

    virtual ~Node();

};


#endif //LAB11_EXERCISES_NODE_H
