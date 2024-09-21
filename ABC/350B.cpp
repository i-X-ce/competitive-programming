/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n, q; cin >> n >> q;
  vector<bool>tmp(n, true);
  for (int i=0;i<q;i++){
    int t; cin >> t; t--;
    tmp.at(t) = !tmp.at(t);
  }
  int ans = 0;
  for (int i=0;i<n;i++) if (tmp.at(i)) ans++;
  cout << ans << endl;
  return 0;
}