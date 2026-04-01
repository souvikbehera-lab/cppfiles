#include<bits/stdc++.h>
using namespace std;
void print2(int t){
    for(int i=0;i<=t;i++){
        for (int j= 0;j<i;j++){
            cout<<"  ";
        }
        for (int j= 0;j<2*t-(2*i-1);j++){
            cout<<(char)(j+65)<<" ";
        }
        for (int j= 0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int t;
        cout <<"Enter the number t: ";
        cin>>t;
        print2(t);
    }
}