
// add complex number using operator
#include<iostream>
using namespace std;

class nice {
    int x, y;
public:
    void get() {
        cout << "Enter a complex number (real and imaginary part): ";
        cin >> x >> y;
    }

    void display() {
        cout << x << "+" << y << "i" << endl;
    }

    nice operator+(nice b) {
        nice temp;
        temp.x = x + b.x;
        temp.y = y + b.y;
        return temp;
    }
};

int main() {
    nice a, c, sum;
    a.get();
    c.get();
    sum = a + c;
    sum.display();
    return 0;
}
