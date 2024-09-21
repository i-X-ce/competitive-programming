/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  string t; cin >> t;
  int n; cin >> n;
  map<string, set<int>> search;
  for (int i=0;i<n;i++){
    int an;
    cin >> an;
    for (int j=0;j<an;j++){
      string sn;
      cin >> sn;
      search[sn].insert(i);
    }
  }
  int ans = 0, length = 0;
  string sbf = "";
  for (int i=0;i<n;i++){
    for (int j=0;j<10;j++){
      string sub = t.substr(sbf.size(), 10-j);
      if (search[sub].count(i)){
        sbf += sub;
        ans++;
        cout << sub << endl;
        break;
      }
    }
  }
  if (sbf == t) cout << ans << endl;
  else cout << -1 << endl;
  return 0;
}