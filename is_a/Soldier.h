//
// Created by 张国梁 on 2018/7/19.
//

#ifndef IS_A_SOLDIER_H
#define IS_A_SOLDIER_H

#include <string>
using namespace std;

#include "Person.h"


class Soldier : public Person {
public:
    Soldier(string nmae = "James", int age = 20);
    ~Soldier();
    void work();

protected:
    int m_iAge;
};


#endif //IS_A_SOLDIER_H
