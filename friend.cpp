// wap  to add two private numbers of two differnt classes using friend function
#include<iostream>
using namespace std;

class oe
{
    int x;
    public:
    friend void fun();
};
class umm
{
    int y;
    public:
    friend void fun();

};
void fun()
{
    oe a;
    a.x=5;

    umm b;
    b.y=5;
    cout<<a.x+b.y;
}
int main()
{
    fun();
    return 0;
}