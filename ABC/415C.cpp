/*
g++ temp.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void dfs(string s, ll n, bool &ans){
  if (ans) {
    return;
  }
  if (p == n) {
    ans = true;
    return;
  }

  for (int i=0;i<s.size();i++) {
    cout << p << ":" << s << endl;
    if (s.at(i) == '1') {
      continue;
    } else {
      s.at(i) = '1';
      dfs(s, (ll)stoll(s), n, ans);
      s.at(i) = '0';
    }
  }
}

int main() {
  bool debug = false;

  ll t; cin >> t;
  for (ll i=0;i<t;i++) {
    ll n; cin >> n;
    string s; cin >> s;
    ll N = 1 << n;

    if (s.at(s.size()-1) == '1') {
      if (debug) cout << "firstNo: " << s << endl;
      cout << "No" << endl;
      continue;
    }

    bool ans = false;
    dfs('0' + s, 0, N-1, ans);
    if (ans) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }


    // set<ll> dst;
    // for (ll j=0;j<N-1;j++) {
    //   if (s.at(j) == '1') {
    //     dst.insert(j + 1);
    //   }
    // }

    // vector<bool> dp(N, false);
    // dp.at(0) = true;
    // for (ll j=1;j<N;j++) {
    //   if (dst.count(j)) {
    //     continue;
    //   }

    //   set<ll> bst;
    //   for (ll k=0;k<N;k++) {
    //     if ((j & (1 << k))> 0){
    //       bst.insert(k);
    //     }
    //   }

    //   // if (debug) {
    //   //   cout << "j: " << j << ", bst: ";
    //   //   for (ll k : bst) {
    //   //     cout << k << " ";
    //   //   }
    //   //   cout << endl;
    //   // }

    //   for (ll k : bst) {
    //     // if (debug) cout << "(" << j << ": " << k << ")" << endl;
    //     ll num = j ^ (1 << k);
    //     if (dp.at(num)) {
    //       dp.at(j) = true;
    //       break;
    //     }
    //   }
    // }

    // if (debug) {
    //   cout << "dp: ";
    //   for (ll j=0;j<N;j++) {
    //     cout << dp.at(j) << " ";
    //   }
    //   cout << endl;
    // }

    // if (dp.at(N - 1)) {
    //   cout << "Yes" << endl;
    // } else {
    //   cout << "No" << endl;
    // }
  }
  return 0;
}