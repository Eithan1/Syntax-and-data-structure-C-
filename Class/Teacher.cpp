//
// Created by 张国梁 on 2018/7/9.
//

#include <iostream>
#include <string>
#include "Teacher.h"
using namespace std;

Teacher::Teacher() {};

Teacher::~Teacher() {};

void Teacher::setName(string _name) {
    m_strName=_name;
}

string Teacher::getName() {
    return m_strName;
}

void Teacher::setAge(int _age) {
    m_iAge=_age;
}

int Teacher::getAge() {
    return m_iAge;
}

void Teacher::study() {
    grade+=1;
}

int Teacher::showGrade() {
    return grade;
}