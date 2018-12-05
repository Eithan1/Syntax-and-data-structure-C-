//
// Created by 张国梁 on 2018/8/6.
//

#ifndef LIANBIAO_TONGXUNLU_NODE_H
#define LIANBIAO_TONGXUNLU_NODE_H

#include "Person.h"

class Node {

public:
    Person data;  //数据域
    Node *next; //指针域
    void printNode();
};



#endif //LIANBIAO_TONGXUNLU_NODE_H
