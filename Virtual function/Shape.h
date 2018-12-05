//
// Created by 张国梁 on 2018/7/22.
//

#ifndef XUHANSHU_SHAPE_H
#define XUHANSHU_SHAPE_H

#include <iostream>
using namespace std;

class Shape {
public:
    Shape();
    ~Shape();
    virtual double calcArea();
};


#endif //XUHANSHU_SHAPE_H
