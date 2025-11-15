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
  bool debug = false;
  ll n, x, y; cin >> n >> x >> y;
  vector<ll> a(n);
  for (auto&& aa: a) cin >> aa;
  vector<ll> diffs(n);
  diffs.at(0) = 0;
  ll mind = 0;
  for (ll i = 1; i < n; i++) {
    diffs.at(i) = diffs.at(i-1) - ((a.at(i) - a.at(i-1)) * x) / (y - x);
    mind = min(mind, diffs.at(i));
    if (debug) {
      cout << "diff(" << i << "): ";
      cout << "(A2 - A1)X: " << ((a.at(i) - a.at(i-1)) * x) << ", ";
      cout << "(Y - X): "<< (y - x) << ", ";
      cout << ((a.at(i) - a.at(i-1)) * x) / (y - x) << endl;
    }
    if (diffs.at(i) * (y - x) != diffs.at(i-1) * (y - x) - ((a.at(i) - a.at(i-1)) * x)){
      if (debug) {
        cout << "l(" << i << "): " << diffs.at(i) * (y - x) << endl;
        cout << "r(" << i << "): " << diffs.at(i-1) - ((a.at(i) - a.at(i-1)) * x) << endl;
      }
      cout << -1 << endl;
      return 0;
    }
  }
  if (debug) {
    cout << "diffs: ";
    for (auto d : diffs) cout << d << " ";
    cout << endl;
  }
  ll sp = LLONG_MAX; // 大きい飴玉の猶予
  ll sum = 0;
  for (ll i = 0; i < n; i++) {
    ll p = diffs.at(i) - mind; // 大きい飴玉の数
    if (p > a.at(i)) {
      cout << -1 << endl;
      return 0;
    }
    sum += p;
    sp = min(sp, a.at(i) - p);
    if (debug) {
      cout << "sum(" << i << "): " << sum << endl;
      cout << "sp(" << i << "): " << sp << endl;
    }
  }
  sum += sp * n;
  cout << sum << endl;  
  return 0;
}