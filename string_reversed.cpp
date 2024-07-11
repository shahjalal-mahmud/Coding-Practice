#include <iostream>
#include <string>
using namespace std;

string reverseString(string input) {
    int n = input.length();
    for (int i = 0; i < n / 2; ++i) {
        swap(input[i], input[n - i - 1]);
    }
    return input;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    cout << "Reversed string: " << reverseString(str) << endl;
    return 0;
}
