//
// Created by 张国梁 on 2018/7/23.
//

#ifndef CHOUXIANGLEI_DUSTMAN_H
#define CHOUXIANGLEI_DUSTMAN_H

#include "Worker.h"

class Dustman : public Worker {
public:
    Dustman(string name, int age);
    virtual void work();
};


#endif //CHOUXIANGLEI_DUSTMAN_H
