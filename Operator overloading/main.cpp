#include <iostream>
using namespace std;

class Complex{
public:
    Complex(double r = 0.0, double i = 0.0){
        real = r;
        imaginary = i;
    }
    Complex operator+(const Complex ope2);             //成员函数重载
    double real;
    double imaginary;
};

//Complex operator+(const Complex &a, const Complex &b){                 //普通函数重载
//    return Complex(a.real + b.real, a.imaginary + b.imaginary);
//}

Complex Complex::operator+(const Complex ope2) {
    return Complex(real + ope2.real, imaginary + ope2.imaginary);
}

int main() {
    Complex a(1, 2);
    Complex b(2, 3), c;
    c = a + b;
    cout << c.real << c.imaginary << endl;
    return 0;
}
