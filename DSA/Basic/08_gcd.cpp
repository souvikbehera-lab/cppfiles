// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n1,n2;
//     cout<<"enter number n1 and n2:";
//     cin>>n1>>n2;

//     int limit = min(n1,n2);
//     int gcd = 1;

//     for(int i=1;i<=limit;i++){
//         if (n1%i==0 && n2%i==0){
//             gcd = i;     // store latest common divisor
//         }
//     }

//     cout<<gcd<<" is the gcd";
// }
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cout<<"enter a and b:";
    cin>>a>>b;
    while (a>0 && b>0){
        if(a>b) a=a%b;
        else b=b%a;
    }
    if(a==0) cout<<b;
    else cout<<a;
    

    
    
}
