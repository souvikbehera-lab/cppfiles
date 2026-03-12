#include<iostream>
using namespace std;
int main(){
    int cp;
    cout<<"Enter cost price : ";
    cin>>cp;
    int sp;
    cout<<"Enter selling price : ";
    cin>>sp;
    if(cp<sp){
        cout<<"you make a profit"<<endl;
        cout<<"congrats";
    }
    if(cp==sp){
        cout<<"you make no profit"<<endl;

    }
    if(cp>sp){
        cout<<"you make a loss"<<endl;


    }











}