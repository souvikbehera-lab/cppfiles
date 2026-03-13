#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter a three numbers: ";
    cin>>a;
    cin>>b;
    cin>>c;
    if(a<b){
        if(b>c){
            cout<<b<<" is greatest";
        }
        if(c>b){
            cout<<c<<" is greatest";

        }
    }
    if(b<a){
        if(a>c){
            cout<<a<<" is greatest";

        }
        if(a<c){
            cout<<c<<" is greatest";

        }
    }
    if(b==a){
        cout<<a<<" is equal to "<<b<<endl;
        cout<<c<<" is greatest";


    }


}





