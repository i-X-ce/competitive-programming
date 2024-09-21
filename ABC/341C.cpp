/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int h, w, n; cin >> h >> w >> n;
  string t; cin >> t;
  vector<string>s(h);
  for (int i=0;i<h;i++) cin >> s.at(i);
  vector<vector<int>>chart(0, vector<int>(2));
    int x = 0, y = 0;
  {
    for (int i=0;i<n;i++){
      vector<int>bf(2);
      bf.at(0) = y; bf.at(1) = x;
      chart.push_back(bf);

      if (t.at(i) == 'U') y--;
      if (t.at(i) == 'R') x++;
      if (t.at(i) == 'D') y++;
      if (t.at(i) == 'L') x--;
      // cout << x << ":" << y;
    }
    vector<int>bf(2);
    bf.at(0) = y; bf.at(1) = x;
    chart.push_back(bf);
  }
  // for (int i=0;i<n;i++) cout << chart.at(i).at(0);
  // cout << endl;
  int ans = 0;
  for (int i=0;i<h;i++){
    for (int j=0;j<w;j++){
      bool ok = true;
      for (int k=0;k<n+1;k++){
        if(i+chart.at(k).at(0) < 0 || j+chart.at(k).at(1) < 0 || i+chart.at(k).at(0) >= h || j+chart.at(k).at(1) >= w){
          ok = false;
          break;
        }
        if (s.at(i+chart.at(k).at(0)).at(j+chart.at(k).at(1)) != '.'){
          ok = false;
          break;
        }
      }
      ans += ok ? 1 : 0;
    }
  }
  cout << ans << endl;
  return 0;
}