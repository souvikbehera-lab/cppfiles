#include<bits/stdc++.h>
using namespace std;
void print15(int t){
   
    for(int i = 0;i<t;i++){
        for(int j =0;j<t-i-1;j++){
            cout<<" ";

        }
         int a=0;
         int breakpoint = (2*i+1)/2;
        for(int j =0;j<2*i+1;j++){
            cout<<(char)(a+65);
            if (j<breakpoint) a++;
            else a--;
            
            
        }
      
        for(int j =0;j<t-i-1;j++){
            cout<<" ";

        }
          cout<<endl;
    }
                       
}
int main(){
    int n;
    cin>> n;
    for(int i=0;i<n;i++){
        int t;
        cout<<"Enter the element:";
        cin>>t;
        print15(t);


    }
}