//
// Created by 张国梁 on 2018/7/23.
//

#ifndef JIEKOULEI_FLYABLE_H
#define JIEKOULEI_FLYABLE_H


class Flyable {       //接口类,不能被实例化
public:
    virtual void takeoff() = 0;
    virtual void land() = 0;
};


#endif //JIEKOULEI_FLYABLE_H
