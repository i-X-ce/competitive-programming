/*
g++ temp.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n; cin >> n;
  string t, a; cin >> t >> a;
  bool ok = false;
  for (int i=0;i<n;i++){
    if (t.at(i) == a.at(i) && t.at(i) == 'o') {
      ok = true;
      break;
    }
  }
  cout << (ok ? "Yes" : "No") << endl;
  return 0;
}