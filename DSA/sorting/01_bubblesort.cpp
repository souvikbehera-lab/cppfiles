#include<bits/stdc++.h>
#include<iterator>
using namespace std;
int main(){
    vector<int> a={5,1,4,3,2};
    int n= size(a); //we can also write this a.size()
    for(int i=0;i<n-1;i++){
        int flag=0;
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                int temp =a[j]; //we can write here swap(a[j],a[j+1]);
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0) {
            break;

        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}