/**
 * @title: Object Slicing And Polymorphism
 * @author: pgorny
 * 
 **/

#include <iostream>

using namespace std;

class Parent
{
private:
    int one;
public:
    Parent()
    {

    }
    Parent(const Parent &other)
    {
        cout<<"Copy parent"<<endl;
    }

    virtual void print()
    {
        cout << "parent" << endl;
    }
    virtual ~Parent()
    {

    }
};

class Child : public Parent
{
public:
    // Child(const Child &other)
    // {
    //     Parent();
    // }
    ~Child()
    {

    }
    void print()
    {
        cout << "child" << endl;
    }
};

int main()
{
    Child c1;
    Parent &p1 = c1;
    p1.print();

    Parent p2 = Child();
    p2.print();
    return 0;
}