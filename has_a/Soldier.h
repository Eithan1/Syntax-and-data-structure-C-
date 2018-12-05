//
// Created by 张国梁 on 2018/7/18.
//

#ifndef HAS_A_SOLDIER_H
#define HAS_A_SOLDIER_H

#include "Person.h"

class Soldier : private Person {
public:
    Soldier();
    void work();

protected:
    int m_iAge;
};


#endif //HAS_A_SOLDIER_H
