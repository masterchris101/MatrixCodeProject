#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

class Complex {
public:
    Complex(double real = 0.0, double imag = 0.0);
    Complex operator+(const Complex& other) const;
    Complex operator-(const Complex& other) const;
    Complex operator*(const Complex& other) const;
    Complex operator/(const Complex& other) const;
    void print() const;

private:
    double real;
    double imag;
};

#endif

