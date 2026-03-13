#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int cnt=0;
    if(n<=1){
        cout<<n<<"is not a prime no";
    }
    else{
        for(int i=1;i<=n;i++){
            if (n%i == 0){
                cnt++;
            }

        }
        if (cnt>2){
            cout<<n<<"is a composite number.";

        }
        else{
            cout<<n<<"is a prime no";
        }
    }

}