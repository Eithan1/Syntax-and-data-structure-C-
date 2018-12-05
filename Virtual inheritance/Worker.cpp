//
// Created by 张国梁 on 2018/7/20.
//

#include "Worker.h"
#include <iostream>
using namespace std;

Worker::Worker(string code, string color) :Person("Worker"+color)
{
    m_strCode = code;
    cout << "Worker()" << endl;
}

Worker::~Worker() {
    cout << "~Worker" << endl;
}

void Worker::carry() {
    cout << m_strCode << endl;
    cout << "Worker == carry()" << endl;
}