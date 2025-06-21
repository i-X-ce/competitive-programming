/*
g++ temp.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;


struct His{
  int q;
  bool isRef;
  pair<ll, ll> p;
  string s;
};

string joinHis(vector<vector<His>> &his, pair<ll, ll> point) {
  ll index = point.first, hisIndex = point.second;
  // cout << "index: " << index << " hi: " << hisIndex << endl;
  if (hisIndex < 0 || index < 0 ) return "";
  His h = his.at(index).at(hisIndex);
  if (h.isRef) {
    return joinHis(his, h.p);
  } else {
    return joinHis(his, {index, hisIndex - 1}) + h.s;
  }
}

int main() {
  ll n, q; cin >> n >> q;
  pair<ll, ll> server = {-1, -1};
  vector<vector<His>> his(n, vector<His>(0));
  for (ll i=0;i<q;i++) {
    int query; cin >> query;
    int p; cin >> p; p--;
    if (query == 1) {
      if (server.first == -1) continue;
      His h = {
        .q = query,
        .isRef = true,
        .p = server,
        .s = "",
      };
      his.at(p).push_back(h);
    } else if (query == 2) {
      string s; cin >> s;
      His h = {
        .q = query,
        .isRef = false,
        .p = {-1, -1},
        .s = s,
      };
      his.at(p).push_back(h);
    } else if (query == 3) {
      if (his.at(p).size() == 0) continue;
      server = {p, his.at(p).size() - 1};
    }
    // cout << endl << p + 1 << ".size: " << his.at(p).size() << endl;
  }

  string result = server.first == -1 ? "" : joinHis(his, server);
  cout << result << endl;
  return 0;
}