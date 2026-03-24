#include<bits/stdc++.h>
using namespace std;
void print7(int t){

    for(int i = 1;i<t;i++){
        for(int j =0;j<t-i;j++){
            cout<<" ";
            
        }
        for(int j =0;j<2*i-1;j++){
         cout<<"*";
         
        }
     
        for(int j =0;j<t-i;j++){
            cout<<" ";
            
        }
        cout<<endl;
    
    }
        for(int i = 0;i<t;i++){
            for(int j =0;j<i;j++){
                cout<<" ";
                
            }
            for(int j =0;j<2*t-(2*i+1);j++){
                cout<<"*";
        
            }
            for(int j =0;j<i;j++){
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
        cout<<"Enter a number for printing : ";
        cin>>t;
        print7(t);
        

    }
}