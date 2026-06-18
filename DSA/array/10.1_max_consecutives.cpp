#include<bits/stdc++.h> 
using namespace std;
int main(){
    vector<int> a={2,2,3,4,4,4,5,5,5,5};
    int n=size(a);
    for(int i=0;i<n;i++){
        int count=0;
        int num=a[i];
        for(int j=0;j<n;j++){
            if (a[j] == num ){
                count++;

            }
        }
        
        if(count==1){
            cout<<num;
        }
        
    }
}