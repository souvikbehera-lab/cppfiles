#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a={1,1,2,3,4,5,6,7};
    vector<int> b={1,2,2,3,8,9};
    int n1=size(a);
    int n2=size(b);
    vector<int> uniona;
    int i=0;
    int j=0;
    while(i<n1 && j<n2){
        if(a[i]<=b[j]){
            if( uniona.size() ==0 || a[i]!=uniona.back() ){
                uniona.push_back(a[i]);

            }
            i++;
        }
        else{
            if(   uniona.size() ==0 || b[j]!=uniona.back()){
                uniona.push_back(b[j]);

            }
            j++;


        }
    }
    while(j<n2){
        if( uniona.size() ==0 || b[j]!=uniona.back() ){
            uniona.push_back(b[j]);
        }
        j++;
    }
    while(i<n1){
        if( uniona.size() ==0 || a[i]!=uniona.back() ){
            uniona.push_back(a[i]);
        }
        i++;      
    }
    for(int i=0;i<uniona.size();i++){
        cout<<uniona[i]<<" ";
    }



}