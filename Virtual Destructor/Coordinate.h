//
// Created by 张国梁 on 2018/7/23.
//

#ifndef XUXIGOUHANSHU_COORDINATE_H
#define XUXIGOUHANSHU_COORDINATE_H


class Coordinate {
public:
    Coordinate(int x, int y);
    virtual ~Coordinate();

private:
    int m_iX;
    int m_iY;
};


#endif //XUXIGOUHANSHU_COORDINATE_H
