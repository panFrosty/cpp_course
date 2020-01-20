/**
 * @title: Custom Objects As Map Keys
 * @author: pgorny
 * 
 **/

#include <iostream>
#include <map>

using namespace std;

class Person
{
public:
    Person() : name(""), age(0)
    {
    }

    Person(const Person &other)
    {
        name = other.name;
        age = other.age;
    }

    Person(string name, int age) : name(name), age(age)
    {
    }
    void print() const
    {
        cout << name << ": " << age << flush;
    }

    bool operator<(const Person &other) const
    {
        if (this->name == other.name)
        {
            return this->age < other.age;
        }
        else
        {
            return this->name < other.name;
        }
    }

private:
    string name;
    int age;
};

int main()
{
    map<Person, int> people;
    people[Person("Frosty", 32)] = 40;
    people[Person("Frosty", 12)] = 69;
    people[Person("Mia", 26)] = 30;
    people[Person("Stefan", 18)] = 20;

    for (map<Person, int>::iterator it = people.begin(); it != people.end(); it++)
    {
        cout << it->second << ": " << flush;
        it->first.print();
        cout << endl;
    }

    return 0;
}