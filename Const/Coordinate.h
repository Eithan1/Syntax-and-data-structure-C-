//
// Created by 张国梁 on 2018/7/15.
//

#ifndef CONST_COORDINATE_H
#define CONST_COORDINATE_H


class Coordinate {
public:
    Coordinate(int x, int y);
    ~Coordinate();
    void setX(int x);
    int getX() const;
    void setY(int y);
    int getY() const;

private:
    int m_iX;
    int m_iY;
};


#endif //CONST_COORDINATE_H
