/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n, k; cin >> n >> k;
  string s; cin >> s;
  int ans = 0, ren = 0;
  for (int i=0;i<=n;i++){
    if (i == n || s.at(i) == 'X'){
      ans += ren / k;
      ren = 0;
    } else {
      ren++;
    }
  }
  cout << ans << endl;
  return 0;
}