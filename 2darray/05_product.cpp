#include <iostream>
using namespace std;
int main()
{
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    int coulms;
    cout << "Enter the number of coulms: ";
    cin >> coulms;

    int matrix[rows][coulms];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < coulms; j++)
        {

            cout << "enter the elements:" << i + 1 << j + 1 << " ";
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < coulms; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    int product = 1;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < coulms; j++)
        {
            product *= matrix[i][j];
        }
    }
    cout << product;
}