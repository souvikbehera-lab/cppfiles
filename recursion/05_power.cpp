#include<iostream>
using namespace std;
int po(int a,int b){
    if(b==0) return 1;
    return a * po(a,b-1);

}
int main(){
    int a;
    cout<<"Enter the number a: ";
    cin>>a;
    int b;
    cout<<"Enter the number b: ";
    cin>>b;
    cout<<po(a,b);

             

}