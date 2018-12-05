//
// Created by 张国梁 on 2018/7/20.
//

#ifndef XUJICHENG_FARMER_H  //通过宏定义来解决重定义
#define XUJICHENG_FARMER_H

#include <string>
#include "Person.h"
using namespace std;

class Farmer : virtual public Person {
public:
    Farmer(string name = "Jack", string color = "blue");
    virtual ~Farmer();
    void sow();

protected:
    string m_strName;

};


#endif //XUJICHENG_FARMER_H
