/*
g++ temp.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll n, r, c; cin >> n >> r >> c;
  string s; cin >> s;
  ll x = 0, y = 0;
  map<pair<ll, ll>, bool> visited;
  visited[{0, 0}] = true;
  for (ll i=0;i<n;i++){
    if (s.at(i) == 'N') {
      x++; r++;
    } else if (s.at(i) == 'W') {
      y++; c++;
    } else if (s.at(i) == 'S') {
      x--; r--;
    } else if (s.at(i) == 'E') {
      y--; c--;
    }
    visited[{x, y}] = true;
    // cout << "x: " << x << ", y: " << y << endl;
    // cout << "r: " << r << ", c: " << c << endl;
    cout << (visited[{r, c}] ? 1 : 0);
  }
  cout << endl;
  return 0;
}