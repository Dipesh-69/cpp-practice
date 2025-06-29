#include<iostream>
using namespace std;

class nepal
{
    public:
     virtual void say() // virtual rakhe child call hunxa otherwise parent call hunxa
    {
        cout<<"Nepal";
    }
};
class bharatpur:public nepal
{
    public:
    void say()
    {
        cout<<"bharatpur";
    }
};
class rampur: public nepal{
    public:
    void say(){
        cout<<"rampur";
    }
};
void fun(nepal *p){
    p->say();

}
int main ()
{
    bharatpur b;
    rampur r;
    fun(&b);
    fun(&r);
    return 0;

}