#include <iostream>
using namespace std;
class Rec
{
    int a, b;

public:
    void setValue(int x, int y)
    {
        a = x;
        b = y;
    }
    void getValue(void)
    {
        cout << a << endl;
        cout << b << endl;
    }
    void area()
    {
        cout << "Area is: " << a * b << endl;
    }
    void perameter()
    {
        int per = 2 * (a + b);
        cout << "Perameter is: " << per << endl;
    }
};

int main()
{
    Rec r1;

    // Rec *ptr;
    // ptr = new Rec(r1);

    // Rec *ptr1 = &r1;

    Rec *ptr = new Rec(r1);

    (*ptr).setValue(5, 10);
    (*ptr).area();
    (*ptr).perameter();

    ptr->setValue(10, 20);
    ptr->area();
    ptr->perameter();

    delete ptr;

    return 0;
}