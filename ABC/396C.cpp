/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  long long n, m; cin >> n >> m;
  // long long N = min(n, m);
  vector<long long> b(n), w(m), dp(n+1);
  for (long long i=0;i<n;i++) cin >> b.at(i);
  for (long long i=0;i<m;i++) cin >> w.at(i);
  sort(b.rbegin(), b.rend());
  sort(w.rbegin(), w.rend());
  long long ans = 0;
  for (long long i=0;i<n;i++){
    long long value = dp.at(i) + b.at(i);
    dp.at(i+1) = max({value, value + (i >= m ? 0 : w.at(i))});
    ans = max(ans, dp.at(i+1));
  }
  cout << ans << endl;
  return 0;
}