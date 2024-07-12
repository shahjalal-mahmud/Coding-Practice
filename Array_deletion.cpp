#include <iostream>
using namespace std;

class ArrayDeletion {
private:
    int capacity;
    int size;
    int* arr;

public:
    ArrayDeletion(int cap) : capacity(cap), size(0) {
        arr = new int[capacity];
    }

    ~ArrayDeletion() {
        delete[] arr;
    }

    void initializeArray(const int* initialArr, int arrSize) {
        size = arrSize;
        for (int i = 0; i < size; i++) {
            arr[i] = initialArr[i];
        }
    }

    void deletion(int index) {
        if (index >= size || index < 0) {
            cout << "Invalid index for deletion." << endl;
            return;
        }
        for (int i = index; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;
    }

    void display() const {
        cout << "Array: [";
        for (int i = 0; i < size; i++) {
            cout << arr[i];
            if (i != size - 1) {
                cout << ", ";
            }
        }
        cout << "]" << endl;
    }

    int getSize() const {
        return size;
    }
};

int main() {
    int initialArr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int index = 2;

    ArrayDeletion AD(50);
    AD.initializeArray(initialArr, size);
    AD.display();

    AD.deletion(index);
    AD.display();

    return 0;
}
