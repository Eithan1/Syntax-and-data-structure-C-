#include <iostream>

#include <iostream>
#include "MyStack.h"
#include "Coordinate.h"
using namespace std;

int main() {
    MyStack<char> *pStack = new MyStack<char>(5);

    pStack->push('h');  //底
    pStack->push('l');

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