/**
 * @title: Exception Catching Order
 * @author: pgorny
 * 
 **/

#include <iostream>
#include <exception>
using namespace std;


void goesWrong()
{
    bool error1detected = false;
    bool error2detected = true;

    if(error1detected)
    {
        throw std::bad_alloc();
    }
    if(error2detected)
    {
        throw std::exception();
    }
}

int main()
{
    try
    {
        goesWrong();
    }
    catch(const std::bad_alloc& e)
    {
        std::cerr << "Catching bad alloc: " << e.what() << '\n';
    }
    catch(const std::exception& e)
    {
        std::cerr << "Catching exception: " << e.what() << '\n';
    }

    
}