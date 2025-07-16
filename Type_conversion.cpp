#include<iostream>
using namespace std;

class animal {
    int donkey;
public:
    // Constructor
    animal(int monkey) {
        donkey = monkey / 10;
    }

    void display() {
        cout << "donkey = " << donkey << endl;
    }
};

int main() {
    int monkey = 40;
    animal a = monkey;  // Calls parameterized constructor
    a.display();
    return 0;
}
