#include <iostream>
using namespace std;
int main()
{
    int arr[] = {4, 6, 8, 3, 6};
    int n = sizeof(arr) / 4;
    int max = 0;
    for (int i = 1; i <= 4; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    cout << max;
}