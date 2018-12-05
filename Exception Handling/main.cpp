/*
 * 常见异常：
 *  1.数组下标越界
 *  2.除数为0
 *  3.内存不足
 */

#include <iostream>
#include "IndexException.h"
using namespace std;

void test()
{
    throw IndexException();
}

int main() {
    try {
        test();
    }
    catch(...)
    {
        cout << "Exception" << endl;
    }

    return 0;
}