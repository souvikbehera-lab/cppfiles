#include<bits/stdc++.h>
using namespace std;
void print20(int t){
    for (int i=0;i<t;i++){
        for (int j=0;j<t;j++){
            if(i==0 || j==0 || i==t-1 || j==t-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    
}
    int main(){ 
        int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int t;
        cout<<"Enter a number for printing : ";
        cin>>t;
        print20(t);
       

    }
}
    