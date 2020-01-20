/**
 * @title: Vectors and Memory
 * @author: pgorny
 * 
 **/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<double> numbers(0);

    cout << "Size of Vector: " << numbers.size() << endl;

    int capacity = numbers.capacity();
    cout << "Capacity of Vector: " << capacity << endl;
    for (int i = 0; i < 10000; i++)
    {
        if (numbers.capacity() != capacity)
        {
            capacity = numbers.capacity();
            cout << "Capacity of Vector: " << capacity << endl;
        }
        numbers.push_back(static_cast<double>(i));
    }
    numbers.reserve(100000);
    cout << numbers[2] << endl;
    cout << "Size of Vector: " << numbers.size() << endl;
    cout << "Capacity of Vector: " << numbers.capacity() << endl;
    
    return 0;
}