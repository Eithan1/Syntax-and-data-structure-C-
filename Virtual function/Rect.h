//
// Created by 张国梁 on 2018/7/22.
//

#ifndef XUHANSHU_RECT_H
#define XUHANSHU_RECT_H

#include "Shape.h"

class Rect : public Shape {
public:
    Rect(double width, double height);
    ~Rect();
    virtual double calcArea();

protected:
    double m_dWidth;
    double m_dHeight;
};


#endif //XUHANSHU_RECT_H
