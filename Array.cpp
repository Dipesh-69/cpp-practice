#include<iostream>
using namespace std;

class Apple
{
    public:
    void eat()
    {
        cout<<" Dipesh dai namaste"<<endl;
    }
};

int main()
{
    Apple a[10]; // array of objects
    for(int i=0; i<10; i++)
    {
        a[i].eat();
    }
    return 0;
}