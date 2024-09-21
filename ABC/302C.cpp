/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n,m;
  cin >> n >> m;
  vector<string>s(n);
  for (int i=0;i<n;i++) cin >> s.at(i);
  s.at(0).at(0) = '';
  cout << s.at(0).at(0);
  return 0;
}