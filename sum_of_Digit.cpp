#include <iostream>
using namespace std;

void SumDigit(long long int n)
{
    int count = 0, sum = 0;
    n = abs(n); // Make sure n is positive
    while (n > 0)
    {
        int lastdigit = n % 10;
        sum += lastdigit;
        n = n / 10;
        count++;
    }
    cout << "Digit in the number: " << count << endl;
    cout << "The sum of the digit: " << sum << endl;
}

int main()
{
    long long int n;
    cout << "Enter a number: ";
    cin >> n;

    SumDigit(n);
    return 0;
}