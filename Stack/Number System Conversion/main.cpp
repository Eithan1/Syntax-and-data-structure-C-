#include <iostream>
#include "MyStack.h"
using namespace std;

#define BINARY 2
#define OCTONARY 8
#define HEXADECTMAL 16
int main() {

    char num[] = "0123456789ABCDEF";

    MyStack<int> *pStack = new MyStack<int>(30);

    int N=2016;
    int mod = 0;

    while(N != 0)
    {
        mod = N % HEXADECTMAL;
        pStack->push(mod);
        N = N / HEXADECTMAL;
    }

    //pStack->stackTraverse(false);

//    for (int i = pStack->stackLength() - 1; i >= 0; i--) {
//        num[pStack[i]]
//    }

    while(!pStack->stackEmpty())
    {
        int elem = 0;
        pStack->pop(elem);
        cout << num[elem];
    }


    delete pStack;
    pStack = NULL;
    return 0;
}