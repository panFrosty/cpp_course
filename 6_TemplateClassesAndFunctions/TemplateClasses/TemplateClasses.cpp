/**
 * @title: Templates Classes
 * @author: pgorny
 * 
 **/

#include <iostream>

using namespace std;

template <class T, class K>
class Test
{
private:
    T obj;
    K key;

public:
    Test(T obj, K key) : obj(obj), key(key)
    {
    }
    void print()
    {
        cout << key << ": " << obj << endl;
    }
};

int main()
{
    Test<string, int> test1("Hello", 3);
    test1.print();

    return 0;
}