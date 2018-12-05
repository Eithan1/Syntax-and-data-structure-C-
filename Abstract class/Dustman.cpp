//
// Created by 张国梁 on 2018/7/23.
//

#include "Dustman.h"
#include <iostream>
using namespace std;

Dustman::Dustman(string name, int age):Worker(name,age) {

}

void Dustman::work() {
    cout << "扫地" << endl;
}