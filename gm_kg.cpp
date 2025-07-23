
// class to classs type using operator function hai 

#include <iostream>
using namespace std;

/// operator function method
/// source : gm
/// destination : kg


// destinaitom class
class WeightD
{
    float kg;

public:

void setkg(float k){
    kg=k;
}

void display(){
    cout<<" after conversion , weight "<<kg<<"kg"<<endl;
}
};

// source classs
class WeightS
{
    float gm;

public:
    void get()
    {
        cout << " enter the weight in gm" << endl;
        cin >> gm;
    }

    operator WeightD()
    {
        float k = gm/1000;
        WeightD temp;
        temp.setkg(k);
        return temp;

    }
};



int main()
{
    WeightS s;
    s.get();

    WeightD d;
    d=s;  // it call operator funciton

    d.display();
    return 0;
}