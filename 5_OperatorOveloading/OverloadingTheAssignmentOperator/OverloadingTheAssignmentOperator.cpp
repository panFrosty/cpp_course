/**
 * @title: Overloading The Assignment Operator
 * @author: pgorny
 * 
 **/

#include <iostream>

using namespace std;

class Test{
private:
    int id;
    string name;

public:
    Test(): id(0),name("")
    {

    }
    Test(int id, string name): id(id), name(name)
    {

    }

    void print() const {
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

};

int main()
{
    Test test1(32,"Frosty");
    cout<< "Print test1: "<<flush;
    test1.print();

    Test test2(26,"Mia");
    test2 = test1;
    cout<< "Print test2: "<<flush;
    test2.print();

    Test test3;
    // test3 = test2 = test1;
    // test3 = test2;
    test3.operator=(test2);
    cout<< "Print test3: "<<flush;
    test3.print();

    cout << endl;
    Test test4 = test1;
    cout<< "Print test4: "<<flush;
    test4.print();

    return 0;
}