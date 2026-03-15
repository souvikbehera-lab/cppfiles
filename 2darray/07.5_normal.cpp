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
    int transpose[rows][coulms];
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < coulms; j++)


        {
            cout << "enter a element: " << i + 1 << j + 1 << ":";
            cin >> matrix1[i][j];
        }
        }  
        
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < coulms; j++)
       {
          cout << matrix1[i][j]<<" ";
       }
       cout << endl;
    }
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < coulms; j++)
       {
        transpose[j][i]= matrix1[i][j];
       }
       
    }
    for (int i = 0; i < coulms; i++){
        for (int j = 0; j < rows; j++)
       {
          cout<<transpose[i][j]<<" ";
       }
       cout << endl;
    }

}