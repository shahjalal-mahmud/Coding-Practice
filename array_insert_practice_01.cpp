#include <iostream>
using namespace std;
class Array_insertion
{
private:
    int *Array;
    int capacity;

public:
    Array_insertion(int cap) : capacity(cap)
    {
        Array = new int[capacity];
    }
    ~Array_insertion(){
        delete[] Array;
    }
    void setArray(int size)
    {
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
    bool insert_at_index(int &size, int index, int element)
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
    void display(int size) const
    {
        cout << "Array: [";
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
        cout<<endl;
    }
};
int main()
{
    int capacity;
    int size;
    cout << "Enter Array capacity and size: ";
    cin >> capacity >> size;

    Array_insertion A1(capacity);
    A1.setArray(size);
    A1.display(size);

    int press;
    int index;
    int element;
    cout << "If you want to insert an element press 1: ";
    cin >> press;
    if (press == 1)
    {
        cout << "Enter index and element vlaue you want to insert: ";
        cin >> index >> element;
        if (A1.insert_at_index(size, index, element))
        {
            A1.display(size);
        }
        else
        {
            cout << "Insufficiant capacity." << endl;
        }
    }
    return 0;
}