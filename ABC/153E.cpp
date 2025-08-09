/*
g++ temp.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll h, n; cin >> h >> n;
  vector<vector<pair<ll, ll>>> dp(n, vector<pair<ll, ll>>(h + 1, {0, 0}));
  for (ll i=0;i<n;i++) {
    ll a, b; cin >> a >> b;
    for (ll j=1;j<=h;j++) {
      pair<ll, ll> new_p =  dp[i][j - 1];
      if (new_p.first < j) {
        new_p.first += a;
        new_p.second += b;
      }
      if (i > 0 && j - a >= 0) { 
        pair<ll, ll> prev2 = dp[i - 1][j];
        if (prev2.second < new_p.second) {
          new_p = prev2;
        }
        if (j - a >= 0) {
          pair<ll, ll> prev3 = dp[i - 1][j - a];
          prev3.first += a;
          prev3.second += b;
          if (prev3.second < new_p.second) {
            new_p = prev3;
          }
        }
      }
      dp[i][j] = new_p;
    }
  }

  // for (auto &row : dp) {
  //   for (auto &p : row) {
  //     cout << "(" << p.first << ", " << p.second << ") ";
  //   }
  //   cout << endl;
  // }

  cout << dp[n - 1][h].second << endl;
  return 0;
}