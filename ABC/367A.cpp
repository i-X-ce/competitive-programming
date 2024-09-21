/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int a, b, c; cin >> a >> b >> c;
  bool ok = true;
  if (b > c){
    if (c <= a && a <= b) ok = true;
    else ok = false;
  }else{
    if((0 <= a && a <= b) || (c <= a && a < 24)) ok = true;
    else ok = false;
  }
  if (ok) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}