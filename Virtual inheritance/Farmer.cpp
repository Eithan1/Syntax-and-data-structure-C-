//
// Created by 张国梁 on 2018/7/20.
//

#include "Farmer.h"
#include <iostream>
using namespace std;

Farmer::Farmer(string name, string color) : Person("Farmer"+color) {
    m_strName = name;
    cout << "Farmer()" << endl;
}

Farmer::~Farmer() {
    cout << "~Farmer()" << endl;
}

void Farmer::sow() {
    cout << m_strName << endl;
    cout << "Farmer -- sow()" << endl;
}