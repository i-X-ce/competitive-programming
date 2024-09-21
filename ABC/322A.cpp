/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n; cin >> n;
  string s; cin >> s;
  if (s.find("ABC") == -1) cout << -1 << endl;
  else cout << s.find("ABC")+1 << endl;
  return 0;
}