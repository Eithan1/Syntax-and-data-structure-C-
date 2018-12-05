//
// Created by 张国梁 on 2018/7/23.
//

#ifndef XUXIGOUHANSHU_SHAPE_H
#define XUXIGOUHANSHU_SHAPE_H


#include <iostream>
using namespace std;

class Shape {
public:
    Shape();
    virtual ~Shape();
    virtual double calcArea();
};



#endif //XUXIGOUHANSHU_SHAPE_H
