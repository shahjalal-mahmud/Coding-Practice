#include <iostream>
using namespace std;
class Array_insertion
{
    int *Array;
    int capacity;

public:
    Array_insertion(int cap);
    ~Array_insertion();
    void setArray(int size);
    bool insert_element_at_index(int &size, int index, int element);
    void display(int size) const;
};
Array_insertion ::Array_insertion(int cap) : capacity(cap)
{
    Array = new int[capacity];
}
Array_insertion::~Array_insertion()
{
    delete[] Array;
}
void Array_insertion ::setArray(int size)
{
    if (size > capacity || size < 0)
    {
        cout << "Insufficiant capacity." << endl;
        return;
    }
    for (int i = 0; i < size; i++)
    {
        cout << "Insert element at position " << i + 1 << " : ";
        cin >> Array[i];
    }
    cout << endl;
}
bool Array_insertion ::insert_element_at_index(int &size, int index, int element)
{
    if (index < 0 || index > size || size >= capacity)
    {
        return false;
    }
    for (int i = size; i > index; --i)
    {
        Array[i] = Array[i - 1];
    }
    Array[index] = element;
    size++;
    return true;
}
void Array_insertion ::display(int size) const
{
    cout << "Array = [";
    for (int i = 0; i < size; i++)
    {
        cout << Array[i];
        if (i != size - 1)
        {
            cout << ", ";
        }
        else
        {
            cout << "]";
        }
    }
    cout << endl;
}
int main()
{
    int capacity, size, index, element;
    cout << "Enter capacity of the Array: ";
    cin >> capacity;
    cout << "Enter size of the Array: ";
    cin >> size;

    Array_insertion A(capacity);
    A.setArray(size);
    A.display(size);
    int choice;
    do
    {
        cout << "If you want to insert an element press 1 (or any other key to exit): ";
        cin >> choice;
        if (choice == 1)
        {
            int index, element;
            cout << "Enter index and element value you want to insert: ";
            cin >> index >> element;

            if (A.insert_element_at_index(size, index, element))
            {
                cout << "Element inserted successfully!" << endl;
                A.display(size);
            }
            else
            {
                cout << "Insertion failed: Invalid index or insufficient capacity." << endl;
            }
        }
        else
        {
            cout << "Exiting insertion process." << endl;
            break;
        }
    } while (true);

    return 0;
}