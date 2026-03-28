#include<bits/stdc++.h>
using namespace std;
int main(){
    set<string>st;
    string s;
    getline(cin,s);
    st.insert(s);
    auto it = st.find("souvik");
    if (it != st.end){
        cout<<(*it);

    }

    }


