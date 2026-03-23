#include<bits/stdc++.h>
using namespace std;
int main(){
    ifstream in("input.txt");
    ofstream out("output.txt");
    int x;
    in>>x;
    if (x<25){
        out<<"f";
    }
    else if(x<=44){
        out<<"e";
    }
    else if(x<=60){
        out<<"d";
    }
    else if(x<=75){
        out<<"c";
    }
    else if(x<=80){
        out<<"b";
    }
    else if(x<=90){
        out<<"a";
    }
    else if(x<=100){
        out<<"a+";
    }
}