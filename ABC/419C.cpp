/*
g++ temp.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool debug = false;

double dist(pair<ll, ll> p1, pair<ll, ll> p2) {
  ll dx = abs(p1.first - p2.first);
  ll dy = abs(p1.second - p2.second);
  ll d = max(dx, dy);
  return d;
}

void debug_pair(pair<ll, ll> p) {
  if (!debug) return;
  cout << "(" << p.first << ", " << p.second << ")" << endl;
}

int main() {
  ll n; cin >> n;
  vector<pair<ll, ll>> pos(n);
  pair<ll, ll> min_x, min_y, max_x, max_y;
  for (ll i=0;i<n;i++) {
    cin >> pos.at(i).first >> pos.at(i).second;
    if (i == 0) {
      min_x = max_x = pos.at(i);
      min_y = max_y = pos.at(i);
    } else {
      if (pos.at(i).first < min_x.first) min_x = pos.at(i);
      if (pos.at(i).first > max_x.first) max_x = pos.at(i);
      if (pos.at(i).second < min_y.second) min_y = pos.at(i);
      if (pos.at(i).second > max_y.second) max_y = pos.at(i);
    }
  }

  pair<ll, ll> _ave = {(max_x.first + min_x.first) / 2, (max_y.second + min_y.second) / 2};
  vector<pair<ll, ll>> ave(0);
  for (ll i=-1;i<=1;i++) {
    for (ll j=-1;j<=1;j++) {
      pair<ll, ll> p = {_ave.first + i, _ave.second + j};
      if (_ave.first + i < 0 || _ave.second + j < 1) continue;
      ave.push_back(p);
    }
  }

  ll ans = LLONG_MAX;
  vector<pair<ll, ll>> pairs = {min_x, max_x, min_y, max_y};

  for (auto ave_p : ave) {
    ll atmp = 0;
    for (ll i=0;i<pairs.size();i++) {
      ll d = dist(ave_p, pairs.at(i));
      if (debug) {
        cout << "d: " << d << endl;
      }
      atmp = max(atmp, d);
    }
    if (debug) {
      cout << "atmp: " << atmp << endl;
      cout << endl;
    }
    ans = min(ans, atmp);
  }
  
  cout << ans << endl;
  return 0;
}
