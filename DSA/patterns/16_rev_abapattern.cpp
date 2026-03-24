#include<bits/stdc++.h>
using namespace std;
void print16(int t){
    for (int i=0 ;i<t;i++){
        for (char a ='E'-i; a<='E';a++){
            cout<<a;
        }
        cout<<endl;
    }


        
}
int main(){
    int n;
    cin>> n;
    for(int i=0;i<n;i++){
        int t;
        cout<<"Enter the element:";
        cin>>t;
        print16(t);


    }
}
