#include <iostream>
#include <stdlib.h>
#include "Line.h"
using namespace std;

int main() {
    Line *p= new Line(1, 2, 3, 4);
    p->printInfof();
    delete p;
    p = NULL;
    cout << sizeof(p) << endl;
    cout << sizeof(Line) << endl;
    return 0;
}