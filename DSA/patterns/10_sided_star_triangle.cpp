#include<bits/stdc++.h>
using namespace std;
void print10(int t){
    for(int i=1;i<=2*t-1;i++){
        int stars =i;
        if(i>t) stars=2*t-i;
        for(int j=1;j<=stars;j++){
            cout<<"💕";
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