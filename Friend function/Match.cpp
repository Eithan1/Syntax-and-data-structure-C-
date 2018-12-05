//
// Created by 张国梁 on 2018/7/24.
//

#include "Match.h"
#include <iostream>
using namespace std;

#include "Time.h"

void Match::printTime(Time &t) {
    cout << t.m_iHour << ":" << t.m_iMinute << ":" << t.m_iSecond << endl;
}