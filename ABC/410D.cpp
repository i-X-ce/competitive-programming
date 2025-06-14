/*
g++ temp.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll n;

// void dfs(ll v, vector<vector<pair<ll, ll>>>& path, vector<ll> dist, vector<bool>& ved, ll& ans) {
//   if (ved.at(v)) return;
//   ved.at(v) = true;
//   for (auto& p : path.at(v)) {
//     ll next_v = p.first;
//     ll next_d = dist.at(v) ^ p.second;
//     if (next_v == n - 1){
//       if (next_d < dist.at(next_v)) {
//         dist.at(next_v) = next_d;
//       }
//       ans = min(ans, next_d);
//     } else dist.at(next_v) = next_d;
//     dfs(next_v, path, dist, ved, ans);
//   }
//   ved.at(v) = false;
// }

void dfs(ll v, ll d, vector<vector<pair<ll, ll>>>& path, vector<bool>& ved, ll& ans) {
  if (ved.at(v)) return;
  ved.at(v) = true;
  for (auto& p : path.at(v)) {
    ll nv = p.first;
    ll nd = d ^ p.second;
    if (nv == n - 1) {
      ans = min(ans, nd);
    }
    dfs(nv, nd, path, ved, ans);
  }
  ved.at(v) = false;
}

int main() {
  ll m; cin >> n >> m;
  vector<vector<pair<ll, ll>>> path(n, vector<pair<ll, ll>>(0));
  for (ll i=0;i<m;i++) {
    ll a, b, w; cin >> a >> b >> w;
    a--; b--;
    path.at(a).push_back({b, w});
  }
  vector<bool> ved(n, false);
  ll ans = LLONG_MAX;
  dfs(0, 0, path, ved, ans);
  if (ans == LLONG_MAX) {
    cout << -1 << endl;
    return 0;
  } else {
    cout << ans << endl;
  }
  // ll m; cin >> n >> m;
  // vector<vector<pair<ll, ll>>> path(n, vector<pair<ll, ll>>(0));
  // for (ll i=0;i<m;i++) {
  //   ll a, b, w; cin >> a >> b >> w;
  //   a--; b--;
  //   path.at(a).push_back({b, w});
  // }
  // vector<ll> dist(n, LLONG_MAX);
  // dist.at(0) = 0;
  // vector<bool> ved(n, false);
  // ll ans = LLONG_MAX;
  // dfs(0, path, dist, ved, ans);
  // if (ans == LLONG_MAX) {
  //   cout << -1 << endl;
  //   return 0;
  // }
  // cout << ans << endl;

  return 0;
}