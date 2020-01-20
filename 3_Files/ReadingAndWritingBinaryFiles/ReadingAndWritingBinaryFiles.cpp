/**
 * @title: Reading and Writing Binary Files
 * @author: pgorny
 * 
 **/

#include <iostream>
#include <fstream>

using namespace std;

#pragma pack(push, 1)

struct Person
{
    char name[50];
    int age;
    double height;
};

#pragma pack(pop)

int writeBinaryFile(ofstream& os, string& fileName, struct Person& someone)
{
    os.open(fileName, ios::binary);

    if (os.is_open())
    {
        os.write(reinterpret_cast<char *>(&someone),sizeof(Person));
        os.close();
        return 0;
    }
    else
    {
        cerr << "Could not create file: " + fileName << endl;
        return -1;
    }
}

int readBinaryFile(ifstream& is, string& fileName, struct Person& someone)
{
    is.open(fileName, ios::binary);

    if (is.is_open())
    {
        is.read(reinterpret_cast<char *>(&someone),sizeof(Person));
        is.close();
        return 0;
    }
    else
    {
        cerr << "Could not create file: " + fileName << endl;
        return -1;
    }
}

int main()
{
    string fileName = "person.bin";
    Person someone = {"Frosty",32,186.0};
    Person someoneElse ={};
    ofstream os;
    ifstream is;

    if(writeBinaryFile(os,fileName,someone)<0){
        cerr<<"Error writing file!"<<endl;
    }
    if(readBinaryFile(is,fileName,someoneElse)<0){
        cerr<<"Error reading file!"<<endl;
    }

    cout << "Written struct contents: \nName: "<<someone.name << "\nAge: " << someone.age << "\nHeight: " << someone.height << endl;
    cout << "Read struct contents: \nName: "<<someoneElse.name << "\nAge: " << someoneElse.age << "\nHeight: " << someoneElse.height << endl;

    return 0;
}