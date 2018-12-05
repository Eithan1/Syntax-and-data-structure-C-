//
// Created by 张国梁 on 2018/7/23.
//

#ifndef CHOUXIANGLEI_WORKER_H
#define CHOUXIANGLEI_WORKER_H

#include "Person.h"

class Worker : public Person {
public:
    Worker(string name, int age);
    //virtual void work();

private:
    int m_iAge;
};


#endif //CHOUXIANGLEI_WORKER_H
