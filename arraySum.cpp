#include <iostream>
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

int ArraySum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int n;
    cout << "Enter the array size: ";
    cin >> n;

    int arr[n];
    setArray(arr, n);
    getArray(arr, n);

    int sum = ArraySum(arr, n);
    cout << "The sum of array element: " << sum << endl;
    return 0;
}