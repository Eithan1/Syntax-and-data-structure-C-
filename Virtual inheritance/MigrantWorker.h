//
// Created by 张国梁 on 2018/7/20.
//

#ifndef XUJICHENG_MIGRANTWORKER_H
#define XUJICHENG_MIGRANTWORKER_H

#include "Worker.h"
#include "Farmer.h"

class MigrantWorker: public Farmer, public Worker {
public:
    MigrantWorker(string name, string code, string color);
    ~MigrantWorker();

};


#endif //XUJICHENG_MIGRANTWORKER_H
