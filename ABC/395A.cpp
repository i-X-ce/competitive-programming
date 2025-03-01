/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n; cin >> n;
  bool ok = true;
  int prev; cin >> prev;
  for (int i=1;i<n;i++){
    int a; cin >> a;
    if (!(a > prev)) ok = false;
    prev = a;
  }
  cout << (ok ? "Yes" : "No") << endl;
  return 0;
}