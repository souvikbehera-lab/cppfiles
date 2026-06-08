#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a={3,4,0,3,0,5,6};
    int n = size(a);
    int j= -1;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            j=i;
            break;

        }

    }
    for(int i= j+1;i<n;i++){
        if(a[i]!=0){
            swap(a[i],a[j]);
            j++;
        }

    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}