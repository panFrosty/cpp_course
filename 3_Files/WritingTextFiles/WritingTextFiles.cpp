/**
 * @title: Writing Text Files
 * @author: pgorny
 * 
 **/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream outputFile;
    string outputFilename = "test.txt";
    outputFile.open(outputFilename,ios::out);
    
    if (outputFile.is_open())
    {
        cerr << "Opened file: " << outputFilename << endl;
        outputFile << "Hello there!";
        outputFile << "123!";
        outputFile << 123;
        outputFile.close();
    }
    else
    {
        cerr << "Could not create file: " << outputFilename << endl;
    }

    return 0;
}