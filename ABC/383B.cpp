/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int search(vector<string>&s, int x, int y, int d, vector<vector<bool>>&mp){
  int cnt = 0;
  for (int i=y-d;i<=y+d;i++){
    for (int j=x-d;j<=x+d;j++){
      if (i < 0 || i >= s.size() || j < 0 || j >= s.at(0).size()) continue;
      if (abs(y-i) + abs(x-j) > d) continue;
      if (s.at(i).at(j) != '.') continue;
      if (mp.at(i).at(j)) continue;
      mp.at(i).at(j) = true;
      cnt++;
      // cout << "  (y: " << i+1 << ", x:" << j+1 << ")";
    }
  }
  // cout << endl;
  return cnt;
}

int main() {
  int h, w, d; cin >> h >> w >> d;
  vector<string>s(h);
  for (int i=0;i<h;i++) cin >> s.at(i);
  int ans = 0;
  for (int i=0;i<h;i++){
    for (int j=0;j<w;j++){
      vector<vector<bool>>mp(h, vector<bool>(w, false));
      int cnt = search(s, j, i, d, mp);
      if (s.at(i).at(j) == '#') continue;
      for (int ii=0;ii<h;ii++){
        for (int jj=0;jj<w;jj++){
          if (i == ii && j == jj) continue;
          if (s.at(ii).at(jj) == '#') continue;
          vector<vector<bool>>mp2 = mp;
          int cnt2 = search(s, jj, ii, d, mp2);
          ans = max(ans, cnt + cnt2);
          // cout << "y:" << i + 1 << " x:" << j + 1 << " yy:" << ii + 1 << " xx:" << jj + 1 << " cnt:" << cnt << " cnt2:" << cnt2 << " ans:" << cnt + cnt2 << endl;
        }
      }
    }
  }
  cout << ans << endl;
  return 0;
}