#include<iostream>
using namespace std;
int main(){
    string l = "souvik is the man of culture";
    cout<<l<<" "<<l.length()<<endl;
    l=l+" also a great man";
    cout<<l<<" "<<l.length()<<endl;
    l=" also a great man"+l;
    cout<<l<<" "<<l.length();
}