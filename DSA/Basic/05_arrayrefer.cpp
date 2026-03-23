#include<bits/stdc++.h>
using namespace std;
void arre(int arr[],int n){
    for(int i=0;i<n;i++){
        arr[i]+=5;
        cout<<arr[i]<<" "<<endl;
    }
}
int main(){
    int n=5;
    int arr[n];
    for (int i=0; i<n;i++){
        cin>>arr[i];

    }
    arre( arr , n);
    for (int i=0; i<n;i++){
        cout<<arr[i]<<" "<<endl;

    }
    
}