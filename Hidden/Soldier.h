//
// Created by 张国梁 on 2018/7/19.
//

#ifndef YINCANG_SOLDIER_H
#define YINCANG_SOLDIER_H

#include "Person.h"
#include <string>

class Soldier : public Person {
public:
    Soldier();
    void play(int x);
    void work();

protected:
    string m_strName;
};


#endif //YINCANG_SOLDIER_H
