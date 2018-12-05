/*
 * <<必须用友元函数重载
 * []索引运算符必须采用成员函数重载
 */

#include "Coordinate.h"

#include <iostream>
#include <ostream>
using namespace std;

int main() {
    Coordinate coor1(1,3);
    Coordinate coor2(2,4);
    Coordinate coor3(0,0);

    coor3 = coor2 + coor1;

    //cout << coor3.getX() << "," << coor3.getY() << endl;
    cout << coor3[0] << endl;
    cout << coor3[1] << endl;

    return 0;
}