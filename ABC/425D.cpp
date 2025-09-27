/*
g++ temp.cpp -I ./ac-library 
./a.out
*/
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;

void prints(vector<string> s) {
  for (auto str : s) {
    cout << str << endl;
  }
}

int main() {
  bool debug = true;
  ll h, w; cin >> h >> w;
  vector<string> s(h);
  for (ll i = 0; i < h; i++) cin >> s.at(i);
  vector<vector<bool>> visited(h, vector<bool>(w, false));

  int dx[] = {-1, 0, 1, 0};
  int dy[] = {0, -1, 0, 1};
  queue<pair<ll, ll>> st;  
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      if (s.at(i).at(j) == '#') {
        st.push({i, j});
      }
    }
  }
  while(!st.empty()) {
    auto [y, x] = st.front(); st.pop();
    visited.at(y).at(x) = true;

    for (int i = 0; i < 4; i++) {
      int ny = y + dy[i], nx = x + dx[i];
      if (ny < 0 || ny >= h || nx < 0 || nx >= w) continue;
      int cnt = 0;
      if (debug) cout << "(ny, nx) = (" << ny << ", " << nx << ")" << endl;
      for (int j = 0; j < 4; j++) {
        int nny = ny + dy[j], nnx = nx + dx[j];
        if (nny < 0 || nny >= h || nnx < 0 || nnx >= w) continue;
        if (s.at(nny).at(nnx) == '#') cnt++;
        if (cnt > 1) break;
      }
      if (cnt == 1) {
        s.at(ny).at(nx) = '#';
        if (visited.at(ny).at(nx)) continue;
        st.push({ny, nx});
      }
    }
    if (debug) {
      cout << "----" << endl;
      prints(s);
      cout << "----" << endl;
    }
  }
  ll cnt = 0;
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      if (s.at(i).at(j) == '#') cnt++;
    }
  }
  cout << cnt << endl;
  if (debug) prints(s);
  return 0;
}