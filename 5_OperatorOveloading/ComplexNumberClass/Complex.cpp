/**
 * @title: Complex numbers class
 * @author: pgorny
 * 
 **/

#include <iostream>
#include <cmath>
#include "Complex.hpp"


Complex::Complex():real(0.0),imaginary(0.0)
{

}

Complex::Complex(double real, double imaginary):real(real),imaginary(imaginary)
{
    
}

Complex::Complex(const Complex& complex)
{
    std::cout << "Copy" << std::endl;
    *this = complex;
}

const Complex& Complex::operator=(const Complex& other)
{
    real = other.real;
    imaginary = other.imaginary;
    return *this;
}

std::ostream& operator<<(std::ostream& out, const Complex &complex) {
    out << complex.getReal() << ((complex.getImaginary()>0)?"+i":"-i") << std::abs(complex.getImaginary());
    return out;
}