#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {1,2,3,5};

    int n = size(a);

    int xor1 = 0, xor2 = 0;

    for(int i = 0; i < n; i++) {
        xor2 ^= a[i];
        xor1 ^= (i + 1);
    }

    xor1 ^= (n + 1);

    cout << (xor1 ^ xor2);
}
