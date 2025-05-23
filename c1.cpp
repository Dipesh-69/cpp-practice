// Constructor overloading

#include<iostream>
using namespace std;
    class Ninja
{
        int power;
        public:
        Ninja() /// default constructor
        {
            power=2;  // default constructor  without parameter

        }
        Ninja(int p) //parametrized constructor
        {
            power=p;
        }
        void display()
        {
            cout<<"power="<<power<<endl;
        }
 }; 
 int main ()
 {
    Ninja a;

    Ninja b(5); // it call parametrized constructor

    Ninja c(b);  /// it call default copy constructor  ( b ko power ko value c ma copy hunxa)

    a.display(); // power =2

    b.display(); //power =5

    c.display();

    return 0;
 }  