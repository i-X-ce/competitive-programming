/*
g++ temp.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<string> dist;
ll n, k, x;

// si: 深度, p: 現在のindex, k: 目標深度, cur: 現在の文字列
void add(vector<string> &s, ll si, ll p, string cur) {
  if (si == k) {
    dist.push_back(cur);
    return;
  }
  for (ll i=0;i<n;i++) {
    add(s, si + 1, i, cur + s.at(i));
  }
}

int main() {
  cin >> n >> k >> x;
  vector<string> s(n);
  for (ll i=0;i<n;i++) {
    cin >> s.at(i);
  }
  add(s, 0, 0, "");
  sort(dist.begin(), dist.end());
  cout << dist.at(x-1) << endl;
  return 0;
}