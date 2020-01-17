/**
 * @title: Writing Text Files
 * @author: pgorny
 * 
 **/

/* File contents <stats.txt>:
Population UK: 64000000
Population France: 66400000
Population Poland: 33000000
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string filename = "stats.txt";
    ifstream input;
    input.open(filename);
    if (!input.is_open())
    {
        return -1;
    }

    while (input)
    {
        string line;
        getline(input, line, ':');
        int population;
        input >> population;
        input >> ws;
        if (!input)
        {
            break;
        }
        cout << "'" << line << "'"
             << " -- '" << population << "'" << endl;
    }

    input.close();

    return 0;
}