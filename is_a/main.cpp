#include <iostream>
#include "Soldier.h"
#include <stdlib.h>

void test1(Person p)
{
    p.play();
}

void test2(Person &p)
{
    p.play();
}

void test3(Person *p)
{
    p->play();
}

int main() {
    //Soldier soldier;
   Person p;
   Soldier s;
   test3(&p);
   test3(&s);
    return 0;
}