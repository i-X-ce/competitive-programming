/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n, ans = 0; cin >> n;
  string s; cin >> s;
  for (int i=0;i<n-2;i++){
    if (s.at(i) == '#' && s.at(i+2) == '#' && s.at(i+1) == '.') ans++;
  }
  cout << ans << endl;
  return 0;
}