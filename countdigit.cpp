#include <iostream>
using namespace std;

void countDigit(long long int n)
{
    int count = 0;
    n = abs(n); // Make sure n is positive
    while (n > 0)
    {
        n = n / 10;
        count++;
    }
    cout << "Digit in the number: " << count << endl;
}

int main()
{
    long long int n;
    cout << "Enter a number: ";
    cin >> n;

    countDigit(n);
    return 0;
}