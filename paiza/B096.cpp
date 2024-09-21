/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int h, w; cin >> h >> w;
  vector<string>s(h);
  for (int i=0;i<h;i++) cin >> s.at(i);
  vector<vector<bool>>mp(h, vector<bool>(w));
  for (int i=0;i<h;i++){
    for (int j=0;j<w;j++){
      if (s.at(i).at(j) == '#'){
        for (int k=0;k<h;k++) mp.at(k).at(j) = true;
        for (int k=0;k<w;k++) mp.at(i).at(k) = true;
      }
    }
  }
  int cnt = 0;
  for (int i=0;i<h;i++) for (int j=0;j<w;j++) if (mp.at(i).at(j)) cnt++;
  cout << cnt << endl;
  return 0;
}