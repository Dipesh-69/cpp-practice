#include<iostream>
using namespace std;
// using return by value
int fun()
{
    int a=5;
    return a;
}
int main()
{
    int a=fun();
    cout<<a;
    return 0;
}