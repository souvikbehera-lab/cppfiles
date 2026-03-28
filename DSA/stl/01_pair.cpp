
// For basic DSA it needed
#include<bits/stdc++.h>
using namespace std;
int main(){
    // format 1
    pair<int,int>p={1,3};
    cout<<p.first<<" "<<p.second;
    cout<<endl;
    // format 2
    pair<int,pair<int,int>>b={2,{3,6}};
    cout<<b.first<<" "<<b.second.first;
    cout<<endl;
    // format 3
    pair<int,int>c[]={{2,7},{3,6}};
    cout<<c[1].first<<" "<<c[0].first;
    // format 4
    pair<int,string> y;
    y = {3,"souvik"};
    cout<<y.first<<" "<<y.second;




}