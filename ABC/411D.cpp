/*
g++ temp.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;


struct His{
  int q;
  pair<ll, ll> p;
  string s;
};

string joinHis(vector<vector<His>> &his, pair<ll, ll> point) {
  ll index = point.first, hisIndex = point.second;
  // cout << "index: " << index << " hi: " << hisIndex << endl;
  if (hisIndex < 0 || index < 0 ) return "";
  His h = his.at(index).at(hisIndex);
  if (h.q == 1) {
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
      His h = {
        .q = query,
        .p = server,
        .s = "",
      };
      his.at(p).push_back(h);
    } else if (query == 2) {
      string s; cin >> s;
      His h = {
        .q = query,
        .p = {-1, -1},
        .s = s,
      };
      his.at(p).push_back(h);
    } else if (query == 3) {
      server = {p, his.at(p).size() - 1};
    }
    // cout << endl << p + 1 << ".size: " << his.at(p).size() << endl;
  }

  string result = server.first == -1 ? "" : joinHis(his, server);
  cout << result << endl;
  return 0;
}