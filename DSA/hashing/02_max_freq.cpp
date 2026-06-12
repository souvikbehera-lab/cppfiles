#include<bits/stdc++.h>
using namespace std;
int main(){
      int n;
    cin>>n;
    int arr[n];
    map<int,int>m;
    int maxfreq = 0;
    int maxans=0;
    for (int i=0;i<n;i++){
        cin>>arr[i];
        m[arr[i]]++;

    }
    // for (auto it : m){
    //     cout<<it.first<<"->"<<it.second<<endl;
    for(auto it : m)
{
    if(it.second > maxfreq)
    {
        maxfreq = it.second;
        maxans = it.first;
    }
}
    cout<<maxans<<endl;
}

