// Q.can a constructor accept object as an argument? justify

#include<iostream>
using namespace std;
    class Ninja
{
        int power;
        public:
        Ninja() /// default constructor
        {
            power=2;  // default constructor  without parameter
            cout<<"Default Default"<<endl;

        }
      
        Ninja( Ninja & hatori) // copy constructor  // hatori = a ;
        {
            cout<<"aw aw  aw .. "<<endl;
            power= hatori.power;

        }
        void display()
        {
            cout<<"power="<<power<<endl;
        }
 }; 
 int main ()
 {
    Ninja a;  // automatically call constructor
    

    Ninja b(a);     // it call copy constructor
    b.display();   // prints--> power=2   

   

    return 0;
 }  
