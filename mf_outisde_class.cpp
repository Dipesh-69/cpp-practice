#include<iostream>
using namespace std;

class Nepal 
{
public:
    void fun(); // member function
};

void Nepal::fun()
{
    cout << "hehe";
}

int main()
{
    Nepal n;
    n.fun();
    return 0;
}
