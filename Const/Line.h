//
// Created by 张国梁 on 2018/7/15.
//

#ifndef CONST_LINE_H
#define CONST_LINE_H

#include "Coordinate.h"

class Line {
public:
    Line(int x1, int y1, int x2, int y2);
    ~Line();
    void setA(int x, int y);
    void setB(int x, int y);
    void printInfo();
private:
    const Coordinate m_coorA;
    Coordinate m_coorB;
};


#endif //CONST_LINE_H
