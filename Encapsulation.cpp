// Encapsulation

#include<iostream>
using namespace std;
class Person
{
    string name;    //data member
    int id;         // data member

    public:
    void getData()
    {
        cout<<"Enter name and id:";
        cin>>name>>id;
    }

    void display()
    {
        cout<<"Name="<<name<<endl;
        cout<<"Id="<<id<<endl;
    }
};
int main()
{
    Person p;     //p is an object
    p.getData();  //calls member function getData()
    p.display();
    return 0;
}