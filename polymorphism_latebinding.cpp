#include<iostream>
using namespace std;

class pikachu
{
    public:
     virtual void fun()
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
    p->fun();  // prints hajur late binding 
    /*
     late binding 
     firstly looks for the object pointer type and looks for the address
    */
    return 0;
}