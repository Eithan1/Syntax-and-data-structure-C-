/*
 * 类模版本身不会产生代码
 * 只有实例化的时候会产生代码
 * 特别提醒：模版代码不能分离编译
 */




#include <iostream>
#include "MyArray.h"

int main() {
    MyArray<int, 5, 6> arr;
    arr.display();

    return 0;
}