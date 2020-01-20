/**
 * @title: CustomObjectsAsMapValues
 * @author: pgorny
 * 
 **/

#include <iostream>
#include <map>

using namespace std;

class Person
{
public:
    Person():name(""),age(0)
    {

    }

    Person(const Person& other)
    {
        cout << "Copy contructor running."<<endl;
        name = other.name;
        age = other.age;
    }
   
    Person(string name, int age) : name(name), age(age)
    {
    }
    void print() const 
       {
        cout << name << ": " << age << endl;
    }

private:
    string name;
    int age;
};

int main()
{
    map<int,Person> people;
    people[0] = Person("Frosty",32);
    people[1] = Person("Mia",26);
    people[2] = Person("Stefan",42);

    people.insert(make_pair(55,Person("Bob",45)));

    for(map<int,Person>::iterator it = people.begin();it!=people.end();it++)
    {
        cout << it->first << ": " << flush;
        it->second.print();
    }

    return 0;
}