/*
g++ temp.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll t; cin >> t;
  for (ll i=0;i<t;i++) {
    ll n; cin >> n;
    vector<ll> a(n);
    for (ll j=0;j<n;j++) cin >> a.at(j);
    sort(a.begin(), a.end(), [&](ll a, ll b) { return abs(a) < abs(b); });
    bool ok = true;

    for (ll j=1;j<n-1;j++) {
      if (a.at(j-1) * a.at(j+1) != a.at(j) * a.at(j)) {
        ok = false;
        break;
      }
    }

    ll pc = 0, nc = 0;
    for (ll j=0;j<n;j++) {
      if (a.at(j) > 0) {
        pc++;
      } else if (a.at(j) < 0) {
        nc++;
      }
    }
    if (abs(a.at(0)) == abs(a.at(n-1)) && abs(pc - nc) <= 1) {
      ok = true;
    }

    if (ok) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
  return 0;
}