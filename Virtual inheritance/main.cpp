#include <iostream>
#include "MigrantWorker.h"

int main() {
    MigrantWorker *p = new MigrantWorker("Merry", "200", "yellow");
    p->Farmer::printColor();
    p->Worker::printColor();
    delete(p);
    p = NULL;
    return 0;
}