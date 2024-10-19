/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n, c; cin >> n >> c;
  int ans = 1;
  int t; cin >> t;
  for (int i=0;i<n-1;i++){
    int ti; cin >> ti;
    if (ti - t < c) continue;
    ans++;
    t = ti;
  }
  cout << ans << endl;
  return 0;
}