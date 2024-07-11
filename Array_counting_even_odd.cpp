#include<iostream>
using namespace std;
void setArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Element (" << i + 1 << "): ";
        cin >> arr[i];
    }
}

void getArray(int arr[], int n)
{
    cout << "Array: [";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
        if (i != n - 1)
        {
            cout << ", ";
        }
        else
        {
            cout << "]" << endl;
        }
    }
}

void countingEvenOdd(int arr[], int n){
    int counteven = 0, countodd = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] %2 ==0)
        {
           counteven++;
        }
        else{
            countodd++;
        }
    }
    cout<<"Even elements are: "<<counteven<<endl;
    cout<<"Odd element are: "<<countodd<<endl;
    
}
int main()
{
    int n;
    cout << "Enter the array size: ";
    cin >> n;

    int arr[n];
    setArray(arr, n);
    getArray(arr, n);

    countingEvenOdd(arr, n);
    return 0;
}