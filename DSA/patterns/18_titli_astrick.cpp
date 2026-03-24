#include<bits/stdc++.h>
using namespace std;
void print18(int t){
    int inis=2*t-4;
    for (int i=0;i<t-1;i++){
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
        int iniS=2;
    for(int i=2;i<=t;i++){
       for(int j=1;j<=t-i;j++){
            cout<<"*";

        }
        for(int j=1;j<=iniS;j++){
            cout<<" ";
        }
        for(int j=1;j<=t-i;j++){
            cout<<"*";

        }
        iniS+=2;
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
        print18(t);


    }

}