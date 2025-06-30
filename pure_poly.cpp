// Q. pure polymosphism, pure vitual function, abstract class , concrete class

#include<iostream>
using namespace std;

class hello  /// abstract class
{
    public:
    virtual void umm()=0;
    void oe()
    {
        cout<<"dipesh"<<endl;  // member function
    }
};
class hajur: public hello  // concrete class
{
    public:
    void umm()
    {
        cout<<"k xa "<<endl;

    }
};
int main()
{
    hello *h;    // only object pointer of abstract class is possible 
    hajur b;
    
    h=&b;
    h->oe();  // h->umm gives child 
     
    return 0;
}