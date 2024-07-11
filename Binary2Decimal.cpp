#include <iostream>
#include <string>
using namespace std;

int binaryToDecimal(const string &binary)
{
    int decimal = 0;
    int base = 1;
    for (int i = binary.length() - 1; i >= 0; --i)
    {
        if (binary[i] == '1')
        {
            decimal += base;
        }
        base *= 2;
    }
    return decimal;
}

int main()
{
    string binary;
    cout << "Enter a Binary number: ";
    cin >> binary;

    int decimal = binaryToDecimal(binary);
    cout << "The decimal equivalent is: " << decimal << endl;
    return 0;
}