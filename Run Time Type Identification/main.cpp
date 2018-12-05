/*
 dynamic_cast注意事项：
   1.只能应用于指针和引用的转换
   2.要转换的类型中必须包含虚函数
   3.转换成功返回子类的地址，失败返回NULL

  typeid注意事项
   1.type_id返回一个type_info对象的引用
   2.如果想通过基类的指针获得派生类的数据类型，基类必须带有虚函数
   3.只能获取对象的实际类型
 */

#include "Flyable.h"
#include "Bird.h"
#include "Plane.h"
#include <iostream>
using namespace std;

void doSomething(Flyable *obj)
{
    cout << typeid(*obj).name() << endl;
    obj->takeoff();
    if(typeid(*obj) == typeid(Bird))
    {
        Bird *bird = dynamic_cast<Bird *>(obj);
        bird->foraging();
    }
    if(typeid(*obj) == typeid(Plane))
    {
        Plane *plane = dynamic_cast<Plane *>(obj);
        plane->carry();
    }
    obj->land();

}


int main() {
    Flyable *p = new Bird();
    cout << typeid(p).name() << endl;
    cout << typeid(*p).name() << endl;
    Plane b;
    doSomething(&b);
    return 0;
}