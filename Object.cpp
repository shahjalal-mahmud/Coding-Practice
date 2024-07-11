#include <iostream>
using namespace std;

class Rec
{
    int a, b;

public:
    void setValue(int x, int y)
    {
        a = x; // x = a; //wrong
        b = y;
    }
    /*
    int getValue(){
        return a,b;
    }
    */
    void getValue(void)
    {
        cout << a << endl;
        cout << b << endl;
    }
    void area()
    {
        // int area = a * b;
        cout << "Area is: " << a * b << endl;
    }
    void perameter()
    {
        int per = 2 * (a + b);
        cout << "Perameter is: " << per << endl;
    }
};

class student
{
    int id, mark;

public:
    void setValue(int x, int y)
    {
        id = x;
        mark = y;
    }
    void getValue()
    {
        cout << "The ID is: " << id << endl;
        cout << "The obtain mark is: " << mark << endl;
    }
};
int main()
{
    Rec r1, r2, r3, r4;

    // r1.setValue(10, 5);

    // r1.area();
    // r1.perameter();
    // r1.getValue();
    // cout<<r1.getValue();

    student s1, s2;
    
    s1.setValue(1539, 26);
    s1.getValue();

    s2.setValue(1540, 28);
    s2.getValue();

    return 0;
}