//
// Created by 张国梁 on 2018/7/23.
//

#include "Worker.h"
#include <iostream>
using namespace std;

Worker::Worker(string name, int age) :Person(name) {
    m_iAge = age;
}

//void Worker::work() {
//    cout << "work" << endl;
//}