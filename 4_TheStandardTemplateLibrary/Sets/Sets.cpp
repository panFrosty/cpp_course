/**
 * @title: Sets
 * @author: pgorny
 * 
 **/

#include <iostream>
#include <set>

using namespace std;

class Test
{
private:
    int id;
    string name;

public:
    Test():id(0),name("")
    {

    }

    Test(int id, string name) : id(id), name(name)
    {
    }

    void print() const
    {
        cout << id << ": " << name << endl;
    }

    bool operator<(const Test &other) const
    {
        if (name == other.name)
        {
            return id < other.id;
        }
        else
        {
            return name < other.name;
        }
    }
};

int main()
{
    set<int> numbers;

    numbers.insert(30);
    numbers.insert(11);
    numbers.insert(22);
    numbers.insert(33);
    numbers.insert(44);
    numbers.insert(55);

    for (set<int, less_equal<int>>::iterator it = numbers.begin(); it != numbers.end(); it++)
    {
        cout << *it << endl;
    }

    set<int>::iterator itFind = numbers.find(22);
    if (itFind != numbers.end())
    {
        cout << "Found: " << *itFind << endl;
    }
    if (numbers.count(33))
    {
        cout << "Number Found!" << endl;
    }

    set<Test> tests;

    tests.insert(Test(32, "Frosty"));
    tests.insert(Test(26, "Mia"));
    tests.insert(Test(42, "Stefan"));
    tests.insert(Test(422, "Stefan"));

    for (set<Test>::iterator it = tests.begin(); it != tests.end(); it++)
    {
        it->print();
    }

    return 0;
}