//
// Created by 张国梁 on 2018/7/20.
//

#ifndef DUOJICHENG_SOLDIER_H
#define DUOJICHENG_SOLDIER_H

#include "Person.h"
class Soldier : public  Person {
public:
    Soldier(string name = "James", int age = 20);
    virtual ~Soldier();
    void work();

protected:
    int m_iAge;
};


#endif //DUOJICHENG_SOLDIER_H
