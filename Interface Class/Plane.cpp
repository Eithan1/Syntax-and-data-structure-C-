//
// Created by 张国梁 on 2018/7/23.
//

#include "Plane.h"
#include <iostream>
using namespace std;

Plane::Plane(string code) {
    m_strCode = code;
}

//void Plane::takeoff() {
//    cout << "Plane--takeoff" << endl;
//}
//
//void Plane::land() {
//    cout << "Plane--land" <<endl;
//}

void Plane::printCode() {
    cout << m_strCode << endl;
}