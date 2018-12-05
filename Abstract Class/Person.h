//
// Created by 张国梁 on 2018/7/23.
//

#ifndef CHOUXIANGLEI_PERSON_H
#define CHOUXIANGLEI_PERSON_H

#include <string>
using namespace std;

class Person {          //抽象类,不能被实例化
public:
    Person(string name);
    virtual void work() = 0;
    virtual ~Person() {}

private:
    string m_strName;
};


#endif //CHOUXIANGLEI_PERSON_H
