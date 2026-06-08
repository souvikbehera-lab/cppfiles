// "It is the brutte force approch"
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={1,3,4,2,4,6};
    int n=arr.size();
    int d ;
    cout<<"The no of rotation you want:";
    cin>>d;
    d=d%n;
    vector<int>temp;
     for(int i = 0; i < d; i++){
        temp.push_back(arr[i]);
    }
    for (int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }
    for(int j=0;j<d;j++){
        arr[(n-d)+j]=temp[j];
    }
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


}