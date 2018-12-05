//
// Created by 张国梁 on 2018/7/14.
//

#ifndef DUIXIANGCHENGYUANZHIZHEN_LINE_H
#define DUIXIANGCHENGYUANZHIZHEN_LINE_H


#include "Coordinate.h"

class Line {
public:
    Line(int x1, int y1, int x2, int y2);
    ~Line();
    void printInfof();

private:
    Coordinate *m_pCoorA;
    Coordinate *m_pCoorB;
};


#endif //DUIXIANGCHENGYUANZHIZHEN_LINE_H
