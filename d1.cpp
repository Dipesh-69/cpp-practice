// use of destructor to release memory 

#include<iostream>
using namespace std;
class CCT
{
    int *p;
    public:
    CCT()   //con...
    {
        p=new int;
        cout<<"Memory allocated dynamically"<<endl;

    }
    ~CCT()  // des..
    {

        delete p;
        cout<<"Memory is released"<<endl;
    }
};
int main()
{
    CCT c;

}