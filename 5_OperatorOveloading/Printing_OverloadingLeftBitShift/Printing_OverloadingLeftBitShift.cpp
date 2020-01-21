/**
 * @title: Printing - Overloading Left Bit Shift
 * @author: pgorny
 * 
 **/

#include <iostream>

using namespace std;

class Test
{
private:
    int id;
    string name;

public:
    Test() : id(0), name("")
    {
    }
    Test(int id, string name) : id(id), name(name)
    {
    }

    void print() const
    {
        cout << id << ": " << name << endl;
    }

    const Test &operator=(const Test &t1)
    {
        cout << "Overloaded assignment!" << endl;
        id = t1.id;
        name = t1.name;
        return *this;
    }

    Test(const Test &t1)
    {
        cout << "Copy constructor running!" << endl;
        *this = t1;
    }

    friend ostream &operator<<(ostream &out, const Test &test)
    {
        out << test.id << ": " << test.name;
        return out;
    }
};

int main()
{
    Test test1(26, "Mia");
    Test test2(32, "Frosty");

    cout << test1 << ": " << test2 << endl;

    return 0;
}