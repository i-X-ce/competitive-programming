/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n, q; cin >> n >> q;
  string s; cin >> s;
  vector<int>ans(n);
  int sum = 0;
  for (int i=1;i<n;i++){
    if (s.at(i-1) == s.at(i)) sum++;
    ans.at(i) = sum;
  }
  for (int i=0;i<q;i++){
    int l, r; cin >> l >> r;
    l--; r--;
    cout << ans.at(r) - ans.at(l) << endl;
  }
  return 0;
}