#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int,string>m;
    m[1] = "sl";
    m[2] = "r";
    m[3] = "av";
    m[4] = "abc";
    for(auto &pr : m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}