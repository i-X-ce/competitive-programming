/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n, k; cin >> n >> k;
  vector<string>s(n);
  for (int i=0;i<n;i++) cin >> s.at(i);
  int ans = 0;
  for (int i=0;i<(1<<n);i++){
    vector<int>cnt(26);
    for (int j=0;j<n;j++){
      if ((i>>j) & 1){
        for (int x=0;x<s.at(j).size();x++) cnt.at(s.at(j).at(x)-'a')++;
      }
    }
    int sum = 0;
    for (int j=0;j<26;j++) if (cnt.at(j) == k) sum++;
    ans = max(ans, sum);
  }
  cout << ans << endl;
  return 0;
}