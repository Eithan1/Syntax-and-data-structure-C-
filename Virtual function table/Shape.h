//
// Created by 张国梁 on 2018/7/23.
//

#ifndef XUHANSHUBIAO_SHAPE_H
#define XUHANSHUBIAO_SHAPE_H

#include <iostream>
using namespace std;

class Shape {
public:
    Shape();
    //~Shape();
    virtual ~Shape();
    double calcArea();
    //virtual double calcArea();

};


#endif //XUHANSHUBIAO_SHAPE_H
