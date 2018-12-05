//
// Created by 张国梁 on 2018/8/6.
//

#ifndef LIANBIAO_TONGXUNLU_PERSON_H
#define LIANBIAO_TONGXUNLU_PERSON_H


#include <string>
#include <iostream>
using namespace std;

class Person {
    friend ostream &operator<<(ostream &out, Person &person);  //输出运算符重载
public:
    string name;
    string phone;
    Person &operator=(Person &person);
    bool operator==(Person &person);  //判断当前对象和传入对象是否相等
};


#endif //LIANBIAO_TONGXUNLU_PERSON_H
