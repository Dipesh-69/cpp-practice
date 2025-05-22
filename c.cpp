
// Constructor overloading
#include<iostream>
using namespace std;
    class Ninja
{
        int power;
        public:
        Ninja()
        {
            power=10;  // default constructor  without parameter

        }
        Ninja(int p) //parametrized constructor
        {
            power=p;
        }
        Ninja(int p, int q) //parametrized constructor
        {
            power=p+q;
        }
        void display(){
            cout<<"Power="<<power<<endl;
        }
};
int main()
{
    Ninja n1;  // it calls constructor
    Ninja n2(20); // it calls 1st parametrized constructor
    Ninja n3(2,5); // it calls 2nd parametrized constructor
    n1.display();
    n2.display();
    n3.display();
    return 0;
}

