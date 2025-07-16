#include<iostream>
using namespace std;

class Weight
{
    float kg;
    public:
    
    // default constructor
    Weight(){

    }

    // constructor
    Weight( float gram){
        kg= gram/1000;
    }

    void display(){
        cout<<"weight :"<<kg<<"kg"<<endl;
    }
};
int main()
{
   
    float gram;
    cout<<"enter gram "<<endl;
    cin>>gram;
    Weight w;
    w = gram;  // it calls constructor
    w.display();

    return 0;
}