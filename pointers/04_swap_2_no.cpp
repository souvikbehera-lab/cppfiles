#include<iostream>
using namespace std;
int main(){
  int x =3;
  int y =5;
  int* p = &x;
  int* t = &y;
  *p = 5;
  *t = 3;
  cout<<x<<"  "<<y<<endl;







}