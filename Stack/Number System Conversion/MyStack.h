//
// Created by 张国梁 on 2018/8/3.
//

#ifndef ZHANYINGYONG_SHUZHIZHUANHUAN_MYSTACK_H
#define ZHANYINGYONG_SHUZHIZHUANHUAN_MYSTACK_H


#include <iostream>
using namespace std;

template <typename T>
class MyStack {
public:
    MyStack(int size);   //分配内存初始化栈空间，设定栈容量，栈顶
    ~MyStack();         //回收栈空间内存
    bool stackEmpty();   //判断栈是否为空，为空返回true，非空返回false
    bool stackFull();    //判断栈是否为满，为满返回true，非满返回false
    void clearStack();   //清空栈
    int stackLength();   //已有元素的个数
    bool push(T elem); //元素入栈，栈顶上升
    bool pop(T &elem); //元素出栈，栈顶下降
    void stackTraverse(bool isFromButtom); //遍历栈中所有元素
private:
    T *m_pBuffer;   //栈空间指针
    int m_iSize;       //栈容量
    int m_iTop;        //栈顶，栈中元素个数
};

template <typename T>
MyStack<T>::MyStack(int size) {
    m_iSize = size;
    m_pBuffer = new T[m_iSize]; //默认构造函数
    m_iTop = 0;
}

template <typename T>
MyStack<T>::~MyStack() {
    delete []m_pBuffer;
    m_pBuffer = NULL;
}

template <typename T>
bool MyStack<T>::stackEmpty() {
    if(m_iTop == 0) //if(0 == m_iTop)
    {
        return true;
    }
    return false;
}

template <typename T>
bool MyStack<T>::stackFull() {
    if(m_iTop == m_iSize) //>=
    {
        return true;
    }
    return false;
}

template <typename T>
void MyStack<T>::clearStack() {
    m_iTop = 0;
}

template <typename T>
int MyStack<T>::stackLength() {
    return m_iTop;
}

template <typename T>
bool MyStack<T>::push(T elem) {
    if(stackFull())
    {
        return false;
    }
    m_pBuffer[m_iTop] = elem;  //默认拷贝构造函数
    m_iTop++;
    return true;
}

template <typename T>
bool MyStack<T>::pop(T &elem) {
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

template <typename T>
void MyStack<T>::stackTraverse(bool isFromButtom) {
    if(isFromButtom)
    {
        for (int i = 0; i < m_iTop; i++) {
            cout << m_pBuffer[i];
        }
    }
    else

        for (int j = m_iTop-1; j >= 0 ; j--) {
            cout << m_pBuffer[j];
        }
}


#endif //ZHANYINGYONG_SHUZHIZHUANHUAN_MYSTACK_H
