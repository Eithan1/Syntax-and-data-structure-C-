//
// Created by 张国梁 on 2018/8/2.
//

#include "MyStack.h"
#include <iostream>
using namespace std;

MyStack::MyStack(int size) {
    m_iSize = size;
    m_pBuffer = new Coordinate[m_iSize]; //默认构造函数
    m_iTop = 0;
}

MyStack::~MyStack() {
    delete []m_pBuffer;
    m_pBuffer = NULL;
}

bool MyStack::stackEmpty() {
    if(m_iTop == 0) //if(0 == m_iTop)
    {
        return true;
    }
    return false;
}

bool MyStack::stackFull() {
    if(m_iTop == m_iSize) //>=
    {
        return true;
    }
    return false;
}

void MyStack::clearStack() {
    m_iTop = 0;
}

int MyStack::stackLength() {
    return m_iTop;
}

bool MyStack::push(Coordinate elem) {
    if(stackFull())
    {
        return false;
    }
    m_pBuffer[m_iTop] = elem;  //默认拷贝构造函数
    m_iTop++;
    return true;
}

bool MyStack::pop(Coordinate &elem) {
    if(stackEmpty())
    {
        return false;
    }
    m_iTop--;
    elem = m_pBuffer[m_iTop];
    return true;
}

//char MyStack::pop() {
//    if(stackEmpty())
//    {
//        throw 1;
//    }
//    else
//    {
//        m_iTop--;
//        return m_pBuffer[m_iTop];
//    }
//}

void MyStack::stackTraverse(bool isFromButtom) {
    if(isFromButtom)
    {
        for (int i = 0; i < m_iTop; i++) {
            m_pBuffer[i].printCoordinate();
        }
    }
    else

        for (int j = m_iTop-1; j >= 0 ; j--) {
            m_pBuffer[j].printCoordinate();
        }
}
