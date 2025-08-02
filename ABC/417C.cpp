/*
g++ temp.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll n; cin >> n;
  map<ll, ll> mp;
  map<ll, ll> mp2;
  for (ll i=1;i<=n;i++) {
    ll a; cin >> a;
    mp[i - a]++;
    mp2[i + a]++;
  }
  ll ans = 0;
  for (auto p : mp) {
    ll x = p.first;
    ll y = p.second;
    if (mp2.count(x)) {
      ans += y * mp2[x];
    }
  }
  cout << ans << endl;
  return 0;
}