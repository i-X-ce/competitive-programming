/*
g++ temp.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll n, m; cin >> n >> m;
  vector<ll> x(n);
  for (ll i=0;i<n;i++) cin >> x.at(i);
  sort(x.begin(), x.end());
  vector<pair<ll,ll>> diff(n-1);
  for (ll i=0;i<n-1;i++) {
    diff.at(i) = {x.at(i+1) - x.at(i), i};
  }
  sort(diff.rbegin(), diff.rend());
  set<ll> st;
  for (ll i=0;i<m-1;i++) {
    st.insert(diff.at(i).second);
  }
  ll ans = 0;
  ll l = 0;
  for (ll r : st) {
    ans += x.at(r) - x.at(l);
    l = r + 1;
  }
  ans += x.at(n-1) - x.at(l);
  cout << ans << endl;
  return 0;
}