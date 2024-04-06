#include "ComplexNumber.hpp"
#include <limits>

ostream& operator<<(ostream& os, const ComplexNumber& c)
{
    if(c.imag == 0)
        os << c.real;
    else if(c.real == 0)
        os << c.imag << "i";
    else if(c.imag == 1)
        os << c.real << "+i";
    else if(c.imag == -1)
        os << c.real << "-i";
    else if(c.imag < 0)
        os << c.real << c.imag << "i";
    else
        os << c.real << "+" << c.imag << "i";
    return os;
}

ComplexNumber operator+(const ComplexNumber& c1, const ComplexNumber& c2)
{
    double r = c1.real + c2.real;
    double i = c1.imag + c2.imag;
    ComplexNumber c(r, i);
    return c;
}

string operator==(const ComplexNumber& c1, ComplexNumber& c2)
{
    std::string c;
    float eps = std::numeric_limits<float>::epsilon();
    if(abs(c1.real - c2.real) < eps  && abs(c1.imag - c2.imag) < eps)
        c = "c1 == c2";
    else
        c = "c1 != c2";
    return c;
}

ComplexNumber conjugate(const ComplexNumber& c)
{
    double r = c.real;
    double i = -c.imag;

    ComplexNumber c1(r,i);
    return c1;
}
