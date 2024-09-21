/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  string s, t; cin >> s >> t;
  vector<string>s1 = {"AB", "BA", "BC", "CB", "CD", "DC", "DE", "ED", "EA", "AE"};
  vector<string>s2 = {"AC", "CA", "AD", "DA", "BE", "EB", "BD", "DB", "CE", "EC"};
  int sl = 2, tl = 2;
  for (int i=0;i<s1.size();i++) if (s1.at(i) == s) sl = 1;
  for (int i=0;i<s1.size();i++) if (s1.at(i) == t) tl = 1;
  if (sl == tl) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}