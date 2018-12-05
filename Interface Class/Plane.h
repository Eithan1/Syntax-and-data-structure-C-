//
// Created by 张国梁 on 2018/7/23.
//

#ifndef JIEKOULEI_PLANE_H
#define JIEKOULEI_PLANE_H

#include <string>
#include "Flyable.h"
using namespace std;

class Plane {
public:
    Plane(string code);
//    virtual void takeoff();
//    virtual void land();
    void printCode();

private:
    string m_strCode;
};


#endif //JIEKOULEI_PLANE_H
