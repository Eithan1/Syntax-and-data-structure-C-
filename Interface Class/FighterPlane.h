//
// Created by 张国梁 on 2018/7/23.
//

#ifndef JIEKOULEI_FIGHTERPLANE_H
#define JIEKOULEI_FIGHTERPLANE_H

#include "Plane.h"

#include <iostream>
using namespace std;


class FighterPlane : public Plane, public Flyable{
public:
    FighterPlane(string code);
    virtual void takeoff();
    virtual void land();
};


#endif //JIEKOULEI_FIGHTERPLANE_H
