/*
g++ temp.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll n; cin >> n;
  ll cnt = 0;
  string s = "";
  for (ll i=0;i<n;i++) {
    string c;
    ll l; 
    cin >> c >> l;
    cnt += l;
    if (cnt > 100) {
      cout << "Too Long" << endl;
      return 0;
    }
    for (ll j=0;j<l;j++) {
      s += c;
    }
  }
  cout << s << endl;
  return 0;
}