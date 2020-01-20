/**
 * @title: Multi Map
 * @author: pgorny
 * 
 **/

#include <iostream>
#include <map>

using namespace std;

int main()
{
    multimap<int,string> lookup;
    lookup.insert(make_pair(10,"Frosty"));
    lookup.insert(make_pair(20,"Mia"));
    lookup.insert(make_pair(20,"Stefan"));
    lookup.insert(make_pair(30,"Janusz"));

    for(multimap<int,string>::iterator it = lookup.begin(); it!=lookup.end();it++){
        cout<< it->first << ": " << it->second<<endl;
    }
    
    cout << endl;

    for(multimap<int,string>::iterator it = lookup.find(26); it!=lookup.end();it++){
        cout<< it->first << ": " << it->second<<endl;
    }

    cout << endl;

    pair<multimap<int,string>::iterator,multimap<int,string>::iterator> its = lookup.equal_range(10);
    for(multimap<int,string>::iterator it = its.first;it != its.second;it++)
    {
        cout<< it->first << ": " << it->second<<endl;
    }

    cout << endl;

    // C+11 version
    auto its2 = lookup.equal_range(10);
    for(multimap<int,string>::iterator it = its2.first;it != its2.second;it++)
    {
        cout<< it->first << ": " << it->second<<endl;
    }
    return 0;
}