#include<bits/stdc++.h>
using namespace std;
void ssmallest(vector<int> &vec,int n){
    int smallest = vec[0];
    int ssm=INT_MAX;
    for(int i=1;i<n;i++){
        if(vec[i]<smallest){
            ssm = smallest;
            smallest=vec[i];

        }
        else if(vec[i]!=smallest && vec[i]<ssm){
            ssm= vec[i];
        }
    }
    cout<<"smallest: "<<smallest<<endl<<"second_smallest: "<<ssm;
}
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    // Create a vector and pre-allocate memory for 'n' elements
    vector<int> vec(n); 

    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> vec[i]; // Directly read into the index
    }
    ssmallest(vec,n);
    return 0;
}
