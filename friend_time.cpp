#include <iostream>
using namespace std;

class nice
{
    int hour;
    int min;

public:
    void get()
    {
        cout << " enter hour and minutes" << endl;
        cin >> hour;
        cin >> min;
    }

    void display()
    {
        cout << hour << ":" << min << endl;
    }

    nice operator+(nice b)
    {
        nice temp;
        temp.min  = min + b.min;                      // ✅ Add minutes from both objects
        temp.hour = hour + b.hour + (temp.min / 60);  // ✅ Add hours + any extra hour from minutes
        temp.min  = temp.min % 60;                    // ✅ Keep only the remainder minutes (0–59)

        return temp;
    }
};
int main()
{
    nice a, c, s;
    a.get();
    c.get();
    s = a + c;
    s.display();
    return 0;
}