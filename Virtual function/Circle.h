//
// Created by 张国梁 on 2018/7/22.
//

#ifndef XUHANSHU_CIRCLE_H
#define XUHANSHU_CIRCLE_H

#include "Shape.h"

class Circle : public Shape {
public:
    Circle(double r);
    ~Circle();
    virtual double calcArea();

protected:
    double m_dR;
};


#endif //XUHANSHU_CIRCLE_H
