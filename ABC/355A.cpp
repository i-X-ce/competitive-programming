/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  string s = "...";
  int a, b; cin >> a >> b;
  s.at(a-1) = 'o'; s.at(b-1) = 'o';
  if (a != b) cout << s.find('.') + 1 << endl;
  else cout << -1 << endl;
  return 0;
}