//
// Created by szyns on 14.01.2024.
//

#include "ListaDwukierunkowa.h"


ListaDwukierunkowa::ListaDwukierunkowa(const shared_ptr<Node> &head, const shared_ptr<Node> &tail) : head(nullptr),
                                                                                                     tail(nullptr) {}

const shared_ptr<Node> &ListaDwukierunkowa::getHead() const {
    return head;
}

void ListaDwukierunkowa::setHead(const shared_ptr<Node> &head) {
    ListaDwukierunkowa::head = head;
}

const shared_ptr<Node> &ListaDwukierunkowa::getTail() const {
    return tail;
}

void ListaDwukierunkowa::setTail(const shared_ptr<Node> &tail) {
    ListaDwukierunkowa::tail = tail;
}

ListaDwukierunkowa::~ListaDwukierunkowa() {
    cout<<"Destruktor klasy ListaDwukierukowa"<<endl;

}

void ListaDwukierunkowa::addFront(int data) {
    shared_ptr<Node> new_node = make_shared<Node>(data);
    if(isEmpty())
    {
        head = new_node;
        tail = new_node;
    }
    else
    {
        new_node ->next = head;
        head ->previous = new_node;
        head = new_node;

    }

    cout<<"Dodano element "<<head->data<<" na poczatek listy"<<endl;

}

void ListaDwukierunkowa::addEnd(int data) {
    shared_ptr<Node>new_node = make_shared<Node>(data);
    if(isEmpty())
    {
        head = new_node;
        tail = new_node;
    }
    else
    {
        new_node->previous = tail;
        tail ->next = new_node;
        tail = new_node;
    }
    cout<<"Dodano element "<<tail->data<<" na koniec listy"<<endl;

}

void ListaDwukierunkowa::listDisplay() {
    shared_ptr<Node>elem;
    if(isEmpty())
    {
        cout<<"Lista jest pusta"<<endl;
    }
    else
    {
        cout<<"Lista: "<<" ";
        elem = head;
        while(elem!=tail)
        {
            cout<<elem->data<<",";
            elem = elem->next;
        }
        cout<<tail->data<<endl;

    }

}

bool ListaDwukierunkowa::isEmpty() {
    if(head == nullptr && tail == nullptr){
        return true;
    }
    else {
        return false;
    }

}

void ListaDwukierunkowa::deleteFront() {
    if(isEmpty())
    {
        cout<<"Lista jest pusta, nie mozna usunac elementu"<<endl;
    }
    else
    {
        shared_ptr<Node>new_head = head->next;
        if(new_head)
        {
            new_head->previous.reset();

        }
        else
        {
            tail.reset();
        }
        head = new_head;
        cout<<"Usunieto element z poczatku listy"<<endl;
    }

}

void ListaDwukierunkowa::deleteEnd() {

    if(isEmpty())
    {
        cout<<"Lista jest pusta. Nie mozna usunac elementu z konca listy"<<endl;
    }
    else {
        shared_ptr<Node>new_tail = shared_ptr<Node>(tail->previous);
        if (new_tail) {
            new_tail->next.reset();
        } else {
            head.reset();
        }
        tail = new_tail;
        cout << "USunieto element z konca listy" << endl;
    }

}
