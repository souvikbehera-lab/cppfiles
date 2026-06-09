#include<bits/stdc++.h> 
using namespace std;
int main(){
    int n,m;
    vector<int> ins;
    cout<<"Enter how many nos for array n : ";
    cin>>n;
    vector<int> a(n);
    cout<<"Enter "<<n<<" elements: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter how many nos for array m : ";
    cin>>m;
    vector<int> b(m);
    cout<<"Enter "<<m<<" elements: ";
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    int i=0,j=0;
    while(i<n && j<m){
        if(a[i]<b[j]){
            i++;
        }
        else if(a[i]>b[j]){
            j++;
        }
        else{
            ins.push_back(a[i]);
            i++;
            j++;
        }
    }
    for (auto it : ins){
        cout<<it<<" ";
    }

           

}