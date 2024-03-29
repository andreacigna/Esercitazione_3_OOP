#include <iostream>
#include <cmath>

#pragma once
using namespace std;

namespace ComplexLib{
struct Complex{
    double real;
    double imaginary;

    //costruttori
    Complex() = default;

    Complex(double a, double b){
        real = a;
        imaginary = b;
    }
};

Complex operator+(const Complex& c1, const Complex& c2);
bool operator==(const Complex& c1, const Complex& c2);
ostream& operator<<(ostream& os, const Complex& c);

Complex conj(Complex& c1);

}
