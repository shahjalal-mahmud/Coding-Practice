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
int ArrayLinearSearch(int arr[], int n, int element)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            return i + 1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout << "Enter the array size: ";
    cin >> n;

    int arr[n];
    setArray(arr, n);
    getArray(arr, n);

    int element;
    cout << "Element you want to search: ";
    cin >> element;

    int index = ArrayLinearSearch(arr, n, element);
    if (index == -1)
    {
        cout << "Elment not fount in the Array!!" << endl;
    }
    else
    {
        cout << "Element found at position: " << index << endl;
    }

    return 0;
}