/**
 * @title: Maps
 * @author: pgorny
 * 
 **/

#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<string, int> ages;
    ages["Frosty"] = 32;
    ages["Stefan"] = 31;
    ages["Mia"] = 26;

    ages.insert(make_pair("Peter",69));
    cout << ages["Frosty"] << endl;

    ages["Stefan"] = 66;

    if(ages.find("Mia")!=ages.end())
    {
        cout << "Found Mia!" << endl;
    }
    else
    {
        cout << "Couldn't find Mia!" << endl;
    }
    
    for(map<string,int>::iterator it = ages.begin();it!=ages.end();it++)
    {
        pair<string,int> age = *it;
        cout << age.first << ": " << age.second << endl;
    }

    for(map<string,int>::iterator it = ages.begin();it!=ages.end();it++)
    {
        cout << it->first << ": " << it->second << endl;
    }

    return 0;
}