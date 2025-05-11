#include<iostream>
using namespace std;
 void fun(char a,int b=1, int c=2)
 {
    cout<< a+b+c<<endl;
 }
 int main()
 {
    fun('a');
    fun('a',5);
    fun('a',5,7);
    return 0;
 }