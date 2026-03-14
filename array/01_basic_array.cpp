#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    for (int i = 0; i <= 5; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i <= 5; i++)
    {
        cout << arr[i] * 3 << endl;
    }
    arr[0] = 100;
    for (int i = 0; i <= 5; i++)
    {
        cout << arr[i] * 3 << endl;
    }
}