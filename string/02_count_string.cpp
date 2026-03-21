#include<iostream>
using namespace std;
int main(){
    string a ="souvik is a goated boy" ;
    int count= 0;
    for(int i=0;i<a.length();i++){
        if(a[i]=='a'||a[i]=='o'||a[i]=='u'||a[i]=='e'||a[i]=='i')
        count++;
    }
    cout<<count;

}