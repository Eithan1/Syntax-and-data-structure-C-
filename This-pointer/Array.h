//
// Created by 张国梁 on 2018/7/14.
//

#ifndef THIS_ZHIZHEN_ARRAY_H
#define THIS_ZHIZHEN_ARRAY_H


class Array {
public:
    Array(int len);
    ~Array();
    Array* setLen(int len);
    int getLen();
    Array& printInfo();
private:
    int len;
};


#endif //THIS_ZHIZHEN_ARRAY_H
