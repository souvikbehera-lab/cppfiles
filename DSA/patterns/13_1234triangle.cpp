#include<bits/stdc++.h>
using namespace std;
void print13(int t){
    // int a = 0; a become constant outside the loop and keeps increasing
    for (int i=0;i<t;i++){
        int a= 0;//here every row reset back to 0
        for(int j=0;j<i;j++){
            a+=1;
            cout<<a<<" ";
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
    
