
#include<iostream>
 using namespace std;

 class ninja
 {
   public:
   ninja()  // constructor
   {
      cout<<" I am a constructor"<<endl;
   }
   ~ninja()// Destructor
   {
      cout<<"I am a destructor"<<endl;
   }
};
   void fun()
   {
      cout<<"hello girls.."<<endl;
      ninja b;
      cout<<"today is friday.."<<endl;
   }
   
 
 int main()
 {
   cout<<"good afternoon.."<<endl;
   ninja a;
   cout<<"hello boys.."<<endl;
   fun();
   cout<<"let's party tognight.."<<endl;
   return 0;
 }