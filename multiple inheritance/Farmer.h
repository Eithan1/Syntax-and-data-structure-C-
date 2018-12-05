//
// Created by 张国梁 on 2018/7/20.
//

#ifndef DUOJICHENG_FARMER_H
#define DUOJICHENG_FARMER_H

#include <string>
using namespace std;

class Farmer {
public:
    Farmer(string name = "Jack");
    virtual ~Farmer();
    void sow();

protected:
    string m_strName;
};


#endif //DUOJICHENG_FARMER_H
