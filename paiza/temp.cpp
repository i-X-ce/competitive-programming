/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n, h, w; cin >> n >> h >> w;
  vector<vector<int>> mp(h, vector<int>(w, 0));
  int cnt = 1;
  for (int i=0;i<n*3;i++){
    int x, y, s; cin >> x >> y >> s;
    for (int ii=0;ii<s;ii++) for (int jj=0;jj<s;jj++){
      if (y + ii >= h || x + jj >= w) continue;
      int co = mp.at(y+ii).at(x+jj);
      if (co == 0 || co == cnt) mp.at(y+ii).at(x+jj) = cnt;
      else mp.at(y+ii).at(x+jj) = 6 - co - cnt;
    }
    cnt = cnt % 3 + 1;
  }
  vector<int>ans(4);
  for (int i=0;i<h;i++) for (int j=0;j<w;j++){
    ans.at(mp.at(i).at(j))++;
  }
  cout << ans.at(1) << " " << ans.at(2) << " " << ans.at(3) << endl;
  return 0;
}