#include<bits/stdc++.h>
using namespace std;
void print12(int t ){
    int space = 2*(t-1);
    for (int i=0;i<=t;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
            
        }
        for(int j=0;j<=space;j++){
            cout<<" ";
            
        }
        for(int j=i;j>=1;j--){
            cout<<j;
            
        }
        space -= 2;
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
        print12(t);
        

    }
}