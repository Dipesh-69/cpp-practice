#include<iostream>
using namespace std;

class nice
{
    int num;
    public:

    void get (){
        cout<<"enter a number "<<endl;
        cin>>num;
    }
    void display(){
        cout<<"number is "<<num<<endl;
    }
    // += operator overloading
    void operator+=(nice b){
        num+=b.num;
    }
};
int main(){
    nice a,b;
    a.get();
    b.get();
    a+=b; // a = a+b;

    a.display();
    return 0;

    
}