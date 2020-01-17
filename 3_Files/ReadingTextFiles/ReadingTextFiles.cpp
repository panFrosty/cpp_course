/**
 * @title: Reading Text Files
 * @author: pgorny
 * 
 **/


/* File contents:
Hello there!123!123
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream inFile;
    string fileName = "test.txt";
    inFile.open(fileName, ios::in);
    if (inFile.is_open())
    {
        string line;
        while (inFile)
        {
            getline(inFile, line);
            cout << line << endl;
        }
        inFile.close();
    }
    else
    {
        cerr << "Cannot open file: " << fileName << endl;
    }

    return 0;
}