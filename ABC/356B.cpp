/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n, m; cin >> n >> m;
  vector<long long>a(m);
  for (int i=0;i<m;i++) cin >> a.at(i);
  vector<long long>sum(m);
  for (int i=0;i<n;i++){
    for (int j=0;j<m;j++){
      long long x; cin >> x;
      sum.at(j) += x;
    }
  }
  bool ok = true;
  for (int i=0;i<m;i++) if (sum.at(i) < a.at(i)) ok = false;
  if (ok) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}