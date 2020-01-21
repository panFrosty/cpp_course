/**
 * @title: STL Complex Data Types
 * @author: pgorny
 * 
 **/

#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    map<string, vector<int>> scores;

    scores["Mia"].push_back(10);
    scores["Frosty"].push_back(33);
    scores["Frosty"].push_back(22);
    scores["Stefan"].push_back(44);

    for (map<string, vector<int>>::iterator it = scores.begin(); it != scores.end(); it++)
    {
        string name = it->first;
        vector<int> scoreList = it->second;

        cout << name << ": " << flush;
        for (vector<int>::iterator itt = scoreList.begin(); itt != scoreList.end(); itt++)
        {
            cout << *itt << " " << flush;
        }
        cout << endl;
    }
    return 0;
}