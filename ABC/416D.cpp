/*
g++ temp.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll t; cin >> t;
  for (ll cn=0;cn<t;cn++) {
    ll n, m; cin >> n >> m;
    vector<ll> a(n), b(n);
    for (ll i=0;i<n;i++) {
      cin >> a.at(i);
    }
    for (ll i=0;i<n;i++) {
      cin >> b.at(i);
    }
    sort(a.begin(), a.end(), [&](ll p1, ll p2){ return p2%m - p1%m; });
    sort(b.begin(), b.end(), [&](ll p1, ll p2){ return p2%m - p1%m; });
    for (auto p : a) {
      cout << p << " ";
    }

    map<ll, ll> cntmpa, cntmpb;
    for (ll i=0;i<n;i++) {
      cntmpa[a.at(i) % m]++;
      cntmpb[b.at(i) % m]++;
    }
    ll ans = 0;
    for (auto bp : b) {
      ll fd = m - (bp % m);
      auto it = cntmpa.lower_bound(fd);
      if (it != cntmpa.end()) {
        it->second--;
        if (it->second == 0) {
          cntmpa.erase(it);
        }
      } else {
        ans += fd;
      }
    }
  }
  return 0;
}