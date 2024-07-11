#include <iostream>
using namespace std;

int factorial(long long int n)
{
    if (n <= 1)
    {
        return 1;
    }
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
int main()
{
    long long int num;
    cout << "Enter a positive number: ";
    cin >> num;

    cout << "Factorial of " << num << " is : " << factorial(num) << endl;
    return 0;
}