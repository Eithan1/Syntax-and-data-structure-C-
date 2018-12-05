//
// Created by 张国梁 on 2018/7/9.
//

#ifndef CLASSTEST_TEACHER_H
#define CLASSTEST_TEACHER_H

#include <iostream>
#include <string>
using namespace std;

class Teacher {
public:
    Teacher();
    ~Teacher();
    void setName(string _name);
    string getName();
    void setAge(int _age);
    int getAge();
    void study();
    int showGrade();
private:
    string m_strName;
    int m_iAge;
    int grade=0;
};


#endif //CLASSTEST_TEACHER_H
