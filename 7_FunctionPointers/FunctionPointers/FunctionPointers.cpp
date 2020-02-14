/**
 * @title: Function Pointers
 * @author: pgorny
 * 
 **/

#include <iostream>

using namespace std;

typedef void (*callback_fn)(int);

void test(int a)
{
    cout << "Hello" << a << endl;
}

void testWithCallback(callback_fn callback, int integer)
{
    cout << "testWithCallback" << endl;
    callback(integer);
}

int main()
{
    test(2);
    callback_fn function = test;
    testWithCallback(function, 999);
    return 0;
}