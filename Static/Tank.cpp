//
// Created by 张国梁 on 2018/7/25.
//

#include "Tank.h"
#include <iostream>
using namespace std;

int Tank::s_iCount = 10;

Tank::Tank(char code) {
    m_cCode = code;
    s_iCount++;
    cout << "Tank" << endl;
}

Tank::~Tank() {
    s_iCount--;
    cout << "~Tank" << endl;
}

void Tank::fire() {
    getCount();
    cout << "Tank--fire" << endl;
}

int Tank::getCount() {
  //  fire();
   // m_cCode = 'C';  不能调用
    return s_iCount;
}