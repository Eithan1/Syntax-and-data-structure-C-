/*
 * 栈是一种机制：LIFO:last in first out
 *
 */

 /*
  *
  * 栈类
  * 要求：
  *     MyStack(int size);   //分配内存初始化栈空间，设定栈容量，栈顶
  *     ～MyStack();         //回收栈空间内存
  *     bool stackEmpty();   //判断栈是否为空，为空返回true，非空返回false
  *     bool stackFull();    //判断栈是否为满，为满返回true，非满返回false
  *     void clearStack();   //清空栈
  *     int stackLength();   //已有元素的个数
  *     void push(char elem); //元素入栈，栈顶上升
  *     char pop(char &elem); //元素出栈，栈顶下降
  *     void stackTraverse(); //遍历栈中所有元素
  */


#include <iostream>
#include "MyStack.h"
using namespace std;

int main() {
    MyStack *pStack = new MyStack(5);

    pStack->push('h');  //底
    pStack->push('e');
    pStack->push('l');
    pStack->push('l');
    pStack->push('o');  //顶

    pStack->stackTraverse(true);

    char elem = 0;
    pStack->pop(elem);

    cout << endl;
    cout << elem << endl;

    //pStack->clearStack();

    pStack->stackTraverse(false);

    cout << pStack->stackLength() << endl;

    if(pStack->stackEmpty())
    {
        cout << "栈为空" << endl;
    }

    if(pStack->stackFull())
    {
        cout << "栈为满" << endl;
    }

    delete(pStack);
    pStack = NULL;

    return 0;
}