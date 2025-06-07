/*
g++ temp.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll t; cin >> t;
  for (ll i=0;i<t;i++) {
    ll n; cin >> n;
    string s; cin >> s;
    bool ren = false;
    for (ll j=1;j<n;j++) {
      if (s.at(j-1) >= s.at(j)) {
        char tmp = s.at(j-1);
        s.at(j-1) = s.at(j);
        s.at(j) = tmp;
        ren = true;
      } else {
        if (ren) break;
      }
    }
    cout << s << endl;
  }
  return 0;
}