//
// Created by 张国梁 on 2018/7/30.
//

#ifndef DUILIE_CUSTOMER_H
#define DUILIE_CUSTOMER_H

#include <string>
using namespace std;

class Customer {
public:
    Customer(string name = "", int age = 0);
    void printInfo() const;

private:
    string m_strName;
    int m_iAge;
};


#endif //DUILIE_CUSTOMER_H
