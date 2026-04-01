#include<bits/stdc++.h>
using namespace std;
void print5(int t){
    char c ='A';
    for (int i=0; i<=t; i++){
        for(int j=0;j<t-i+1;j++){
            cout<<c<<" ";
            c++;
        }
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;

    
    }
}
int main(){
    int n;
    cin >>n;
    for (int i=0;i<n;i++){
        int t;
        cout <<"Enter a number: ";
        cin>>t;
        print5(t);
    }
}