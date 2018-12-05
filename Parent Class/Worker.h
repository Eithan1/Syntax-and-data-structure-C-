//
// Created by 张国梁 on 2018/7/18.
//

#ifndef FULEIZILEI_WORKER_H
#define FULEIZILEI_WORKER_H

#include "Person.h"

class Worker :public Person {  //公有继承
public:
    Worker();
    ~Worker();
    void work();
    int m_iSalary;

};


#endif //FULEIZILEI_WORKER_H
