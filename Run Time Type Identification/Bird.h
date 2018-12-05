//
// Created by 张国梁 on 2018/7/23.
//

#ifndef RTTI_BIRD_H
#define RTTI_BIRD_H

#include "Flyable.h"
#include <string>
using namespace std;

class Bird : public Flyable {
public:
    void foraging();
    virtual void takeoff();
    virtual void land();
};


#endif //RTTI_BIRD_H
