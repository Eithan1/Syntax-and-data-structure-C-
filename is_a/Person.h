//
// Created by 张国梁 on 2018/7/19.
//

#ifndef IS_A_PERSON_H
#define IS_A_PERSON_H

#include <string>
using namespace std;

class Person {
public:
    Person(string name = "Jim");
    virtual ~Person();//使用父类指针释放子类内存
    void play();

protected:
    string m_strName;
};


#endif //IS_A_PERSON_H
