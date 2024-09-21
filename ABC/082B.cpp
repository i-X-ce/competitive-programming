/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  string s, t; cin >> s >> t;
  sort(s.begin(), s.end());
  sort(t.rbegin(), t.rend());
  vector<pair<string, char>>pr(2);
  pr.at(0) = make_pair(s, 's');
  pr.at(1) = make_pair(t, 't');
  sort(pr.begin(), pr.end());
  if (pr.at(0).second != 's' || s == t) cout << "No" << endl;
  else cout << "Yes" << endl;
  return 0;
}