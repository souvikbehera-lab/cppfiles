
#include <iostream>
using namespace std;
int main()
{
    int n, arr[n];
    cout << "Enter the number n: ";
    cin >> n;
    for (int i = 0; i <= n + 1; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i <= n + 1; i++)
    {
        cout << arr[i];
    }
}
}
