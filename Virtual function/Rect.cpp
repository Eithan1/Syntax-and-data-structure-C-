//
// Created by 张国梁 on 2018/7/22.
//

#include "Rect.h"

Rect::Rect(double width, double height) {
    cout << "Rect()" << endl;
    m_dHeight = height;
    m_dWidth = width;
}

Rect::~Rect() {
    cout << "~Rect()" << endl;
}

double Rect::calcArea() {
    cout << "Rect-->calcArea()" << endl;
    return m_dWidth*m_dHeight;
}