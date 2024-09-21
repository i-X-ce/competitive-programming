/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n; cin >> n;
  map<int, int>mp;
  long long sum = 0;
  for (int i=0;i<n;i++){
    int a; cin >> a;
    sum += a;
    mp[a]++;
  }
  int q; cin >> q;
  for (int i=0;i<q;i++){
    long long b, c; cin >> b >> c;
    sum -= (b * mp[b] + c * mp[c]);
    mp[c] += mp[b];
    mp[b] = 0;
    sum += c * mp[c];
    cout << sum << endl;
  }
  return 0;
}