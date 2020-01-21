/**
 * @title: Overloading Plus
 * @author: pgorny
 * 
 **/

#include <iostream>
#include "Complex.hpp"

using namespace std;

int main()
{
    Complex a(3.0, -5.0);
    Complex b(2.0, 5.4);
    Complex c = a + b;
    cout << "Complex number(a) is: " << a << endl;
    cout << "Complex number(b) is: " << b << endl;
    cout << "Complex number(c) is: " << c << endl;
    cout << "Complex number(a+b) is: " << a + b << endl;
    return 0;
}