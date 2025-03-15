/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  float x; cin >> x;
  int ans = 0;
  if (x >= 38.0){
    ans = 1;
  }else if (x >= 37.5){
    ans = 2;
  }else {
    ans = 3;
  }
  cout << ans << endl;
  return 0;
}