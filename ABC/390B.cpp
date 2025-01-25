/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n; cin >> n;
  bool ok = true;
  double  first, second; cin >> first >> second;
  double  diff = second / first;
  double  prev = second;
  for (int i=2;i<n;i++){
    double  a; cin >> a;
    if (prev * diff != a) ok = false;
    prev = a;
  }
  if (ok) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}