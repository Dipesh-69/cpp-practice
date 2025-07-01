#include<iostream>
using namespace std;

class pikachu // parent
{
    public:
    pikachu()
    {
        cout<<"Constructor of pikachu"<<endl;

    }

    // virtual destructor
    virtual ~pikachu()  //without making virtual , destructor of parent can't be called 
    {
        cout<<" Destructor of pikachu"<<endl;
    }
};

class hanuman: public pikachu{
    public:
    hanuman()
    {
        cout<<"constructor of hauman"<<endl;
    }
    ~hanuman()
    {
        cout<<"Destructor of hanuman"<<endl;
    }
};

int main()
{
    // create a construtor using dma
    
    pikachu *p;
    p=new hanuman();

    delete p;



    return 0;
}