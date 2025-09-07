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
  ll t; cin >> t;
  vector<ll> ans(0);
  for (int i = 0; i < t; i++) {
    ll a, b, c; cin >> a >> b >> c;
    ll mi = min({a, c}), ma = max({a, c});
    if (b >= mi) {
      ans.push_back(mi);
      continue;
    } else {
      ll nans = b;
      ma -= b;
      mi -= b;
      ll diff = ma - mi;
      if (diff > mi) {
        nans += mi;
        ans.push_back(nans);
        continue;
      }
      nans += diff;
      mi -= diff;
      nans += (mi * 2) / 3;
      ans.push_back(nans);
    }
  }
  for (auto v : ans) {
    cout << v << endl;
  }
  return 0;
}