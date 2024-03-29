#include <iostream>
#include "ComplexNumber.hpp"

using namespace ComplexLib;
using namespace std;
int main()
{
    Complex c1(0,0.836);
    Complex c2(0,-4.892);

    cout << "La somma di " << c1 << " e " << c2 << " è: " << "\n" << c1 + c2 << endl;

    if (c1 == c2)
        cout << "\n" << "I due numeri sono uguali" << endl;
    else
        cout << "\n" << "I due numeri sono diversi" << endl;


    cout << "\n" << "Il coniugato di " << c1 << " è " << conj(c1) << endl;

    return 0;
}
