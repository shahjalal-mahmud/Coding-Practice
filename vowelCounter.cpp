#include <iostream>
#include <string>
using namespace std;

void CounterV(string s)
{
    int countV = 0;
    char vowels[] = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};
    for (char c : s)
    {
        for (char v : vowels)
        {
            if (c == v)
            {
                countV++;
                break;
            }
        }
    }
    cout << "vowels: " << countV << endl;
}
void CounterC(string s)
{
    int countC = 0;
    char vowels[] = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};
    for (char c : s)
    {
        for (char v : vowels)
        {
            if (c != v)
            {
                countC++;
                break;
            }
        }
    }
    cout << "Consonant: " << countC << endl;
}
int main()
{
    string s;
    cout << "Enter a sentence: ";
    getline(cin, s);

    CounterV(s);
    CounterC(s);
    return 0;
}