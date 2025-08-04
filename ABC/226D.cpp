/*
g++ temp.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll n; cin >> n;
  vector<pair<ll, ll>> points(n);
  for (ll i=0;i<n;i++) {
    ll x, y; cin >> x >> y;
    points.at(i) = {x, y};
  }
  set<double> st;
  bool y_zero = false;
  for (ll i=0;i<n;i++) {
    for (ll j=i+1;j<n;j++) {
      double x = points.at(i).first - points.at(j).first;
      double y = points.at(i).second - points.at(j).second;
      if (y == 0) {
        y_zero = true;
        continue;
      }
      st.insert(x / y);
    }
  }
  cout << st.size() * 2 + (y_zero ? 2 : 0) << endl;
  return 0;
}