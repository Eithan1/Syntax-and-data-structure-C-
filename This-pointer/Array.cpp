//
// Created by 张国梁 on 2018/7/14.
//

#include "Array.h"
#include <iostream>
using namespace std;

Array::Array(int len) {
    this->len = len;
}

Array::~Array() {

}

Array* Array::setLen(int len) {
    this->len = len;
    return this;
}

int Array::getLen() {
    return len;
}

Array& Array::printInfo() {
    //cout << "len = " << len << endl;
    cout << this << endl;
    return *this;
}