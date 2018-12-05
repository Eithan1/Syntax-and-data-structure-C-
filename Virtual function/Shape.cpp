//
// Created by 张国梁 on 2018/7/22.
//

#include "Shape.h"

Shape::Shape() {
    cout << "Shape" << endl;
}

Shape::~Shape() {
    cout << "~Shape" << endl;
}

double Shape::calcArea() {
    cout << "Shape-->calcArea()" << endl;
    return 0;
}