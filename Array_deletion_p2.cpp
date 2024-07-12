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
    void setArray(int s)
    {
        size = s;
        if (size > capacity)
        {
            cout << "indufficiant capacity!!" << endl;
            return;
        }
        for (int i = 0; i < size; i++)
        {
            cout << "Insert element for position " << i + 1 << " : ";
            cin >> Array[i];
        }
    }
    void deletion_at_index(int index)
    {
        if (index < 0 || index >= size)
        {
            cout << "Invalid index." << endl;
        }
        for (int i = index; i < size - 1; i++)
        {
            Array[i] = Array[i + 1];
        }
        size--;
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
    int capacity;
    int size;

    cout << "Enter capacity of the array: ";
    cin >> capacity;

    cout << "Enter size of the array: ";
    cin >> size;

    Array_Deletion AD(capacity);
    AD.setArray(size);
    AD.display();

    int index;
    cout << "Enter index for delete element from the array: ";
    cin >> index;

    AD.deletion_at_index(index);
    AD.display();
    return 0;
}