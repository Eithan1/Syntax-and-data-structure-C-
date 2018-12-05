/*
 * 运算符重载本质：函数重载
 * 关键字：operator
 *      -(负号)的重载
 *          1、友元函数重载
 *          2、成员函数重载
 *      ++负号的重载
 *          1、前置++
 *          2、后置++
 */

#include "Coordinate.h"
#include <iostream>
using namespace std;

#include <iostream>

int main() {
    Coordinate coor1(1,3);
    cout << coor1.getX() << "," << coor1.getY() << endl;

    ++coor1;
    cout << (coor1++).getX() << "," ;
    cout << (coor1++).getY() << endl;

    cout << coor1.getX() << "," << coor1.getY() << endl;

    -coor1; //coor1.operator-();
    cout << coor1.getX() << "," << coor1.getY() << endl;
    return 0;
}