#include<iostream>
using namespace std;
int fac(int x){
    int f=1;
    for(int i=1;i<=x;i++){
        f *= i;
    }
    return f;
}
int main(){int n;
    cout<<"Enter n: ";
    cin>>n;
    int r;
    cout<<"Enter r: ";
    cin>>r;
    int a=fac(n);
    int b=fac(r);
    int c=fac(n-r);
    cout<<a/(b*c);




}