/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n, m; cin >> n >> m;
  vector<vector<int>>ab(m, vector<int>(2));
  
  for(int i=0;i<m;i++){
    int a, b; cin >> a >> b;
    ab.at(i).at(0) = a - 1;
    ab.at(i).at(1) = b - 1;
  }
  int k; cin >> k;
  vector<vector<int>>cd(k, vector<int>(2));
  for(int i=0;i<k;i++){
    int c, d; cin >> c >> d;
    cd.at(i).at(0) = c - 1;
    cd.at(i).at(1) = d - 1;
  }

  int ans = 0;
  for(int i=0;i<(1 << k);i++){
    bitset<16>bs(i);
    vector<bool>ok(n);
    for(int j=0;j<k;j++){
      if (bs.test(j)) ok.at(cd.at(j).at(0)) = true;
      else ok.at(cd.at(j).at(1)) = true;
    }
    int cnt = 0;
    for(int j=0;j<m;j++) if (ok.at(ab.at(j).at(0)) && ok.at(ab.at(j).at(1))) cnt++;
    ans = max(ans, cnt);
  }
  cout << ans << endl;
  return 0;
}