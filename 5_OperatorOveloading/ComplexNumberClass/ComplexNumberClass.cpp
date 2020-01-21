/**
 * @title: Printing - Overloading Left Bit Shift
 * @author: pgorny
 * 
 **/

#include <iostream>
#include "Complex.hpp"

using namespace std;

int main()
{
    Complex a(3.0,-5.0);
    Complex b(2.0,5.4);
    Complex c = b;
    b = a;
    cout << "Complex number(a) is: " << a << endl;
    cout << "Complex number(b) is: " << b << endl;
    cout << "Complex number(c) is: " << c << endl;
    return 0;
}