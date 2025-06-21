/*
g++ temp.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll n, q; cin >> n >> q;
  vector<ll> a(q);
  for (ll i=0;i<q;i++) {
    cin >> a.at(i);
  }
  vector<bool> mp(n, false);
  ll cnt = 0;
  for (ll i=0;i<q;i++) {
    ll x = a.at(i) - 1;
    int bc = 0;
    if (x - 1 >= 0 && mp.at(x - 1)) bc++;
    if (x + 1 < n && mp.at(x + 1)) bc++;
    mp.at(x) = !mp.at(x);
    if (mp.at(x)) {
      if (bc == 0) {
        cnt++;
      } else if (bc == 2) {
        cnt--;
      }
    } else {
      if (bc == 0) {
        cnt--;
      } else if (bc == 2) {
        cnt++;
      }
    }
    cout << cnt << endl;
  }
  return 0;
}