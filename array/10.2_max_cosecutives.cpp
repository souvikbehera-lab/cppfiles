#include<bits/stdc++.h> 
#include<iterator>
using namespace std;
int main(){
    vector<int> a={2,3,3,3,4,4,5,5,6,6};
    vector<int> hash(7,0);
    int n= size(a);
    for(int i=0;i<n;i++){
        hash[a[i]]++;

    }
    for(int i=0;i<n;i++){
        if (hash[a[i]]== 1){
            cout<<a[i];
            break;
        }
    }
}