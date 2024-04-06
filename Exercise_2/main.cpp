#include "ComplexNumber.hpp"
#include <iostream>

using namespace std;


int main()
{
    ComplexNumber c1(2.5,4.8);
    cout << "c1: " << c1 << endl;

    ComplexNumber c2(2.5,4.8);
    ComplexNumber sum = c1 + c2;
    cout << "Sum: " << sum << endl;

    string c = c1 == c2;
    cout << c << endl;

    ComplexNumber con = conjugate(c1);
    cout << "Conjugate: " << con << endl;

    return 0;
}
