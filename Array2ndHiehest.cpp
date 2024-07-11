#include <iostream>
#include <algorithm>
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
void SortArray(int arr[], int n)
{
    sort(arr, arr + n, greater<int>());
    cout<<"Sorted in Desending order ";
    getArray(arr, n);
}
void secondHighest(int arr[], int n)
{
    SortArray(arr, n);
    cout << "The second highest element is: " << arr[1] << endl;
}
int main()
{
    int n;
    cout << "Enter the array size: ";
    cin >> n;

    int arr[n];
    setArray(arr, n);
    getArray(arr, n);

    secondHighest(arr, n);
    return 0;
}