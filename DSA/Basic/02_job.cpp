#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if (age<=18){
        cout<<"Eligible for job if you have a skill";
        
    }
    else if(age<=57){
        cout<<"Eligible for job ";
        if(age>=55){
            cout<<" ,but retirement soon ";

        }
    }
        else{
            cout<<"you time has come to rest and enjoy your life";
        }
    return 0;
    









}