#include <iostream>
#include "ComplexNumber.hpp"

using namespace ComplexLib;
using namespace std;
int main()
{
    double a1 = 8.3462;
    double b1 = 0.322;
    double a2 = -3.45335;
    double b2 = -7.347323;

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
