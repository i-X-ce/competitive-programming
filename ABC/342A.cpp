/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  string s, s2; cin >> s;
  s2 = s;
  sort(s.begin(), s.end());
  string a;
  if (s.at(0) == s.at(1)) a = s.at(s.size()-1);
  else a = s.at(0);
  cout << s2.find(a) + 1 << endl;
  return 0;
}