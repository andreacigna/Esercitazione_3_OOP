#include "ComplexNumber.hpp"
#include <iostream>
#include <limits>

namespace ComplexLib{

 Complex operator+(const Complex& c1, const Complex& c2){
    double real = c1.real + c2.real;
    double imaginary = c1.imaginary + c2.imaginary;
    Complex c(real,imaginary);
    return c;
}

 bool operator==(const Complex& c1, const Complex& c2){
     double tolerance = numeric_limits<double>::epsilon(); //imposto la tolleranza al valore della precisione di macchina
     return (std::abs(c1.real - c2.real) < tolerance) && (std::abs(c1.imaginary - c2.imaginary) < tolerance);
 }

ostream& operator<<(ostream& os, const Complex& c){
    if (c.real == 0 && c.imaginary == 0)
        os << 0;
    else if (c.imaginary == 0)
        os << c.real;
    else if (c.real == 0)
        os << c.imaginary << "i";
    else if (c.imaginary < 0)
        os << c.real << "-" << abs(c.imaginary) << "i";
    else
        os << c.real << "+" << abs(c.imaginary) << "i";
    return os;
}

Complex conj(Complex& c1)
{
    c1.imaginary = -c1.imaginary;
    return c1;
}

}
