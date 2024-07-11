#include <iostream>
using namespace std;
int largestelement(int arr[], int size)
{
    int largest = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}
void DisplayArray(int arr[], int size)
{
    cout << "Array: [";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
        if (i != size - 1)
        {
            cout << ", ";
        }
        else
        {
            cout << "]" << endl;
        }
    }
}
int main()
{
    int size;

    cout << "Enter the size of an Array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the Array elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    DisplayArray(arr, size);

    // int size = sizeof(arr) / sizeof(arr[0]);
    
    int largest = largestelement(arr, size);
    cout << "the largest element of the array is: " << largest;

    return 0;
}