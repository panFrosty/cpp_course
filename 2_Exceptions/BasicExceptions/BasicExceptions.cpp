/**
 * @title: Basic Exceptions
 * @author: pgorny
 * 
 **/

#include <iostream>

using namespace std;


void mightGoWrong();

void usesMightGoWrong()
{
    mightGoWrong();
}

void mightGoWrong()
{
    bool error = false;
    bool error2 = true;
    if (error)
    {
        throw "Error message";
    }
    if (error2)
    {
        throw string("String as exception");
    }
}

int main()
{
    try
    {
        usesMightGoWrong();
    }
    catch (int e)
    {
        cout << "Error code is " << e << endl;
    }
    catch (char const *e)
    {
        cout << e << endl;
    }
    catch (string & e)
    {
        cout << e << endl;
    }

    return 0;
}