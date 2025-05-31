/*
g++ temp.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

void Yes() {
  cout << "Yes" << endl;
}

void No() {
  cout << "No" << endl;
}

int main() {
  long long n, m; cin >> n >> m;
  map<long long, vector<long long>> mp;
  for (long long i=0;i<m;i++){
    long long l, r; cin >> l >> r;
    l--; r--;
    mp[l].push_back(r);
  }

  map<long long, long long> dm;
  long long value = 0; 
  long long ans = m;
  for (long long i=0;i<n;i++) {
    for (long long v : mp[i]) {
      dm[v]++;
      value++;
    }
    ans = min(ans, value);
    value -= dm[i];
  }
  cout << ans << endl;
  return 0;
}