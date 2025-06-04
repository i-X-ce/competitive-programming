/*
g++ temp.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll n; cin >> n;
  set<string> dic;
  for (ll i=0;i<n;i++) {
    string s; cin >> s;
    reverse(s.begin(), s.end());
    dic.insert(s);
  }
  for (string s : dic) {

    reverse(s.begin(), s.end());
    cout << s << endl;
  }
  return 0;
}