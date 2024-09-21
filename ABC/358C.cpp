/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n, m; cin >> n >> m;
  vector<string>s(n);
  for (int i=0;i<n;i++) cin >> s.at(i);
  int ans = n;
  sort(s.begin(), s.end());
  do {
    vector<bool>chk(m);
    for (int i=0;i<n;i++){
      bool ok = true;
      for (int j=0;j<m;j++){
        if(s.at(i).at(j) == 'o') chk.at(j) = true;
        if (!chk.at(j)) ok = false;
      }
      if (ok) ans = min(ans, i+1);
    }
  } while (next_permutation(s.begin(), s.end()));
  cout << ans << endl;
  return 0;
}