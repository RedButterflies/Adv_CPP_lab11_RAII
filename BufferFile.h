//
// Created by szyns on 14.01.2024.
//

#ifndef LAB11_EXERCISES_BUFFERFILE_H
#define LAB11_EXERCISES_BUFFERFILE_H
#include <string>
#include <iostream>

#include "Buffer.h"
using namespace std;
class BufferFile: public Buffer {
private:
    string sciezka;
public:
    explicit BufferFile(const string &sciezka);
    void add(int a) override;
    void write() override;

    ~BufferFile() override;

};


#endif //LAB11_EXERCISES_BUFFERFILE_H
