/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n; cin >> n;
  map<long long, long long>mp;
  vector<long long>ans(n);
  for (int i=0;i<n;i++){
    long long a; cin >> a;
    if (!mp.count(a)){
      ans.at(i) = -1;
    }else{
      ans.at(i) = mp[a];
    }
    mp[a] = i + 1;
  }
  for (int i=0;i<n;i++) cout << ans.at(i) << endl;
  return 0;
}