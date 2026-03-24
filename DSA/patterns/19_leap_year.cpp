#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a year to check leap year:";
    cin>>n;
    if (n%4==0){
        if(n%400==0){
            cout<<n<<" is a leap year";
        }
        else if(n%100!=0){
            cout<<n<<" is a leap year";
        }
        else{
            cout<<n<<" is not a leap year";
            
        }
    }
    else{
        cout<<n<<" is not a leap year";
        
    }
}