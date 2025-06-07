/*
g++ temp.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n; cin >> n;
  vector<ll> a(n);
  for (int i=0;i<n;i++) {
    cin >> a.at(i);
  }
  ll ans = 0;
  for (ll i=0;i<=n;i++) {
    int cnt = 0;
    for (ll j=0;j<n;j++) {
      if (a.at(j) >= i) cnt ++;
    }
    if (cnt >= i) {
      ans = max(ans, i);
    }
  }
  cout << ans << endl;
  return 0;
}