#include <iostream>
#include <string>
#include "Teacher.h"
using namespace std;

int main() {
    Teacher t;
    t.setAge(22);
    t.setName("Mr Zhang");
    t.study();
    cout<<t.getName()<<" "<<t.getAge()<<" "<<t.showGrade();
    return 0;
}