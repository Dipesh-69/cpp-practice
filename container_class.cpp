#include<iostream>
using namespace std;

class apple
{
    public:
    void eat(){
        cout<<"eat apple"<<endl;
    }
};
class ball // container class 😍
{
    apple a;
    public:
    void play(){
        a.eat();
        cout<<"play ball"<<endl;
    }
};
int main()
{
    ball b;
    b.play();

    return 0;  // 😍

}