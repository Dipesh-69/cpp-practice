#include<iostream>
using namespace std;

class Dc
{
    int *ptr;
    public:
    Dc(){
        ptr=new int ;
        cout<<" Memory allocated dynamically"<<endl;
    }
    ~Dc()
    {
        delete ptr;
        cout<<"Memory released"<<endl;
    }
};
int main()
{
    Dc obj;

    return 0;
}