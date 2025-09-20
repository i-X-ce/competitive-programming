/*
g++ temp.cpp -I ./ac-library 
./a.out
*/
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;

ll ans = 0;

void dfs(vector<vector<ll>> &path, vector<bool> &visited, ll v) {
  if (visited.at(v)) return;
  ans++;
  visited.at(v) = true;
  for (auto nv : path.at(v)) {
    dfs(path, visited, nv);
  }
}

int main() {
  ll n; cin >> n;
  vector<vector<ll>> path(n, vector<ll>(0));
  set<ll> st;
  for (ll i = 0; i < n; i++) {
    ll a, b; cin >> a >> b;
    if (a == 0 && b == 0) {
      st.insert(i);
      continue;
    }
    a--; b--;
    path.at(a).push_back(i);
    path.at(b).push_back(i);
  }
  vector<bool> visited(n, false);
  for (auto v : st) {
    dfs(path, visited, v);
  }

  cout << ans << endl;
  return 0;
}