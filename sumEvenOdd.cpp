#include<iostream>
using namespace std;

void sumEven(int n){
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
        
    }
    cout<<"Sum of all even numbers between 0 to "<<n<<" are: "<<sum<<endl;
    
}

void sumOdd(int n){
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
        
    }
    cout<<"Sum of all Odd numbers between 0 to "<<n<<" are: "<<sum<<endl;
    
}

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    sumEven(n);
    sumOdd(n);
    return 0;
}