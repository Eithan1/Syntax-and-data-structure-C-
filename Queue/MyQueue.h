//
// Created by 张国梁 on 2018/7/29.
// 环形队列C++实现
//

#ifndef DUILIE_MYQUEUE_H
#define DUILIE_MYQUEUE_H

#include "Customer.h"

class MyQueue {

public:
    MyQueue(int queueCapacity);  //InitQueue(&Q) 创建队列
    virtual ~MyQueue();         //DestroyQueue(&Q) 销毁队列
    void ClearQueue();          //ClearQueue(&Q   清空队列
    bool QueueEmpty() const;    //QueueEmpty(Q)   判空队列
    bool QueueFull() const;
    int QueueLength() const;    //QueueLength(Q) 队列长度
    bool EnQueue(Customer element);  //EnQueue(&Q,element) 新元素入队
    bool DeQueue(Customer &element); //DeQueue(&Q,&element) 首元素出队
    void QueueTraverse();       //QueueTraverse(Q,visit()) 遍历队列
private:
    Customer *m_pQueue;              //队列数组指针
    int m_iQueueLen;            //队列元素个数
    int m_iQueueCapacity;       //队列数组容量
    int m_iHead;
    int m_iTail;
};


#endif //DUILIE_MYQUEUE_H
