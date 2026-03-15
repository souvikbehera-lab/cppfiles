#include <iostream>
using namespace std;
int main()
{
    int rows;
    cout << "enter the number: ";
    cin >> rows;
    int coulms;
    cout << "enter the number: ";
    cin >> coulms;

    int matrix1[rows][coulms];
    int matrix2[rows][coulms];
    int summatrix[rows][coulms];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout << "enter a element: " << i + 1 << j + 1 << ":";
            cin >> matrix1[i][j];
        }
    }
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < coulms; ++j)
        {
            cout << "Enter element :" << i + 1 << j + 1 << ": ";
            cin >> matrix2[i][j];
        }
    }

    // Perform matrix addition
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < coulms; ++j)
        {
            summatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Display the sum matrix
    cout << "\nSum of the two matrices:\n";
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < coulms; ++j)
        {
            cout << summatrix[i][j] << " ";
        }
        cout << endl;
    }
}