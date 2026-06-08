#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a={2,3,4,2,1,7};
    int n=a.size();
    int d;
    cout<<"Enter a number for rotation:";
    cin>>d;
    d=d%n;
    reverse(a.begin(), a.begin() + d);
    reverse(a.begin() + d, a.end());
    reverse(a.begin(), a.end());
     for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }


    
}