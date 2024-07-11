#include <iostream>
using namespace std;

void isLeapYear(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        cout << "leap year!!!" << endl;
    }
    else
    {
        cout << "Not leap year." << endl;
    }
}
int main()
{
    int year;
    cout << "Enter a year: ";
    cin >> year;

    isLeapYear(year);
    return 0;
}