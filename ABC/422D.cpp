/*
g++ temp.cpp
./a.out
*/
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  ll n, k; cin >> n >> k;
  ll u = 0;
  vector<ll> a(1, k);
  for (ll i = 0; i < n; i++) {
    ll mi = k, ma = 0;
    vector<ll> na(a.size() * 2);
    for (ll j = 0; j < a.size(); j++) {
      ll nv1 = a.at(j) / 2, nv2 = a.at(j) / 2 + a.at(j) % 2;
      na.at(j * 2) = nv1;
      na.at(j * 2 + 1) = nv2;
      mi = min({mi, nv1, nv2});
      ma = max({ma, nv1, nv2});
    }
    u = max(u, ma - mi);
    a = na;
  }
  cout << u << endl;
  for (auto v : a) {
    cout << v << " ";
  }
  cout << endl;
  return 0;
}