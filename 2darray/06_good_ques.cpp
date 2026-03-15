#include<iostream>
using namespace std;
int main(){
     int rows;
    cout << "enter the number: ";
    cin >> rows;
    int coulms;
    cout << "enter the number: ";
    cin >> coulms;

    int matrix1[rows][coulms];
    int summatrix[rows][coulms];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout << "enter a element: " << i + 1 << j + 1 << ":";
            cin >> matrix1[i][j];
        }
    }

    
    int submatrix[rows][coulms];
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < coulms; ++j)
        {
            cout << "enter a element: " << i + 1 << j + 1 << ":";
            cin >> submatrix[i][j];
            
        }
    }

    // Display the sum matrix
    cout << "\nSum of the matrices:\n";
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < coulms; ++j)
        {
            cout << << " ";
        }
        cout << endl;
    }

      
}


#include<iostream>
using namespace std;
void transposeMatrix(int rows, int cols, int matrix[100][100]) {
    int transpose[100][100];

    // Create transpose
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Print transpose
    cout << "Transpose of the matrix:" << endl;
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
        }
    }

// }
// int main(){
//     int rows;
//     cout << "enter the number: ";
//     cin >> rows;
//     int coulms;
//     cout << "enter the number: ";
//     cin >> coulms;

//     int matrix1[rows][coulms];

//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < coulms; j++)
//         {
//             cout << "enter a element: " << i + 1 << j + 1 << ":";
//             cin >> matrix1[i][j];
//         }
//     }
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < coulms; j++)
//         {
//             cout << matrix1[i][j]<<" ";
//         }
//         cout << endl;
//     }
//     cout<<"transpose of the matrix";
//     cout << endl;
//     transposeMatrix(rows, coulms, matrix1);
// }