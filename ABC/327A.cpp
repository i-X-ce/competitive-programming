/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n; cin >> n;
  string s; cin >> s;
  if (s.find("ab") != -1 || s.find("ba") != -1) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}