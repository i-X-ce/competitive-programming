/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n; cin >> n;
  vector<int>a(n);
  for (int i=0;i<n;i++) cin >> a.at(i);
  int ans = 0;
  while(true){
    sort(a.rbegin(), a.rend());
    a.at(0)--; a.at(1)--;
    if (a.at(0) < 0 || a.at(1) < 0) break;
    ans++;
  }
  cout << ans << endl;
  return 0;
}