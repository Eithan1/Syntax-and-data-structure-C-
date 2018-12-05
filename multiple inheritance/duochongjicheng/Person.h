//
// Created by 张国梁 on 2018/7/20.
//

#ifndef DUOJICHENG_PERSON_H
#define DUOJICHENG_PERSON_H

#include <string>
using namespace std;

class Person {
public:
    Person(string name = "Jim");
    virtual ~Person();
    void play();

protected:
    string m_strName;
};


#endif //DUOJICHENG_PERSON_H
