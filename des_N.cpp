/*
 destructor
 1.special tyoe member function that will be automatically called
 2. name same as class name
 3. public section
 4. no return type
 */

 /*
 Differences
 1. called when an object is destroyed
 2. when the life of object ends
 3.doesn't accept arguments
 4.no destructor overloading
 5.use tidle(~) sign before destructor
 */

 /*
    General use
    1.free up memory , free up resources
    2. clean up activities
 */

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
      cout<<"I am a constructor"<<endl;
   }
 
 };
 int main()
 {
   
   ninja a,b;
   
   return 0;
 }