#include<bits/stdc++.h>
using namespace std;
// int main(){
//     int n=1;
//     while (n<=10)
//     {
//         cout<<n<<endl;
//         n++;
//     }
    
// }

//  10 int main(){
//     int n;
//     cout<<"enter a number : ";
//     cin>>n;

//     int ld, product = 1;

//     while(n > 0){
//         ld = n % 10;
//         product = product * ld;
//         n = n / 10;
//     }

//     cout << product;
// }
// 11 int main(){
//     int n;
//     cout<<"enter a number : ";
//     cin>>n;

//     int ld, count= 0;

//     while(n > 0){
//         ld = n % 10;
//         n = n / 10;
//         count++;
//     }

//     cout << count;
// }
//12 int main(){
//     int n;
//     cout<<"enter a number : ";
//     cin>>n;

//     int ld, reverse = 0;

//     while(n > 0){
//         ld = n % 10;
//         reverse = reverse*10+ld;
//         n = n / 10;
//     }

//     cout << reverse;
// }
int main() {
    int n, original;
    cout << "enter a number : ";
    cin >> n;
    original = n;  // Save original before modifying n

    int ld, reverse = 0;

    while (n > 0) {
        ld = n % 10;
        reverse = reverse * 10 + ld;
        n = n / 10;
    }
    
    if (original == reverse) {  // Compare original, not modified n
        cout << "The number is a palindrome number" << endl;
    } else {
        cout << "The number is not a palindrome" << endl;
    }
    return 0;
}
