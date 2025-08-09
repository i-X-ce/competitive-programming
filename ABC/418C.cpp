/*
g++ temp.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll n, q; cin >> n >> q;
  vector<ll> a(n), asum(n, 0);
  for (ll i=0;i<n;i++) {
    cin >> a.at(i);
    
  }

  sort(a.begin(), a.end());
  vector<pair<ll, ll>> p(0);

  {  
    ll idx = 0, sum = 0;
    for (ll i=0;i<n;i++) {
      ll num = n - i;
      if (i == 0) {
        p.push_back({num, 0});
      } else if (a.at(i) != a.at(i - 1)) {
        p.push_back({num, idx});
      } else {
      }
      idx += a.at(i) * num ;
      sum += a.at(i);
    }
  }

  for (auto pi : p) {
    cout << "(" << pi.first << ", " << pi.second << ")" << " ";
  }
  cout << endl;

  return 0;
}