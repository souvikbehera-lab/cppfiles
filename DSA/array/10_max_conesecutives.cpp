#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={0,1,1,0,2,1,1,1};
    int n=size(arr);
    int maxi=0;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){

            count++;
            maxi=max(maxi,count);
        }
        else{
            count=0;
            
        }
    }
    cout<<maxi;
    return 0;
}