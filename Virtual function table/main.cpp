#include <iostream>
#include "Shape.h"
#include "Circle.h"

int main() {
    Shape shape; //没有数据成员，用一个内存单元来标记存在
    cout << sizeof(Shape) << endl;

    int *p=(int *)&shape;
    cout << p << endl;
    cout << (unsigned int)(*p) << endl;

    Circle circle(100);
    int *q = (int *)&circle;
    cout << q << endl;
    cout << (unsigned int)(*q) << endl;
    q++;
    cout << (unsigned int)(*q) << endl;


    cout << sizeof(circle) << endl;
    return 0;
}