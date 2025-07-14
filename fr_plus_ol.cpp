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
        cout<<" number is :"<<num<<endl;

    }

    friend void operator +(apple &a, apple &b);
};
    // overloading operator

    void operator+(apple &a, apple &b){
        a.num=a.num+b.num;


}
int main(){
    apple a,b;
    a.get();
    b.get();
    a+b;
    a.display();

    return 0;

}
