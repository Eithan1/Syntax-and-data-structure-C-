//
// Created by 张国梁 on 2018/7/25.
//

#ifndef YOUYUANLEI_MATCH_H
#define YOUYUANLEI_MATCH_H

#include "Time.h"


class Match {
public:
    Match(int hour, int min, int sec);
    void testTime();

private:
    Time m_tTimer;
};


#endif //YOUYUANLEI_MATCH_H
