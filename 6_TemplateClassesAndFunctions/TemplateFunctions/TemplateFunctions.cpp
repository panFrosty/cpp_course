/**
 * @title: Templates Functions
 * @author: pgorny
 * 
 **/

#include <iostream>

using namespace std;

template<typename T>
void print(T n)
{
    cout << n << endl;
}

void print(const char* buffer)
{
    cout << "Buffer: " << buffer << endl; 
}


int main()
{
    print<string>("Hello");
    print<int>(5);

    print("Hello there");
    const char * TEST_STRING = "Test";
    print(TEST_STRING);
    return 0;
}