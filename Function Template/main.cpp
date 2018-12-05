/*
 * 函数模版
 * 把类型作为参数
 * 关键字： template typename class     typename和class可以混用
 *
 * 函数模版本身不是重载关系，只有使用的时候才会产生函数代码
 */



#include <iostream>
using namespace std;

template <typename T>    //函数模版
void display(T a)
{
    cout << a << endl;
}

template <typename T, class S>
void display(T t, S s)
{
    cout << t << endl;
    cout << s << endl;
}

template <typename T, int KSize>
void display(T a)
{
    for(int i=0; i < KSize; i++)
    {
        cout << a << endl;
    }
};

int main() {
    // display<double>(10.89);   //模版函数
    //display<int, double>(5, 8.3);
    display<int, 5>(6);
    return 0;
}