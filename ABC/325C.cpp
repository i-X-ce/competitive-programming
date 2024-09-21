/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


void dfs(int y, int x, vector<string>&s){
  for (int i=-1;i<=1;i++){
    for (int j=-1;j<=1;j++){
      if ((y+i) < 0 || (y+i) >= s.size() || (x+j) < 0 || (x+j) >= s.at(0).size()) continue;
      if (s.at(y+i).at(x+j) == '#') {
        s.at(y+i).at(x+j) = '.';
        dfs(y+i, x+j, s);
      }
    }
  }
  return;
}

int main() {
  int h,w; cin >> h >> w;
  vector<string>s(h);
  for (int i=0;i<h;i++) cin >> s.at(i);

  int cnt = 0;
  for (int i=0;i<h;i++){
    for (int j=0;j<w;j++){
      if (s.at(i).at(j) == '#'){
        s.at(i).at(j) = '.';
        dfs(i, j, s);
        cnt++;
      }
    }
  }

  cout << cnt << endl;
  return 0;
}