#include<iostream>
using namespace std;
void swap(int x,int y){ //if we add & after the "int&" like this then the memory will be same
    
    cout<<&x<<endl;
    int temp = x ;
    x = y  ;
    y = temp; 
} 
int main(){
    int x = 3;
    cout<<&x<<endl;
    int y = 5;
    cout<<x<<" "<<y<<endl;
    swap(x,y);
    cout<<x<<" "<<y<<endl;
}