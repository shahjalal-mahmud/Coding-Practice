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
void sortAlgo(int arr[], int n)
{
    sort(arr, arr + n);
    cout << "Sorted ";
    getArray(arr, n);
}
void removeDuplicate(int arr[], int n)
{
    int num = 1;
    for (int i = 1; i < n; i++)
    {
        // Check if the current element is different from the last unique element
        if (arr[i] != arr[num - 1])
        {
            arr[num] = arr[i]; // Move unique element forward
            num++;
        }
    }
    cout << "New ";
    getArray(arr, num);
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
    removeDuplicate(arr, n);
    return 0;
}