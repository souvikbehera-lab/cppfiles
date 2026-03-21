#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string d = "kageswar is a boy";
    cout<<d<<endl;
    int n= d.length();
    reverse(d.begin(),d.end());  
    cout<<d<<endl;
}