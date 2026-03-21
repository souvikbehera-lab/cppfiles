#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string d = "kageswar";
    cout<<d<<endl;
    int n= d.length();
    reverse(d.begin()+0,d.begin()+5);  
    cout<<d<<endl;
    for(int i = 0;i<n/2;i++){
        char temp = d[i];
        d[i]=d[n/2];
        d[n/2]=temp;

    }
    cout<<d<<endl;
}