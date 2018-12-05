//
// Created by 张国梁 on 2018/7/20.
//

#ifndef XUJICHENG_WORKER_H
#define XUJICHENG_WORKER_H

#include <string>
#include "Person.h"
using namespace std;


class Worker : virtual public Person {
public:
    Worker(string code = "001", string color = "blue");
    virtual ~Worker();
    void carry();

protected:
    string m_strCode;
};


#endif //XUJICHENG_WORKER_H
