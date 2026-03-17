// this program has a problem
#include<iostream>
using namespace std;
int power(int a,int b){
    if(b==1) return a;
    int x =power(a,b/2);
    return x * x ;

}
int main(){
    int a;
    cout<<"Enter the number a: ";
    cin>>a;
    int b;
    cout<<"Enter the number b: ";
    cin>>b;
    cout<<power(a,b);

             

}