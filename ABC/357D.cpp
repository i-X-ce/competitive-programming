/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

long long mp(long long bs, long long ex, long long mo){
  long long ans = 1;
  bs %= mo;
  while(ex > 0){
    if (ex % 2 == 1){
      ans = (ans * bs) % mo;
    }
    bs = (bs * bs) % mo;
    ex /= 2;
  }
  return ans;
}

int main() {
  long long MOD = 998244353;
  string s; cin >> s;
  long long n;
  n = stoll(s);
  // long long a = 1;
  // for (int i=0;i<s.size()*n;i++){
  //   a = (a * 10) % v + 1;
  // }
  long long a = (mp(10, s.size(), MOD) - 1 + MOD) % MOD;
  long long b = mp(10, s.size() * n, MOD);
  long long ans = (n * a - b + MOD) % MOD;
  cout << ans << endl;
  return 0;
}