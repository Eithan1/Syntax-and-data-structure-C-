//
// Created by 张国梁 on 2018/7/18.
//

#ifndef FULEIZILEI_PERSON_H
#define FULEIZILEI_PERSON_H

#include <string>
using namespace std;

class Person {
public:
    Person();
    ~Person();
    void eat();

private:
    string m_strName;
    int m_iAge;
};


#endif //FULEIZILEI_PERSON_H
