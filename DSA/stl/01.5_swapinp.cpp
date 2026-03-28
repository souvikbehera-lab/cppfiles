#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int,int>p_array[3];
    p_array[0]={4,5};
    p_array[1]={3,5};
    p_array[2]={4,6};
    swap(p_array[0],p_array[2]);
    // for( int i=0;i<3;i++){
    //     cin>>p_array[i].first>>p_array[i].second;
    // }
    for( int i=0;i<3;i++){
        cout <<p_array[i].first<<" "<<p_array[i].second;

        cout<<endl;
    }


}