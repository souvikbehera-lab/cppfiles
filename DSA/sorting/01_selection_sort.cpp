#include<bits/stdc++.h>
using namespace std;
void selectionSort(vector<int>& arr,int n) {
    for (int i=0;i<=n-2;i++){
        int min = i;
       
        for(int j=i+1;j<=n-1;j++){
            if (arr[j]<arr[min]){
               min=j;
            }

        }
         int temp = arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
       
    }

}

int main(){
    int n;
    cout << "enter a number of elements: ";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter element "<<i+1<<endl;
        cin >> arr[i];

    }
    selectionSort(arr, n);
    cout<<"sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i]<<" ";
    }
}