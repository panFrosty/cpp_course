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
    cout << "Complex number(a+b) is: " << a + b + c << endl;
    Complex d(4, 2);
    Complex e = d + 7;
    cout << "Complex number(d+7) is: " << e << endl;
    Complex f(1, 7);
    cout << "Complex number(3.2+f) is: " << 3.2 + f << endl;
    cout << "Complex number(7 + a + b + 8 + 8 + f) is: " << 7 + a + b + 8 + 8 + f << endl;
    return 0;
}