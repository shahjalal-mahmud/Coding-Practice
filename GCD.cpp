#include <iostream>
using namespace std;

int GCD(int a, int b)
{
    if (a < b)
    {
        swap(a, b);
    }
    while (b != 0)
    {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int main()
{
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int gcd = GCD(num1, num2);
    cout << "The Greatest Common Divisor (GCD) is: " << gcd << endl;
    return 0;
}