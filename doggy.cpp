#include<iostream>
using namespace std;
class Apple
{
    public:
    int w;
    void get1()
    {
        cout<<"enter the value of w:";
        cin>>w;

    }
    void display()
    {
        cout<<" Value of w:"<<w<<endl;
    }
};
class Ball:virtual public Apple
{
    public:
    int x;
    void get2()
    {
        cout<<"enter the value of x:";
        cin>>x;

    }
    void display()
    {
        cout<<" Value of x:"<<x<<endl;
    }
};
class Cat: virtual public Apple
{
    public:
    int y;
    void get3()
    {
        cout<<"enter the value of y:";
        cin>>y;

    }
    void display()
    {
        cout<<" Value of y:"<<y<<endl;
    }
};
class Dog: public Ball, public Cat
{
    public:
    int z;
    void get4()
    {
        cout<<"enter the value of z:";
        cin>>z;

    }
    void display()
    {
        cout<<" Value of z:"<<z<<endl;
        Apple::display();
        Ball::display();
        Cat::display();
    }
};
int main()
{
    Dog d;
    d.get1();
    d.get2();
    d.get3();
    d.get4();

    d.display();
}