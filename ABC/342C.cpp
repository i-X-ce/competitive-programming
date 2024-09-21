/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n; cin >> n;
  string s; cin >> s;
  int q; cin >> q;
  vector<vector<char>>change('z'+1, vector<char>(0));
  vector<bool>check('z'+1);
  for (int i=0;i<q;i++){
    char c, d; cin >> c >> d;
    check.at(d) = false;
    if (check.at(c)) continue;
    change.at(d).insert(change.at(d).end(), change.at(c).begin(), change.at(c).end());
    change.at(c).clear();
    change.at(d).push_back(c);
    if (c != d)check.at(c) = true;
  }
  // for (int i='a';i<='z';i++){
  //   cout << (char)i << ":";
  //   for (char num : change.at(i)) cout << num << " ";
  //   cout << endl;
  // }
  map<char, char>cmap;
  for (int i='a';i<='z';i++){
    for (char ch : change.at(i)) cmap[ch] = (char)i;
  }
  for(int i=0;i<s.size();i++){
    if (cmap.count(s.at(i))) cout << cmap[s.at(i)];
    else cout << s.at(i);
  }
  cout << endl;
  return 0;
}