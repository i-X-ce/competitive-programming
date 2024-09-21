/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n, k; cin >> n >> k;
  vector<long long>a(n);
  for (int i=0;i<n;i++) cin >> a.at(i);
  sort(a.begin(), a.end());
  long long ans = a.at(n-1) - a.at(0);
  for (int i=0;i<=k;i++){
    ans = min(ans, a.at(i+n-k-1) - a.at(i));
  }
  cout << ans << endl;
  return 0;
}