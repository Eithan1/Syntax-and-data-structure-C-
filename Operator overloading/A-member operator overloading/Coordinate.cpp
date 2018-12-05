//
// Created by 张国梁 on 2018/7/26.
//

#include "Coordinate.h"

Coordinate::Coordinate(int x, int y) {
    m_iX = x;
    m_iY = y;
}

int Coordinate::getX() {
    return m_iX;
}

int Coordinate::getY() {
    return m_iY;
}

//Coordinate& Coordinate::operator-() {
//    this->m_iX = -this->m_iX;
//    m_iY = -m_iY;
//    return *this;
//}

Coordinate &operator-(Coordinate &c) {
    c.m_iX = -c.m_iX;
    c.m_iY = -c.m_iY;
    return c;
}

Coordinate& Coordinate::operator++() {
    m_iX++; //++m_iX;
    m_iY++; //++m_iY:
    return *this;
}

Coordinate Coordinate::operator++(int) {   //为什么实现后++
    Coordinate old(*this);   //调用拷贝构造函数，每次用当前变量初始化old,让当前变量加1，返回old;
    this->m_iX++;
    this->m_iY++;
    return old;
}