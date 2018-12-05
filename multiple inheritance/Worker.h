//
// Created by 张国梁 on 2018/7/20.
//

#ifndef DUOJICHENG_WORKER_H
#define DUOJICHENG_WORKER_H

#include <string>
using namespace std;


class Worker {
public:
    Worker(string code = "001");
    virtual ~Worker();
    void carry();

protected:
    string m_strCode;
};


#endif //DUOJICHENG_WORKER_H
