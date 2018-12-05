//
// Created by 张国梁 on 2018/7/23.
//

#ifndef XUXIGOUHANSHU_RECT_H
#define XUXIGOUHANSHU_RECT_H


#include "Shape.h"

class Rect : public Shape {
public:
    Rect(double width, double height);
    virtual ~Rect();
    virtual double calcArea();

protected:
    double m_dWidth;
    double m_dHeight;
};



#endif //XUXIGOUHANSHU_RECT_H
