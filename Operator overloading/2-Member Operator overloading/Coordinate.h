//
// Created by 张国梁 on 2018/7/26.
//

#ifndef ERYUANYUNSUANFUCHONGZAI_COORDINATE_H
#define ERYUANYUNSUANFUCHONGZAI_COORDINATE_H

#include <iostream>
using namespace std;

class Coordinate {
    friend Coordinate operator+(Coordinate c1, Coordinate c2);
    friend Coordinate &operator-(Coordinate &c);
    friend ostream &operator<<(ostream &output, Coordinate &coor);

public:
    Coordinate(int x, int y);
    Coordinate &operator++();
    Coordinate operator++(int);
    //Coordinate &operator-(); //成员函数
   // Coordinate operator+(Coordinate &c);
    int operator[](int index);
    int getX();
    int getY();

private:
    int m_iX;
    int m_iY;
};


#endif //ERYUANYUNSUANFUCHONGZAI_COORDINATE_H
