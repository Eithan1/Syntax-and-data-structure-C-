//
// Created by 张国梁 on 2018/8/2.
//

#ifndef ZHAN_LEIMOBAN_COORDINATE_H
#define ZHAN_LEIMOBAN_COORDINATE_H

#include <ostream>
using namespace std;

class Coordinate {

    friend ostream &operator<<(ostream &out, Coordinate &coor);
public:
    Coordinate(int x = 0, int y = 0);
    void printCoordinate();

private:
    int m_iX;
    int m_iY;
};


#endif //ZHAN_LEIMOBAN_COORDINATE_H
