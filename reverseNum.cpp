#include <iostream>
using namespace std;

void ReverseNum(int n)
{
    int originalN, reversedN = 0, lastdigit;
    originalN = n;
    while (n > 0)
    {
        lastdigit = n % 10;
        reversedN = reversedN * 10 + lastdigit;
        n = n / 10;
    }
    cout<<"reversed: "<<reversedN<<endl;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    ReverseNum(num);
    return 0;
}