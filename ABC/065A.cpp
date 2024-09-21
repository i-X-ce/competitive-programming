/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  long long x,a,b;
  cin >> x >> a >> b;
  if (a >= b){
    cout << "delicious";
  }else{
    if (a+x >= b){
      cout << "safe";
    }else{
      cout << "dangerous";
    }
  }
  return 0;
}