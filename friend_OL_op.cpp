// friend function using operator overloading

#include <iostream>
using namespace std;

class apple
{
    int num;

    public:
    void get()
    {
        cout << "enter a number" << endl;
        cin >> num;
    }

    void display()
    {
        cout << "Number" << num << endl;
    }

    friend void operator-(apple &a); //& --> pass by reference
};
/// operator overloading function
void operator-(apple &a) // if & is not used then both number will be 5,5 
{
    a.num = -a.num;
}
int main()
{
    apple a;        // 5
    a.get();        // 5
    a.display();

    -a;             // operator -(a)

    a.display();    // -5

    return 0;
}

/* without passing value through 🫦 refernce 
friend apple operator-(apple a);

{
apple operator-(apple a){

apple temp;
temp.num= -a.num;
return temp;
}
}
int main(){
apple a,b;
a.get();
a.display();

b=-a;
cout<<b<<endl;

return 0;

}

*/