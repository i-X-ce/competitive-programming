/*
g++ temp.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n, k; cin >> n;
  vector<int> a(n);
  for (int i=0;i<n;i++) cin >> a.at(i);
  cin >> k;
  int ans = 0;
  for (int i=0;i<n;i++) {
    if (a.at(i) >= k) ans++;
  }
  cout << ans << endl;
  return 0;
}