#ifndef __COMPLEXNUMBER_H
#define __COMPLEXNUMBER_H

#include <iostream>

using namespace std;

struct ComplexNumber
{

    double real;
    double imag;

    ComplexNumber(double a, double b)
    {
        real = a;
        imag = b;
    }

};

ostream& operator<<(ostream &os, const ComplexNumber &r);

ComplexNumber operator+(const ComplexNumber &c1, const ComplexNumber &c2);

string operator==(const ComplexNumber& c1, ComplexNumber& c2);

ComplexNumber conjugate(const ComplexNumber& c);

#endif
