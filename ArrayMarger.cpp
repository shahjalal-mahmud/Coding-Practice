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
    cout << "[";
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
void margeArray(int arr1[], int n1, int arr2[], int n2, int arr3[])
{
    int i = 0, j = 0, k = 0;
    while (i < n1)
    {
        arr3[k++] = arr1[i++];
    }
    while (j < n2)
    {
        arr3[k++] = arr2[j++];
    }
}
int main()
{
    int n1;
    cout << "Enter the array1 size: ";
    cin >> n1;

    int arr1[n1];
    cout << "Set Array1: " << endl;
    setArray(arr1, n1);
    cout << "Array1: ";
    getArray(arr1, n1);

    int n2;
    cout << "Enter the array2 size: ";
    cin >> n2;

    int arr2[n2];
    cout << "Set Array2: " << endl;
    setArray(arr2, n2);
    cout << "Array2: ";
    getArray(arr2, n2);

    int arr3[n1 + n2];
    margeArray(arr1, n1, arr2, n2, arr3);
    cout << "Marged Array: ";
    getArray(arr3, n1 + n2);

    return 0;
}