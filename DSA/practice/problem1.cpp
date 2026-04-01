#include<bits/stdc++.h>
using namespace std;
void p1(int n,int k){

    for (int i=0;i<k;i++){
        for (int j=0;j<k;j++){
            cout<<"*";
        }
        cout<<endl;
    }

}
void p2(int n,int k){
    for(int i=0;i<k;i++){
        for (int j=0;j<k-i;j++){
            cout<<i;
        }
        cout<<endl;
    }

}
void p3(int n,int k){
    for (int i=1;i<=k;i++){
        for (int j=0;j<k-i;j++){
            cout<<" ";
        }
        for (int l=1;l<=2*i-1;l++){
            cout<<"*";
        }
        
        cout<<endl;
    }
    for (int i=2;i<=k;i++){
        for (int j=0;j<i-1;j++){
            cout<<" ";
        }
        for (int l=1;l<=2*(k-i)+1;l++){
            cout<<"*";
        }
        
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int k;
    for (int i=0;i<n;i++){
        cout<<"The no. parttern you want: ";
        cin>>k; 
        p3(n,k);
    }
}