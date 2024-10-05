/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n; cin >> n;
  vector<long long>k(n);
  long long ans = 0;
  for (int i=0;i<n;i++){
    cin >> k.at(i);
    ans += k.at(i);
  }
  for (int i=0;i<(1<<n);i++){
    bitset<20> bt(i);
    long long a = 0, b = 0;
    for (int j=0;j<n;j++){
      if (bt.test(j)) a += k.at(j);
      else b += k.at(j);
    }
    ans = min(ans, max(a, b));
  }
  cout << ans << endl;
  return 0;
}