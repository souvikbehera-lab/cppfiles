#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, 4, 5, 6, 7};
    for (int i = 0; i <= 4; i++)
    {
        if (2 * i - 1 >= 0)
            cout << 2 * arr[i] << endl;
        else
            cout << arr[i] + 10 << endl;
    }
}