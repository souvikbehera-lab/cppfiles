#include<bits/stdc++.h>         
using namespace std;
int main(){
    int arr[]={7,3,4,8,2,2,34};
    int lar=arr[0];
    for(int i=0;i<sizeof(arr)/4;i++){
        if(arr[i]>lar){
            lar=arr[i];

        }
    }
    cout<<lar<<endl;
    int seclar=INT_MIN;
    for (int i=0;i<sizeof(arr)/4;i++){
        if (arr[i]>seclar && arr[i]!=lar){
            seclar=arr[i];
        }

    }
    cout<<seclar;

}