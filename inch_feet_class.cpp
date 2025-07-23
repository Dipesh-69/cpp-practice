#include<iostream>
using namespace std;

class measureS{
    float inch;
    public:
    void get()
    {
        cout<<"enter certain inch"<<endl;
        cin>>inch;
    }
    float getinch()
    {
        return inch;
    }
};
class measureD{
    float feet;
    public:
    measureD()
    {

    }
    measureD(measureS ms)
    {
        feet=ms.getinch()/12;
    }
    void dipslay()
    {
        cout<<"after conversion"<<feet<<endl;
    }
};
int main()
{
    measureS ms;
    ms.get();
    measureD md;
    md=ms;
    md.dipslay();
}