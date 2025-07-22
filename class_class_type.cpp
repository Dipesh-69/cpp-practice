#include <iostream>
using namespace std;

// convert kg to gram
// source = kg
// destination = gm

class Source
{
    float kg;

public:
    void get()
    {
        cout << " enter weight in kg" << endl;
        cin >> kg;
    }

    float getkg()
    {
        return kg;
    }
};

// destination class
class Destination
{
    float gm;

public:
    Destination()
    {
        // default constructor
    }

    Destination(Source s) // constructor
    {
        float kg = s.getkg();
        gm = kg * 1000;
    }

    void display()
    {
        cout << "after conversion , weight=" << gm << "gm" << endl;
    }
};
int main()
{
    Source s; // source object
    s.get();

    Destination d; // destination object
    d = s;         // it calls operator function ( if there was constructor it call it )

    d.display();

    return 0;
}
