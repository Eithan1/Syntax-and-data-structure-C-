//
// Created by 张国梁 on 2018/7/23.
//

#ifndef XUHANSHUBIAO_CIRCLE_H
#define XUHANSHUBIAO_CIRCLE_H

#include "Shape.h"
//#include "Coordinate.h"
class Circle : public Shape {
public:
    Circle(int r);
    ~Circle();

protected:
    int m_iR;
};


#endif //XUHANSHUBIAO_CIRCLE_H
