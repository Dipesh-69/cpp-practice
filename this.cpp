#include<iostream>
using namespace std;

class student{
    string name;
    int roll;
    
    public:
    void get(string name, int roll)
    {
        this->name=name;
        this->roll=roll;
    }
    void display()
    {
        cout<<"name= "<<name<<endl;
        cout<<"roll= "<<roll<<endl;
    }
};
int main()
{
    student s;
    s.get("Dipesh",10);
    s.display();

    return 0;
}