#include <iostream>
#include "Array.h"
using namespace std;

int main() {
    Array arr1(10);
    //arr1.printInfo().setLen(5)->printInfo();
    arr1.printInfo();
    cout << &arr1 << endl;
    //cout << "len = " << arr1.getLen() << endl;
    return 0;
}