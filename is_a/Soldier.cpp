//
// Created by 张国梁 on 2018/7/19.
//

#include "Soldier.h"
#include <iostream>
using namespace std;

Soldier::Soldier(string name, int age) {
    m_strName = name;
    m_iAge = age;
    cout << "Soldier()" << endl;

}

Soldier::~Soldier() {
    cout << "~Soldier" << endl;
}

void Soldier::work() {
    cout << m_strName << endl;
    cout << m_iAge << endl;
    cout << "Soldier -- work" << endl;
}