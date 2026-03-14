#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i <= n; i++)
    {
        cout << " Enter the number of i: ";
        cin >> arr[i];
    }
    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] * arr[i] << endl;
    }
}