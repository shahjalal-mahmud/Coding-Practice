/*
At af given array like A = [1, 2, 3, 4, 5], inser an element at a position as the user wants,
input the index and element from the user.
*/

#include <iostream>
using namespace std;
class Array_insertion
{
private:
    int *arr;
    int capacity;

public:
    Array_insertion(int cap) : capacity(cap)
    {
        arr = new int[capacity];
    }
    void setArray(const int *initialArr, int size)
    {
        for (int i = 0; i < size; i++)
        {
            arr[i] = initialArr[i];
        }
    }
    bool index_Insertion(int &size, int index, int element)
    {
        if (index > size)
        {
            return false;
        }
        for (int i = size; i > index; --i)
        {
            arr[i] = arr[i - 1];
        }
        arr[index] = element;
        size++;
        return true;
    }
    void Display(int size) const
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    ~Array_insertion()
    {
        delete[] arr;
    }
};
int main()
{
    int initialArr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int index = 1;
    int element = 0;

    Array_insertion Aobj(100);
    Aobj.setArray(initialArr, size);
    Aobj.Display(size);
    if (Aobj.index_Insertion(size, index, element))
    {
        // size++;
        Aobj.Display(size);
    }
    else
    {
        cout << "Insertion failed due to insufficiant capacity." << endl;
    }

    return 0;
}