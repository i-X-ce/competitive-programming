/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  long long n, m; cin >> n >> m;
  long long ans = 0;
  int mp = bits(m).count();
  if (mp != 0) ans += n * (n / (2 << mp)) * mp;
  else{
    cout << 0 << endl;
    return 0;
  }
  cout << ans % 998244353 << endl;
  return 0;
}