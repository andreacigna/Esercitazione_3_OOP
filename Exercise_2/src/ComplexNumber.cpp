#include "ComplexNumber.hpp"
#include <iostream>

namespace ComplexLib{

 Complex operator+(const Complex& c1, const Complex& c2){
    double real = c1.real + c2.real;
    double imaginary = c1.imaginary + c2.imaginary;
    Complex c(real,imaginary);
    return c;
}

 bool operator==(const Complex& c1, const Complex& c2){
     return (abs(c1.real-c2.real)<=pow(10,-15) && abs(c1.imaginary-c2.imaginary)<=pow(10,-15));
 }

ostream& operator<<(ostream& os, const Complex& c){
    if (c.real == 0 && c.imaginary == 0)
        os << 0;
    else if (c.imaginary == 0)
        os << c.real;
    else if (c.real == 0)
        os << c.imaginary << "i";
    else if (c.imaginary < 0)
        os << c.real << " - " << abs(c.imaginary) << "i";
    else
        os << c.real << " + " << abs(c.imaginary) << "i";
    return os;
}

Complex conj(Complex& c1)
{
    c1.imaginary = -c1.imaginary;
    return c1;
}

}
