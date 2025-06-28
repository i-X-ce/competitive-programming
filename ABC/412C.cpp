/*
g++ temp.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  bool debug = false;
  ll t; cin >> t;
  vector<ll> anss(0);
  for (ll i=0;i<t;i++) {
    ll n; cin >> n;
    vector<ll> s(n-2);
    ll s1, sn;
    cin >> s1;
    for (ll j=0;j<n-2;j++) cin >> s.at(j);
    cin >> sn;

    if (s1 * 2 >= sn) {
      anss.push_back(2);
      continue;
    } else if (s1 > sn) {
      anss.push_back(-1);
      continue;
    }

    sort(s.begin(), s.end());
    ll ans = 0;
    ll sv = s1 * 2;
    vector<ll> tmp(0);
    auto itrv = tmp.begin();

    while(true) {
      if (s.size() == 0) {
        if (s1 * 2 >= sn) {
          ans = 0;
        } else {
          ans = -1;
        }
        break;
      }

      auto tmpit = upper_bound(s.begin(), s.end(), sv);
      if (tmpit == s.begin()) {
        ans = -1;
        break;
      }
      auto it = prev(tmpit);
      ll v = *it;
      ans++;
      if (it == itrv) {
        if (debug) cout << "(same: " << i << ", v: " << v << ")" << endl;
        ans = -1;
        break;
      }
      if (v * 2 >= sn) {
        if (debug) cout << "(end: " << i << ", v: " << v << ")" << endl;
        break;
      }
      
      if (debug) cout << "(debug: " << i << ", v: " << v << ", sv: " << sv << ")" << endl;
      sv = v * 2;
      itrv = it;
    }
    if (ans == -1) {
      anss.push_back(-1);
    } else {
      anss.push_back(ans + 2);
    }
  }
  for (ll v : anss) {
    cout << v << endl;
  }
  return 0;
}