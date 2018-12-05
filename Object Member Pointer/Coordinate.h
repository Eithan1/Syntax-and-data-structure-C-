//
// Created by 张国梁 on 2018/7/14.
//

#ifndef DUIXIANGCHENGYUANZHIZHEN_COORDINATE_H
#define DUIXIANGCHENGYUANZHIZHEN_COORDINATE_H


class Coordinate {
public:
    Coordinate(int x, int y);
    ~Coordinate();
    int getX();
    int getY();
private:
    int m_iX;
    int m_iY;
};


#endif //DUIXIANGCHENGYUANZHIZHEN_COORDINATE_H
