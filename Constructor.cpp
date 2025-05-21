#include<iostream>
using namespace std;
class student
{
    public:
    student()
    {
        cout<<"Constructor called"<<endl;

    }
    
};
int main()
{
    student s,t,v;  /// It  calls constructor  (s,t,v) vayo vane 3 times calls garxa
    return 0;
    
}