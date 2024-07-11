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
// sorting an Array in ascending order
void BubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
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

    cout << "Sorted ";
    BubbleSort(arr, n);

    return 0;
}