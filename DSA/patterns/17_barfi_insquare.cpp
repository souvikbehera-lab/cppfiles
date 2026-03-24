#include<bits/stdc++.h>
using namespace std;
void print17(int t){
    int iniS=0;
    for(int i=1;i<=t;i++){
       for(int j=0;j<=t-i;j++){
            cout<<"*";

        }
        for(int j=0;j<iniS;j++){
            cout<<" ";
        }
        for(int j=0;j<=t-i;j++){
            cout<<"*";

        }
        iniS+=2;
        cout<<endl;
    }
    int inis=2*t-4;
    for(int i=1;i<=t-1;i++){
       for(int j=0;j<=i;j++){
            cout<<"*";

        }
        for(int j=0;j<inis;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<"*";

        }
        inis-=2;
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
        print17(t);


    }
}