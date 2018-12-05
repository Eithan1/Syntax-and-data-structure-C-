//
// Created by 张国梁 on 2018/7/20.
//

#ifndef DUOJICHENG_MIGRANTWORKER_H
#define DUOJICHENG_MIGRANTWORKER_H

#include "Farmer.h"
#include "Worker.h"

class MigrantWorker : public Farmer, public Worker {
public:
    MigrantWorker(string name, string code);
    ~MigrantWorker();

};


#endif //DUOJICHENG_MIGRANTWORKER_H
