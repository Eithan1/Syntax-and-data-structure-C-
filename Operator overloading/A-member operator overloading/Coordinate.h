//
// Created by 张国梁 on 2018/7/26.
//

#ifndef YIYUANYUNSUANFUCHONGZAI_COORDINATE_H
#define YIYUANYUNSUANFUCHONGZAI_COORDINATE_H

#include <iostream>
using namespace std;

class Coordinate {
public:
    Coordinate(int x, int y);

    Coordinate &operator++();
    Coordinate operator++(int);
    //Coordinate &operator-(); //成员函数

    friend Coordinate &operator-(Coordinate &c);

    int getX();
    int getY();

private:
    int m_iX;
    int m_iY;
};


#endif //YIYUANYUNSUANFUCHONGZAI_COORDINATE_H
