#ifndef TEMAPOO2_COMPLEX_H
#define TEMAPOO2_COMPLEX_H
#include <iostream>

class Complex
{
    float real, imaginar;
public:
    // constructor de initializare:
    explicit Complex(float re = 0, float im = 0);

    // constructor de copiere:
    Complex(const Complex& ob);

    //destuctor:
    ~Complex();

    //supraincarcare =:
    Complex& operator=(const Complex&);

    friend std::istream& operator >> (std::istream& in, Complex& nr);
    friend std::ostream& operator << (std::ostream& out, Complex& nr);
};

#endif //! TEMAPOO2_COMPLEX_H
