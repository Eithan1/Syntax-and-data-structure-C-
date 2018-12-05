#include <iostream>
#include "MyStack.h"
using namespace std;

int main() {
    MyStack<char> *pStack = new MyStack<char>(30);

    MyStack<char> *pNeedStack = new MyStack<char>(30);

    char str[] = "[()]]";

    char currentNeed = 0;

    for (int i = 0; i < strlen(str); i++) {
        if(str[i] != currentNeed)
        {
            pStack->push(str[i]);
            switch(str[i])
            {
                case '[':
                    if(currentNeed != 0)
                    {
                        pNeedStack->push(currentNeed);
                    }
                    currentNeed = ']';
                    break;
                case '(':
                    if(currentNeed != 0)
                    {
                        pNeedStack->push(currentNeed);
                    }
                    currentNeed = ')';
                    break;
                default:
                    cout << "字符串括号不匹配" << endl;
                    return 0;
            }
        }
        else
        {
            char elem;
            pStack->pop(elem);
            if(pNeedStack->pop(currentNeed))
            {
                currentNeed = 0;
            }
        }
    }

    if(pStack->stackEmpty())
    {
        cout << "字符串括号匹配" << endl;
    }
    else
    {
        cout << "字符串括号不匹配" << endl;
    }

    delete pStack;
    pStack = NULL;

    delete pNeedStack;
    pNeedStack = NULL;
    ;
    return 0;
}