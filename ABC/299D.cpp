/*
g++ temp.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  string s;
  ll k; cin >> s >> k;
  vector<ll> dots(0);
  for (ll i=0;i<s.size();i++) {
    if (s.at(i) == '.') dots.push_back(i);
  }
  ll sti = 0, edi = k-1, ans = 0;
  if (dots.size() < k) {
    cout << s.size() << endl;
    return 0;
  }
  for (ll i=0;i<(ll)dots.size()-k+1;i++) {
    ll st = 0, ed = s.size()-1;
    if (sti - 1 >= 0) {
      st = dots.at(sti-1) + 1;
    }
    if (edi + 1 < dots.size()) {
      ed = dots.at(edi+1) - 1;
    }
    ans = max(ans, ed - st + 1);
    // if (ans == 5) {
    //   cout << "st: " << st << ", ed: " << ed << ", ans: " << ans << endl;
    // }
    sti++; edi++;
  }
  cout << ans << endl;
  return 0;
}