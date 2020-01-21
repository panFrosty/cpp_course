/**
 * @title: Sorting Vectors, Deque And Friend
 * @author: pgorny
 * 
 **/

#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>

using namespace std;

class Test
{
private:
    int id;
    string name;

public:
    Test(int id, string name) : id(id), name(name)
    {
    }

    void print() const
    {
        cout << id << ": " << name << endl;
    }

    // bool operator<(const Test &other) const {
    //     if(name == other.name)
    //     {
    //         return id < other.id;
    //     }
    //     else
    //     {
    //         return name < other.name;
    //     }
    // }

    friend bool comp(const Test &t1, const Test &t2);
};

bool comp(const Test &t1, const Test &t2)
{
    return t1.name < t2.name;
}

int main()
{
    vector<Test> tests;
    tests.push_back(Test(32, "Frosty"));
    tests.push_back(Test(42, "Stefan"));
    tests.push_back(Test(26, "Mia"));

    sort(tests.begin(),tests.end(), comp);

    for(vector<Test>::iterator it = tests.begin();it!=tests.end();it++)
    {
        it->print();
    }

    deque<Test> testsDeque;
    testsDeque.push_back(Test(32, "Frosty"));
    testsDeque.push_back(Test(42, "Stefan"));
    testsDeque.push_back(Test(26, "Mia"));
    testsDeque.push_front(Test(666,"Widmo"));
    sort(testsDeque.begin(),testsDeque.end(), comp);

    for(deque<Test>::iterator it = testsDeque.begin();it!=testsDeque.end();it++)
    {
        it->print();
    }

    return 0;
}