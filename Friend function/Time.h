//
// Created by 张国梁 on 2018/7/24.
//

#ifndef YOUYUANHANSHU_TIME_H
#define YOUYUANHANSHU_TIME_H

#include <iostream>
using namespace std;

#include "Match.h"

class Time {
    friend void Match::printTime(Time &t);

public:
    Time(int hour, int min, int sec);

private:
    int m_iHour;
    int m_iMinute;
    int m_iSecond;
};


#endif //YOUYUANHANSHU_TIME_H
