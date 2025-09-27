/*
g++ temp.cpp -I ./ac-library 
./a.out
*/
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  ll n, q; cin >> n >> q;
  vector<ll> asum(n);
  for (ll i = 0; i < n; i++) {
    ll a; cin >> a;
    asum.at(i) = i == 0 ? a : asum.at(i - 1) + a;
  }
  ll index = 0;
  for (ll qi = 0; qi < q; qi++) {
    ll q; cin >> q;
    if (q == 1) {
      ll c; cin >> c;
      index = (index + c) % n;
    } else if (q == 2) {
      ll l, r; cin >> l >> r;
      l--; r--;
      l = (l + index) % n;
      r = (r + index) % n;
      
      if (l <= r) {
        cout << asum.at(r) - (l == 0 ? 0 : asum.at(l - 1)) << endl;
      } else {
        cout << asum.at(n - 1) - (l == 0 ? 0 : asum.at(l - 1)) + asum.at(r) << endl;
      }
    }
  }
  return 0;
}