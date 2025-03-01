/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  long long n; cin >> n;
  long long ans = -1;
  map<long long, long long> mp;
  for (long long i=0;i<n;i++){
    long long a; cin >> a;
    if (mp.count(a)){
      if (ans == -1){
        ans = i - mp[a] + 1;
      } else {
        ans = min(ans, i - mp[a] + 1);
      }
    }
    mp[a] = i;
  }
  cout << ans << endl;
  return 0;
}