/*
 * 队列：先入先出 FIFO(Fist In First Out)
 *     分为 1、普通队列  2、环形队列（顺时针/逆时针）：可以充分利用储存空间
 *
 * 队列的用途：
 *    自动排号机
 */




#include <iostream>
#include "MyQueue.h"
#include "Customer.h"
using namespace std;

int main() {
//    MyQueue *p = new MyQueue(4);
//
//    p->EnQueue(10);
//    p->EnQueue(12);
//    p->EnQueue(16);
//    p->EnQueue(18);
////    p->EnQueue(20);
//
//    int e = 0;
//    p->DeQueue(e);
//    cout << endl;
//    cout << e << endl;
//
//
//    p->DeQueue(e);
//    cout << endl;
//    cout << e << endl;
//    cout << endl;
//    p->QueueTraverse();
//
//    p->ClearQueue();
//    p->QueueTraverse();
//
//    p->EnQueue(20);
//    p->EnQueue(30);
//    p->QueueTraverse();
//
//    delete p;
//    p = NULL;

    MyQueue *p = new MyQueue(4);
    Customer c1("zhangsan", 20);
    Customer c2("lisi", 30);
    Customer c3("wangwu", 24);

    p->EnQueue(c1);
    p->EnQueue(c2);
    p->EnQueue(c3);

    p->QueueTraverse();

    Customer c4("", 0);
    p->DeQueue(c4);
    c4.printInfo();

    p->QueueTraverse();

    return 0;
}