//
// Created by szyns on 14.01.2024.
//

#ifndef LAB11_EXERCISES_BUFFER_H
#define LAB11_EXERCISES_BUFFER_H


class Buffer {
public:
virtual void add(int a) = 0;
virtual void write() = 0;

public:
    Buffer();

    virtual ~Buffer();

};


#endif //LAB11_EXERCISES_BUFFER_H
