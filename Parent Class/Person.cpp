//
// Created by 张国梁 on 2018/7/18.
//

#include "Person.h"
#include <iostream>
using namespace std;

Person::Person() {
    cout << "Person()" << endl;
}

Person::~Person() {
    cout << "~Person()" << endl;
}

void Person::eat() {
    m_strName = "Jim";
    m_iAge = 20;
    cout << "eat()" << endl;
}
