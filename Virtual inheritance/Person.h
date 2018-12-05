//
// Created by 张国梁 on 2018/7/20.
//

#ifndef XUJICHENG_PERSON_H
#define XUJICHENG_PERSON_H

#include <string>
using namespace std;

class Person {
public:
    Person(string color = "blue");
    virtual ~Person();
    void printColor();

protected:
    string m_strColor;
};


#endif //XUJICHENG_PERSON_H
