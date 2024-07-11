#include <iostream>
#include <algorithm>
#include<functional> // For greater<int>
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
// Sorting an Array in accending order.
void sortAlgo(int arr[], int n)
{
    sort(arr, arr + n);
    getArray(arr, n);
}

// Sorting an Array in descending order.
void sortDescending(int arr[], int n)
{
    sort(arr, arr + n, greater<int>());
    getArray(arr, n);
}
int main()
{
    int n;
    cout << "Enter the array size: ";
    cin >> n;

    int arr[n];
    setArray(arr, n);
    getArray(arr, n);

    sortAlgo(arr, n);
    sortDescending(arr, n);
    return 0;
}