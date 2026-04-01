#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"enter the no. of students:";
    cin >> n;
    cin.ignore();  //ignore newline after n

    vector<pair<string,int>> v(n);

    for (int i = 0; i < n; i++) {
        cout<<"Enter the name: ";
        getline(cin, v[i].first);
        cout<<"Enter the mark: ";
        cin >> v[i].second;
        cin.ignore();  // ignore newline after number
    }


    for (int i = 0; i < n; i++) {
        cout << v[i].first << ":" << v[i].second << endl;
    }

    return 0;
}
