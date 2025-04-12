/*
g++ temp.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  long long n, k; cin >> n >> k;
  long long ans = 0, add = k;
  long long mod = 1000000000;
  vector<long long> a(n+1, 1);
  for (long long i=k;i<n+1;i++){
    if (i < k) continue;
    a.at(i) = add;
    add = (add - a.at(i-k) + mod) % mod;
    add = (add + a.at(i)) % mod;
  }
  cout << a.at(n)%mod << endl;
  return 0;
}