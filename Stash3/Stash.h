//
// Created by SiGua on 2018/8/29.
//

#ifndef STASH3_STASH_H
#define STASH3_STASH_H


class Stash {
private:
    int size;
    int quantity;
    int next;
    unsigned char* storage;
    void inflate(int increase);

public:
    Stash(int sz);
    Stash(int sz, int initQuantity);
    ~Stash();
    int add(void* element);
    void* fetch(int index);
    int count();
};


#endif //STASH3_STASH_H
