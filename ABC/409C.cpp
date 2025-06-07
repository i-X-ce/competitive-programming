/*
g++ temp.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll n, l; cin >> n >> l;
  if (l % 3 != 0) {
    cout << 0 << endl;
    return 0;
  }
  ll pr = l / 3;
  vector<vector<ll>> tri(pr, vector<ll>(3));
  ll x = 0;
  tri.at(0).at(0) = 1; 
  for (ll i=0;i<n-1;i++) {
    ll d; cin >> d;
    x += d;
    ll p = x % pr;
    x %= l;
    tri.at(p).at(x / pr)++;
  }
  // for (ll i=0;i<pr;i++) {
  //   for (ll v : tri.at(i)) {
  //     cout << v << " ";
  //   }
  //   cout << endl;
  // }
  ll ans = 0;
  for (ll i=0;i<pr;i++) {
    ll cnt = 1;
    for (ll j=0;j<3;j++) cnt *= tri.at(i).at(j);
    ans += cnt;
  }
  cout << ans << endl;
  return 0;
}