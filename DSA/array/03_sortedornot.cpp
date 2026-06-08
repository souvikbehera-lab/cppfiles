#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    bool isSorted = true;

    for(int i = 1; i < n; i++){
        if(arr[i-1] > arr[i]){
            isSorted = false;
            break;
        }
    }

    if(isSorted){
        cout << "True";
    } else {
        cout << "False";
    }

    return 0;
}