#include<bits/stdc++.h>
using namespace std;
void print21(int t){
    for(int i=0;i<2*t-1;i++){
        for(int j=0;j<2*t-1;j++){
            int top=i;
            int bottom=j;
            int right=(2*t-2)-j;
            int left=(2*t-2)-i;
            cout<<(t-min(min(top,bottom),min(right,left)));
        }
        cout<<endl;

    }

}
int main(){
      int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int t;
        cout<<"Enter a number for printing : ";
        cin>>t;
        print21(t);
       

    }
}