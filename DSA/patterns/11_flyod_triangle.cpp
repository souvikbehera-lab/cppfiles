#include<bits/stdc++.h>
using namespace std;
void print10(int t){
    for(int i=0;i<t;i++){
        for(int j=0;j<i;j++){
            if((i+j)%2==0) cout<<1;
            else cout<<0;
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
        print10(t);
        // print8(t);

    }
}
    


