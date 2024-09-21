/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n, m; cin >> n >> m;
  string s, t; cin >> s >> t;

  string bes, ens;
  bes = t.substr(0, n);
  ens = t.substr(m-n, n);
  if (bes == s && ens == s) cout << 0 << endl;
  else if (bes == s && ens != s) cout << 1 << endl;
  else if (bes != s && ens == s) cout << 2 << endl;
  else cout << 3 << endl;
  return 0;
}