#include <iostream>
using namespace std;
class Array_Deletion
{
private:
    int capacity;
    int size;
    int *Array;

public:
    Array_Deletion(int cap) : capacity(cap), size(0)
    {
        Array = new int[capacity];
    }
    ~Array_Deletion()
    {
        delete[] Array;
    }
    void set_Array(int s)
    {
        size = s;
        if (size <= 0 || size >= capacity)
        {
            cout << "Cannot create Array!!" << endl;
        }

        for (int i = 0; i < size; i++)
        {
            cout << "Enter element for index " << i << " : ";
            cin >> Array[i];
        }
    }
    bool deletion(int index)
    {
        if (index < 0 || index >= size)
        {
            cout << "Invalid index!!" << endl;
            return false;
        }
        for (int i = index; i < size - 1; i++)
        {
            Array[i] = Array[i + 1];
        }
        size--;
        return true;
    }
    void display() const
    {
        cout << "Array: [";
        for (int i = 0; i < size; i++)
        {
            cout << Array[i];
            if (i != size - 1)
            {
                cout << ", ";
            }
        }
        cout << "]" << endl;
    }
};
int main()
{
    int capacity, size;

    cout << "Enter the capacity of the Array: ";
    cin >> capacity;

    cout << "Enter the size of the Array: ";
    cin >> size;

    Array_Deletion AD(capacity);
    AD.set_Array(size);
    AD.display();

    int choice;
    do
    {
        cout << "If you want to insert an element press 1 (or any other key to exit): ";
        cin >> choice;
        if (choice == 1)
        {
            int index;
            cout << "Enter index you want to delete: ";
            cin >> index;
            if (AD.deletion(index))
            {
                AD.display();
            }
            else
            {
                cout << "Insertion failed: Invalid index or insufficient element." << endl;
            }
        }

    } while (true);
    return 0;
}