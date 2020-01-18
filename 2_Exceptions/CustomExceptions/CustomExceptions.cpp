/**
 * @title: Custom Exceptions
 * @author: pgorny
 * 
 **/

#include <iostream>
#include <exception>
using namespace std;

class MyException : public exception
{
public:
    virtual const char *what() const throw()
    {
        return "Something bad happens!";
    }
};

class Test {
    public:
    void goesWrong(){
        throw MyException();
    }
};

int main()
{

    Test test;
    try
    {
        test.goesWrong();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
     return 0;
}