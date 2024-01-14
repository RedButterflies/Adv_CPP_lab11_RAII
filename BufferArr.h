//
// Created by szyns on 14.01.2024.
//

#ifndef LAB11_EXERCISES_BUFFERARR_H
#define LAB11_EXERCISES_BUFFERARR_H


#include "Buffer.h"
#include <memory>
#include <string>
#include <iostream>

using namespace std;
class BufferArr: public Buffer {
private:
  int n;
  shared_ptr<int[]>tablica;
  int added = 0;
public:
    explicit BufferArr(int n);

    int getN() const;

    void setN(int n);

    const shared_ptr<int[]> &getTablica() const;

    void setTablica(const shared_ptr<int[]> &tablica);
    void add(int a) override;
    void write() override;

    ~BufferArr() override;


};


#endif //LAB11_EXERCISES_BUFFERARR_H
