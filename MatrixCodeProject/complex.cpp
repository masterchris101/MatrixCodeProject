#include "complex.h"
#include <stdexcept>

Complex::Complex(double real, double imag) : real(real), imag(imag) {}

Complex Complex::operator+(const Complex& other) const {
    return Complex(real + other.real, imag + other.imag);
}

Complex Complex::operator-(const Complex& other) const {
    return Complex(real - other.real, imag - other.imag);
}

Complex Complex::operator*(const Complex& other) const {
    return Complex(real * other.real - imag * other.imag,
                   real * other.imag + imag * other.real);
}

Complex Complex::operator/(const Complex& other) const {
    if (other.real == 0 && other.imag == 0) {
        throw std::runtime_error("Division by zero.");
    }
    double denom = other.real * other.real + other.imag * other.imag;
    return Complex((real * other.real + imag * other.imag) / denom,
                   (imag * other.real - real * other.imag) / denom);
}

void Complex::print() const {
    std::cout.precision(2);  // Set precision to 2 decimal places
    std::cout << std::fixed; // Ensure fixed-point notation
    std::cout << real << " + " << imag << "i" << std::endl;
}

