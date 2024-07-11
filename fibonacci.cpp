#include <iostream>
using namespace std;
void Fibonacci(int n)
{
    int a, b, c;
    a = 0;
    b = 1;
    cout << a << " + " << b << " + ";
    for (int i = 2; i < n; i++)
    {
        c = a + b;
        cout << c;
        if (i != n-1)
        {
            cout << " + ";
        }

        a = b;
        b = c;
    }
}
int main()
{
    int N;
    cout << "Enter the N terms of the Fibonacci series: ";
    cin >> N;

    Fibonacci(N);
    return 0;
}