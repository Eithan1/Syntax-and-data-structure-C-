//
// Created by 张国梁 on 2018/7/25.
//

#ifndef JINGTAI_TANK_H
#define JINGTAI_TANK_H


class Tank {
public:
    Tank(char code);
    ~Tank();
    void fire();
    static int getCount();

private:
    static int s_iCount;
    char m_cCode;

};


#endif //JINGTAI_TANK_H
