#include<bits/stdc++.h>
using namespace std;
void print13(int t){
    int a= 0;
    for (int i=0;i<t;i++){
        for(int j=0;j<i;j++){
            a+=1;
            cout<<(char )(a+64)<<" ";
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
        print13(t);
       

    }
}
    
