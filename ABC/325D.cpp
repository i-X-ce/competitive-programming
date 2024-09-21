/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n; cin >> n;
  map<long long, set<long long>>mp;
  int cnt = 0;

  for (int i=0;i<n;i++){
    long long t, d; cin >> t >> d;
    if (!mp[t].count(d)){
      mp[t].insert(d);
      cnt++;
    }
  }
  cout << cnt << endl;
  return 0;
}