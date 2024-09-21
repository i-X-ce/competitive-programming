/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n; cin >> n;
  vector<int>a(n, -5);
  int ans = 0;
  for (int i=0;i<n*2;i++){
    int bf; cin >> bf;
    if (i - a.at(bf-1) == 2) ans++;
    a.at(bf-1) = i;
  }
  cout << ans << endl;
  return 0;
}