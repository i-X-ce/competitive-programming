/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n; cin >> n;
  vector<vector<vector<int>>> a(n+1, vector<vector<int>>(n+1,vector<int>(n+1, 0)));
  for (int i=0;i<n;i++){
    for (int j=0;j<n;j++){
      for (int k=0;k<n;k++){
         cin >> a.at(i+1).at(j+1).at(k+1);
      }
    }
  }
  vector<vector<vector<long long>>> smp(n+1, vector<vector<long long>>(n+1,vector<long long>(n+1, 0)));
  for (int i=1;i<=n;i++){
    for (int j=1;j<=n;j++){
      for (int k=1;k<=n;k++){
        long long v = a.at(i).at(j).at(k);
        v += smp.at(i-1).at(j).at(k) + smp.at(i).at(j-1).at(k) + smp.at(i).at(j).at(k-1);
        v -= smp.at(i).at(j-1).at(k-1) + smp.at(i-1).at(j).at(k-1) + smp.at(i-1).at(j-1).at(k);
        v += smp.at(i-1).at(j-1).at(k-1);
        smp.at(i).at(j).at(k) = v;
      }
    }
  }
  long long q; cin >> q;
  for (int i=0;i<q;i++){
    int lx, rx, ly, ry, lz, rz;
    cin >> lx >> rx >> ly >> ry >> lz >> rz;
    long long ans = smp.at(rx).at(ry).at(rz);
    ans -= smp.at(lx-1).at(ry).at(rz) + smp.at(rx).at(ly-1).at(rz) + smp.at(rx).at(ry).at(lz-1);
    ans += smp.at(rx).at(ly-1).at(lz-1) + smp.at(lx-1).at(ry).at(lz-1) + smp.at(lx-1).at(ly-1).at(rz);
    ans -= smp.at(lx-1).at(ly-1).at(lz-1);
    cout << ans << endl;
  }
  return 0;
}