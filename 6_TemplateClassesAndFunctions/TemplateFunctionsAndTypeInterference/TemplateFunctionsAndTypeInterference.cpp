/**
 * @title: Template Functions and Type Interference
 * @author: pgorny
 * 
 **/

#include <iostream>

using namespace std;

template<class T>
void print(T n)
{
    cout << "Template version: "<< n << endl;
}

void print(int value)
{
    cout << "Non-template version: " << value << endl; 
}

template <class T>
void show()
{
    cout << T() << endl;
}


int main()
{
    print<string>("Hello");
    print<int>(5);

    print("Hello there");
    print<>(5);
    show<double>();
    return 0;
}