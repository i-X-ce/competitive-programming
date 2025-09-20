/*
g++ temp.cpp -I ./ac-library 
./a.out
*/
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, -1, 0, 1};

int main() {
  ll t; cin >> t;
  for (ll case_i = 0; case_i < t; case_i++) {
    ll h, w; cin >> h >> w;
    vector<string> s(h);
    for (ll i = 0; i < h; i++) {
      cin >> s.at(i);
    }

    set<ll> blacks;
    vector<pair<ll, ll>> cnts(h * w);
    vector<set<ll>> st(h * w);

    for (ll i = 0; i < h - 1; i++) {
      for (ll j = 0; j < w - 1; j++) {
        ll id = i * w + j;
        bool black = true;
        cnts.at(id) = {0, id};
        for (ll d = 0; d < 4; d++) {
          ll ni = i + dx[d];
          ll nj = j + dy[d];
          if (s.at(ni).at(nj) == '.') {
            black = false;
            break;
          }
        }
        if (black){
          blacks.insert(id);
          for (ll d = 0; d < 4; d++) {
            ll ni = i + dx[d];
            ll nj = j + dy[d];
            cnts.at(id).first++;
          }
        }
        sort(cnts.rbegin(), cnts.rend());

        ll ans = 0;
        while(!blacks.empty()){

        }
      }
    }
  }
  return 0;
}