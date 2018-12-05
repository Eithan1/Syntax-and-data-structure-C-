//
// Created by 张国梁 on 2018/8/2.
//

#include "Coordinate.h"
#include <iostream>
using namespace std;

Coordinate::Coordinate(int x, int y) {
    m_iX = x;
    m_iY = y;
}

void Coordinate::printCoordinate() {
    cout << "(" << m_iX << "," << m_iY << ")" << endl;
}

ostream &operator<<(ostream &out, Coordinate &coor) {

    out << "(" << coor.m_iX << "," << coor.m_iY << ")" << endl;
    return out;
}
