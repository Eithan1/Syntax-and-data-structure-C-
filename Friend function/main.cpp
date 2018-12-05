/*
 * 友元全局函数
 * 友元成员函数
 */

#include <iostream>
#include "Time.h"
#include "Match.h"

using namespace std;

//void printTime(Time &t);

int main() {
    Time t(6,34,25);
    Match m;
    m.printTime(t);

    return 0;
}

//void printTime(Time &t)
//{
//    cout << t.m_iHour << ":" << t.m_iMinute << ":" << t.m_iSecond << endl;  //声明友元函数可访问私有数据成员
//}