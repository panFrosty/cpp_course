/**
 * @title: Complex numbers class
 * @author: pgorny
 * 
 **/

#include <iostream>
#include <cmath>
#include "Complex.hpp"


std::ostream& operator<<(std::ostream& out, const Complex &complex) {
    out << complex.getReal() << ((complex.getImaginary()>0)?"+i":"-i") << std::abs(complex.getImaginary());
    return out;
}
Complex operator+(const Complex& c1, const Complex& c2){
    return Complex(c1.getReal()+c2.getReal(),c1.getImaginary()+c2.getImaginary());
}

Complex operator+(const Complex& c1, double d){
    return Complex(c1.getReal()+d,c1.getImaginary());
}
Complex operator+(double d,const Complex& c1){
    return Complex(c1.getReal()+d,c1.getImaginary());
}

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

bool Complex::operator==(const Complex& other) const
{
    return ((real == other.real) && (imaginary == other.imaginary));
}

bool Complex::operator!=(const Complex& other) const
{
    return !(*this==other);
}
