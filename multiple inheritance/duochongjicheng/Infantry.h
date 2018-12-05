//
// Created by 张国梁 on 2018/7/20.
//

#ifndef DUOJICHENG_INFANTRY_H
#define DUOJICHENG_INFANTRY_H

#include "Soldier.h"


class Infantry : public Soldier {
public:
    Infantry(string name = "Jack", int age = 30);
    ~Infantry();
    void attack();

};


#endif //DUOJICHENG_INFANTRY_H
