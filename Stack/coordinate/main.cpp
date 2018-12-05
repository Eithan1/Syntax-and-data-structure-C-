#include <iostream>

#include <iostream>
#include "MyStack.h"
using namespace std;

int main() {
    MyStack *pStack = new MyStack(5);

    pStack->push(Coordinate(1,2));  //底
    pStack->push(Coordinate(3,4));

    pStack->stackTraverse(true);

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