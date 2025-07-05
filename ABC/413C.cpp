/*
g++ temp.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll q; cin >> q;
  queue<pair<ll, ll>> a;
  bool debug = false;
  for (ll i=0;i<q;i++) {
    int query; cin >> query;
    if (query == 1) {
      ll c, x; cin >> c >> x;
      a.push({x, c});
    } else {
      ll k; cin >> k;
      ll sum = 0;
      while (k > 0 && !a.empty()) {
        pair<ll, ll> p = a.front();
        if (p.second <= k) {
          a.pop();
          k -= p.second;
          sum += p.first * p.second;
          if (debug) {
            cout << p.first << " * " << p.second << " = " << p.first * p.second << endl;
          }
        } else {
          if (debug) {
            cout << p.first << " * " << k << " = " << p.first * k << endl;
          }
          a.front().second -= k;
          sum += p.first * k;
          k -= p.second;
        }
      }
      if (debug) {
        cout << endl << "sum: ";
      }
      cout  << sum << endl;
    }
  }
  return 0;
}