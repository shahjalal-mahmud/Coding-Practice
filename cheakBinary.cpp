#include <iostream>
using namespace std;

void cheakBinary(int n)
{
    int size = 0;
    int num = n;
    while (n > 0)
    {
        n = n / 10;
        size++;
    }
    for (int i = 1; i <= size; i++)
    {
        int lastdigit = num % 10;
        if (lastdigit != 0 && lastdigit != 1)
        {
            cout << "Not a Binary number. Please enter a Binary number." << endl;
        }
        num = num / 10;
    }
}

int main()
{
    int binary;
    cout << "Enter a Binary Number: ";
    cin >> binary;

    cheakBinary(binary);
    return 0;
}