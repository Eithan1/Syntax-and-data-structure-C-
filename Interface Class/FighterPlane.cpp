//
// Created by 张国梁 on 2018/7/23.
//

#include "FighterPlane.h"
#include <iostream>
using namespace std;

FighterPlane::FighterPlane(string code):Plane(code) {   //初始化列表

}

void FighterPlane::takeoff() {
    cout << "FighterPlane--takeoff" << endl;
}

void FighterPlane::land() {
    cout << "FighterPlane--land" << endl;
}