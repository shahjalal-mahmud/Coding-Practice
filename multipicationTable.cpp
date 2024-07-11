#include <iostream>
using namespace std;

void MultiTable(int n)
{
    for (int i = 1; i <= 10; i++)
    {
        cout << n << " x " << i << " = " << n * i << endl;
    }
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    MultiTable(num);
    return 0;
}