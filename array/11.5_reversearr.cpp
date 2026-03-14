
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {4, 6, 8, 3, 6};
    int n = sizeof(arr) / 4;
    int brr[n];
    for (int i = 0; i < n; i++)
    {
        int j = n - 1 - i;
        brr[i] = arr[j];
        cout << brr[i] << " ";
    }
}