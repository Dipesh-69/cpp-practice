#include <iostream>
using namespace std;

// > operaotor

class nice
{
    int num;

    public:
    void get()
    {
        cout << " Enter a number" << endl;
        cin>>num;
    }
    void display()
    {
        cout << "number is :" <<num<< endl;
    }
    // operator overloading function
    void operator<(nice b)
    {
        if (num < b.num)
        {
            cout << "smallest" << num << endl;
        }
        else
        {
            cout << "smallest" << num << endl;
        }
    }
};
int main()
{
    nice a,b;
    a.get();
    b.get();

    a<b;

    return 0;
}

/*

    temp.num=b.num
    }
    esle
    {
    temp.num=b.num
    }
    return temp}
    
*/
