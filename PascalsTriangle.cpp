#include <iostream>
using namespace std;

void printPascalsTriangle(int N)
{
    int triangle[50][50]; // Using a fixed-size 2D array, adjust the size if needed

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j <= i; ++j)
        {
            // The first and last values in every row are 1
            if (j == 0 || j == i)
            {
                triangle[i][j] = 1;
            }
            else
            {
                // Other values are the sum of the two values above it
                triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }
            cout << triangle[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int N;
    cout << "Enter the number of rows of Pascal's Triangle to print: ";
    cin >> N;

    if (N > 0 && N <= 50)
    {
        printPascalsTriangle(N);
    }
    else
    {
        cout << "Please enter a number between 1 and 50." << endl;
    }

    return 0;
}
