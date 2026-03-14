#include <iostream>
using namespace std;
int main()
{
    int arr[] = {4, 6, 8, 3, 6};
    int mul = 1;
    for (int i = 0; i <= 4; i++)
    {
        mul *= arr[i];
    }
    cout << mul;
}