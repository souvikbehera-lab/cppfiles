#include<bits/stdc++.h>
using namespace std;
void printvector(vector<int>v){
    cout<<"size: "<<v.size()<<endl;
    for (int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
        
}
int main(){
    vector<vector<int>>v;
    int N;
    cin >>N;
    for (int i=0;i<N;i++){
        int n;
        cout<<"enter the value of n: ";
        cin>>n;
        vector<int>temp;
        for(int j=0;j<n;j++){
            int x;
            cin>>x;  
            temp.push_back(x);
            
        }
        v.push_back(temp);
        
    }
     for (int i=0;i<N;i++){
         printvector(v[i]);
        }
        cout<<v[0][1];

}