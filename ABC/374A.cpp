/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  string s; cin >> s;
  string t = s.substr(s.size()-3, 3);
  if (t == "san") cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}