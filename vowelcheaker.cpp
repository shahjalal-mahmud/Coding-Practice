#include<iostream>
using namespace std;
void vowelCheaker(char c){
    int count = 0;
    char arr[] = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == c)
        {
            count++;
        }
    }
    if (count > 0)
    {
        cout<<"Vowel!!!";
    }
    else{
        cout<<"constant!!";
    }
}
int main()
{
    char c;
    cout<<"Enter a character: ";
    cin>>c;

    vowelCheaker(c);
    return 0;
}