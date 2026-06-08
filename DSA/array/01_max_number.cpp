#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={5,2,4,2,7,1};
    int largest=arr[0];
    for(int i=0;i<sizeof(arr)/4;i++){
        if (arr[i]>largest){
            largest=arr[i];
        }
    }
    cout<<largest;
}