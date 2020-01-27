/**
 * @title: Overloading The Dereference Operator
 * @author: pgorny
 * 
 **/

#include <iostream>
#include "Complex.hpp"

using namespace std;

int main()
{
    Complex c1(3,1);
   
    cout << (*c1) + *Complex(3,2) << endl;    
}