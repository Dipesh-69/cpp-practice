#include<iostream>
using namespace std;

class pikachu
{
    public:
    void fun()
    {
        cout<<"hello";
    }
};
class doremon: public pikachu{
    public:
    void fun()
    {
        cout<<"hajur";
    }
};
int main()
{
    pikachu *p;
    doremon d;
    p=&d;
    p->fun();  // prints hello early binding garxa 
    /*
     early binding 
     firstly looks for the object pointer type and call instantly
    */
    return 0;
}