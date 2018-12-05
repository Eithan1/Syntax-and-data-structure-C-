//
// Created by 张国梁 on 2018/7/23.
//

#ifndef XUXIGOUHANSHU_CIRCLE_H
#define XUXIGOUHANSHU_CIRCLE_H


#include "Shape.h"
#include "Coordinate.h"
#include "Coordinate.h"

class Circle : public Shape {
public:
    Circle(double r);
    virtual ~Circle();
    virtual double calcArea();

protected:
    double m_dR;
    Coordinate *m_pCenter;
};



#endif //XUXIGOUHANSHU_CIRCLE_H
