#include <iostream>
#include "ComplexNumber.hpp"

using namespace ComplexLib;
using namespace std;
int main()
{
    double a1 = 3.2;
    double b1 = -0.836;
    double a2 = -5.5145;
    double b2 = -2.45334;

    Complex c1(a1,b1); //oppure scrivo direttamente dentro al posto di a1 e b1
    Complex c2(a2,b2);

    cout << "Se a1 vale " << a1 << " e b1 vale " << b1 << ", il numero complesso è: " << c1 << endl;

    cout << "\n" <<"La somma di " << c1 << " e " << c2 << " è: " << "\n" << c1 + c2 << endl;

    if (c1 == c2)
        cout << "\n" << "I due numeri sono uguali" << endl;
    else
        cout << "\n" << "I due numeri sono diversi" << endl;


    cout << "\n" << "Il coniugato di " << c1 << " è " << conj(c1) << endl;

    return 0;
}
