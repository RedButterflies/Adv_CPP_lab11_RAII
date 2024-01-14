//
// Created by szyns on 14.01.2024.
//

#include "BufferArr.h"
#include <algorithm>

BufferArr::BufferArr(int n) : n(n) {
   tablica  =  unique_ptr<int[]> (new int [n]);
   added = 0;
    cout<<"Konstruktor klasy BufferArr"<<endl;
}

int BufferArr::getN() const {
    return n;
}

void BufferArr::setN(int n) {
    BufferArr::n = n;
}

const shared_ptr<int[]> &BufferArr::getTablica() const {
    return tablica;
}

void BufferArr::setTablica(const shared_ptr<int[]> &tablica) {
    BufferArr::tablica = tablica;
}

void BufferArr::add(int a) {
    if(added<n)
    {
        tablica[added] = a;
        added ++;
    }
    else
    {
        cout<<"Tablica jest pelna. Nie mozna dodac elementu "<<a<<endl;
    }

}

void BufferArr::write() {

    cout<<"\n\n\nElementy dodane do tablicy"<<endl;
    for_each(&tablica[0],&tablica[added],[](int &el){cout<<el<<",";});
    cout<<endl;
    cout<<endl;
    cout<<endl;
}

BufferArr::~BufferArr() {
    cout<<"Destruktor klasy BufferArr"<<endl;

}
