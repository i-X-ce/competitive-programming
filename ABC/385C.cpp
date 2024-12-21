/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n; cin >> n;
  vector<int>h(n);
  for (int i=0;i<n;i++) {
    cin >> h.at(i);
  }
  int ans = 1;
  for (int i=1;i<=n/2;i++){
    vector<int>sum(n, 1);
    for (int j=0;j<n;j++){
      if (j-i < 0) continue;
      if (h.at(j) == h.at(j-i)){
        sum.at(j) = sum.at(j-i) + 1;
        ans = max(ans, sum.at(j));
      }
    }
  }
  cout << ans << endl;
  return 0;
}