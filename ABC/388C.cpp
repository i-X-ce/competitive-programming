/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n; cin >> n;
  vector<int>a(n);
  for (int i=0;i<n;i++) cin >> a.at(i);
  long long ans = 0;
  sort(a.begin(), a.end());
  for (int i=0;i<n;i++){
    int t = a.at(i);
    auto it = lower_bound(a.begin(), a.end(), t * 2);
    ans += a.end() - it;
  }
  cout << ans << endl;
  return 0;
}