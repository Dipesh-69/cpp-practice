#include<iostream>
using namespace std;

class apple
{
    int num;
    public:
    void get(){
        cout<<"enter a number"<<endl;
        cin>>num;
    }
    void display(){
        cout<<"num is :"<<num<<endl;
    }
    // operator overloading function
    void operator-()
    {
        num= -num;
    }
};
int main()
{
    apple a;
    a.get();
    -a;

    a.display();
    return 0;
}