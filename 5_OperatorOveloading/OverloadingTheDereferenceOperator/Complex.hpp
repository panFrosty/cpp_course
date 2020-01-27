/**
 * @title: Complex numbers class
 * @author: pgorny
 * 
 **/


#ifndef COMPLEX_HPP_
#define COMPLEX_HPP_

#include <iostream>

class Complex{
public:
    Complex();
    Complex(double real, double imaginary);
    Complex(const Complex& other); // Copy constructor
    
    const Complex& operator=(const Complex& other);
    bool operator==(const Complex& other) const;
    bool operator!=(const Complex& other) const;
    Complex operator*() const;

    double getReal() const {
        return real;
    }
    double getImaginary() const {
        return imaginary;
    }
private:
    double real;
    double imaginary;
};


std::ostream& operator<<(std::ostream& out, const Complex &complex);
Complex operator+(const Complex& c1, const Complex& c2);
Complex operator+(const Complex& c1, double d);
Complex operator+(double d, const Complex& c1);












#endif /* COMPLEX_HPP_ */