/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n, k; cin >> n >> k;
  map<int, int>mp;
  for (int i=0;i<n;i++){
    int p; cin >> p;
    mp[p-1] = i;
  }
  if (k == 1){
    cout << 0 << endl;
    return 0;
  }
  int ans;
  set<int>chk;
  int minn = mp[1], maxn = mp[n-k];
  for (int i=0;i<k;i++){
    chk.insert(mp[i]);
  }
  ans = *chk.rbegin() - *chk.begin();
  for (int i=1;i<n-k+1;i++){
    chk.erase(mp[i - 1]);
    chk.insert(mp[i+k-1]);
    ans = min(ans, *chk.rbegin() - *chk.begin());
  }
  cout << ans << endl;
  return 0;
}