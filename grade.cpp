#include <iostream>
#include <string>
using namespace std;
char Grade(int mark)
{
    if (mark >= 90 && mark <= 100)
    {
        cout << 'A';
    }
    else if (mark >= 80)
    {
        cout << 'B';
    }
    else if (mark >= 70)
    {
        cout << 'C';
    }
    else if (mark >= 60)
    {
        cout << 'D';
    }
    else if (mark < 60)
    {
        cout << 'F';
    }
    else
    {
        cout << "Enter the correct mark.";
    }
}

int main()
{
    int mark;
    cout << "Enter your mark: ";
    cin >> mark;
    Grade(mark);
    return 0;
}