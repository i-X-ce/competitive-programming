/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n, k; cin >> n >> k;
  vector<int>a(n+1);
  vector<int>b(n+1);
  for (int i=1;i<=n;i++) cin >> a.at(i);
  for (int i=1;i<=n;i++) cin >> b.at(i);

  vector<bool>dp(n+1, false);
  vector<bool>ep(n+1, false);
  dp.at(1) = ep.at(1) = true;
  for (int i=2;i<=n;i++){
    if (dp.at(i-1)){
      if (abs(a.at(i-1)-a.at(i)) <= k) dp.at(i) = true;
      if (abs(a.at(i-1)-b.at(i)) <= k) ep.at(i) = true;
    }
    if (ep.at(i-1)){
      if (abs(b.at(i-1)-a.at(i)) <= k) dp.at(i) = true;
      if (abs(b.at(i-1)-b.at(i)) <= k) ep.at(i) = true;
    }
  }
  if (dp.at(n) || ep.at(n)) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}