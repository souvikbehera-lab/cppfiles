#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int,int> freq;

for(int x : a){
    freq[x]++;
}

for(int x : a){
    if(freq[x] == 1){
        cout << x;
        break;
    }
}
}