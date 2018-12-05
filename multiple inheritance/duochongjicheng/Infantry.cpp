//
// Created by 张国梁 on 2018/7/20.
//

#include "Infantry.h"
#include <iostream>
#include "Infantry.h"
using namespace std;

Infantry::Infantry(string name, int age) {
    m_strName = name;
    m_iAge = age;
    cout << "Infantry()" << endl;
}

Infantry::~Infantry() {
    cout << "~Infantry" << endl;
}

void Infantry::attack() {
    cout << m_strName << endl;
    cout << m_iAge << endl;
    cout << "Infantry -- attack()" << endl;
}