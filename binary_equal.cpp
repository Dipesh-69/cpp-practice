#include<iostream>
using namespace std;

class nice
{
    int num;
    public:

    void get(){
        cout<<"enter a number"<<endl;
        cin>>num;
    }
    void display(){
        cout<<"number is :"<<num<<endl;
    }
    // == operator overloading
    void operator==(nice b){
        if(num==b.num){
            cout<<"both are equal"<<endl;
        }
        else{
            cout<<"both are not equal"<<endl;
        }
    }
};
int main(){
    nice a,b;
    a.get();
    b.get();
   
    a==b;  // a.operator ==(b)
    
    return 0;
}