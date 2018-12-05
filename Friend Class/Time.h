//
// Created by 张国梁 on 2018/7/25.
//

#ifndef YOUYUANLEI_TIME_H
#define YOUYUANLEI_TIME_H
class Match;

class Time {
    friend Match;
public:
    Time(int hour, int min, int sec);

private:
    void printTime();
    int m_iHour;
    int m_iMinute;
    int m_iSecond;
};


#endif //YOUYUANLEI_TIME_H
