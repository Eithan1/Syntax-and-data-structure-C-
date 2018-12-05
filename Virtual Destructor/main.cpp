
#include <iostream>
#include "Shape.h"
#include "Rect.h"
#include "Circle.h"

int main() {
    Shape *shape1 = new Rect(3,6);
    Shape *shape2 = new Circle(5);

    shape1 -> calcArea();
    shape2 -> calcArea();

    delete(shape1);
    shape1 = NULL;
    delete(shape2);
    shape2 = NULL;

    return 0;
}