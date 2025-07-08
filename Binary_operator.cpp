#include<iostream>
using namespace std;

class apple
{
    int num;
    public:
    void get(){
        cout<<"enter a number"<<endl;
        cin>>num;
    }
    void display(){
        cout<<"num is :"<<num<<endl;
    }
    // operator overloading function
    void operator + (apple b){
    
        num=num+b.num;
        
    }
};
int main()
{
    apple a,b;
    a.get();
    b.get();

   // ++a;  // a.operatoor ++();

    a+b;  // a.operator + (b);
    

    a.display();
    return 0;
}