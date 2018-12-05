//
// Created by 张国梁 on 2018/7/23.
//

#ifndef RTTI_PLANE_H
#define RTTI_PLANE_H

#include <string>
#include "Flyable.h"
using namespace std;

class Plane : public Flyable {
public:
    void carry();
    virtual void takeoff();
    virtual void land();

};


#endif //RTTI_PLANE_H
