/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n, m, t, k; cin >> n >> m >> t >> k;
  vector<vector<int>>ht(n, vector<int>(m));
  for (int i=0;i<m;i++){
    for (int j=0;j<n;j++){
      cin >> ht.at(j).at(i);
    }
  }
  for (int i=0;i<n;i++){
    int ans = 0;
    for (int j=0;j<m;j++){
      int sum = 0;
      for (int l=0;l<t;l++){
        if (j - l < 0) continue;
        sum += ht.at(i).at(j - l);
      }
      if (sum >= k){
        ans = j + 1;
        break;
      }
    }
    if (ans == 0) cout << "no " << ans << endl;
    else cout << "yes " << ans << endl;
  }
  return 0;
}