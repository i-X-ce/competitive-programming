/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  string s, t; cin >> s >> t;
  vector<int>big(0);
  vector<int>small(0);
  vector<string>x(0);
  for (int i=0;i<s.size();i++){
    if (s.at(i) == t.at(i)) continue;
    if (s.at(i) > t.at(i)) big.push_back(i);
    else small.push_back(i);
  }
  for (int i=0;i<big.size();i++){
    s.at(big.at(i)) = t.at(big.at(i));
    x.push_back(s);
  }
  for (int i=small.size()-1;i>=0;i--){
    s.at(small.at(i)) = t.at(small.at(i));
    x.push_back(s);
  }

  cout << x.size() << endl;
  for (int i=0;i<x.size();i++) cout << x.at(i) << endl;
  return 0;
}