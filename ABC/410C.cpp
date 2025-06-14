/*
g++ temp.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll n, q; cin >> n >> q;
  vector<ll> a(n);
  for (ll i=0;i<n;i++) a.at(i) = i + 1;
  ll index = 0;
  for (ll i=0;i<q;i++) {
    int query; cin >> query;
    if (query == 1) {
      ll p, x; cin >> p >> x; p--;
      a.at((p + index) % n) = x;
    } else if (query == 2) {
      ll p; cin >> p; p--;
      cout << a.at((p + index) % n) << endl;
    } else if (query == 3) {
      ll k; cin >> k;
      index = (index + k) % n;
    }
  }
  return 0;
}