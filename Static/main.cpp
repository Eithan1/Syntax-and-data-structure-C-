/*
 * 静态数据成员不依赖于对象，依赖于类,而普通数据成员依赖于对象
 * 不实例化对象，静态数据成员仍然存在
 * 静态数据成员实例化单独进行
 * 可通过类直接访问 Tank::
 * 静态成员函数不能调用非静态数据成员或成员函数，而静态成员函数可以调用静态数据成员
 */

 /*
  * 注意事项：
  *    静态数据成员必须单独初始化
  *    静态成员函数不能调用非静态成员函数和非静态数据成员
  *    静态数据成员只有一份，且不依赖对象而存在
  */

#include <iostream>
#include "Tank.h"
using namespace std;

int main() {
    Tank *p = new Tank('A');
    cout << Tank::getCount() << endl;
    Tank *q = new Tank('B');
    cout << q->getCount() << endl;
    delete p;
    delete q;
    cout << Tank::getCount() << endl;

    return 0;
}