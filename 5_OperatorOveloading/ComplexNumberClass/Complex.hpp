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
    double getReal() const {
        return real;
    }
    double getImaginary() const{
        return imaginary;
    }
private:
    double real;
    double imaginary;
};

std::ostream& operator<<(std::ostream& out, const Complex &complex);














#endif /* COMPLEX_HPP_ */