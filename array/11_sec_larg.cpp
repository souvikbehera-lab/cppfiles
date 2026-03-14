
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {4, 6, 8, 3, 6};
    int n = sizeof(arr) / 4;
    int mx = INT_MIN;
    for (int i = 1; i <= 4; i++)
    {
        mx = max(mx, arr[i]);
    }
    int smx = INT_MIN;
    for (int i = 1; i <= 4; i++)
    {
        if (arr[i] != mx)
            smx = max(smx, arr[i]);
    }
    cout << smx;
}