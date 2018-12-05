//
// Created by 张国梁 on 2018/7/19.
//
#include <iostream> //搜索程序默认库
#include "Person.h" //在当前目录下搜素
using namespace std;

Person::Person() {
    m_strName = "Merry";
}

void Person::play() {
    cout << "Person--play()" << endl;
    cout << m_strName << endl;
}