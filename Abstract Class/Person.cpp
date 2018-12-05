//
// Created by 张国梁 on 2018/7/23.
//

#include "Person.h"

Person::Person(string name) {
    m_strName = name;
}

//只含有纯虚函数的类称为接口类，其子类想要实例化必须实现接口类的功能函数-——像是一种协议。