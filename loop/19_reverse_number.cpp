#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int reve = 0;
    while (n>0)
    {
        int ld = n%10;
        reve=reve*10+ld;
        n/=10;
        
    
    }
    cout<<reve<<endl;
}