// increment using overloading operator using friend function .

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
        cout << "Number = " << num << endl;
    }

    friend void operator++(apple &a); // ( apple &a, int ) --> for post --> a.num ++ 
};
/// operator overloading function
void operator++(apple &a) 
{
    ++a.num;
}
int main()
{
    apple a;        // 5
    a.get();  
    ++a;             

    a.display();    // 6

    return 0;
}