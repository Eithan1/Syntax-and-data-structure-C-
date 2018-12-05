//
// Created by 张国梁 on 2018/8/5.
//

#ifndef SHUNXUBIAO_COORDINATE_H
#define SHUNXUBIAO_COORDINATE_H


#include <ostream>
using namespace std;

class Coordinate {

    friend ostream &operator<<(ostream &out, Coordinate &coor);
public:
    Coordinate(int x = 0, int y = 0);
    void printCoordinate();
    bool operator==(Coordinate &coor);
private:
    int m_iX;
    int m_iY;
};



#endif //SHUNXUBIAO_COORDINATE_H
