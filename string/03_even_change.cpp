#include<iostream>
using namespace std;
int main(){
    string a ="souvik is a goated boy" ;
    for(int i=0;i<a.length();i++){
        if(i%2==0){
            a[i]='a';
        }
        
    }
    cout<<a;




}