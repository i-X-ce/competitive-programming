/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int h, w;
int vy[] = {-1, 0, 1, 0};
int vx[] = {0, 1, 0, -1};

int dfs(int y, int x, vector<string> &s, vector<vector<bool>> mp){
  if (y < 0 || y >= h || x < 0 || x >= w) return 0;
  if (mp.at(y).at(x)) return 0;
  if (s.at(y).at(x) == '#') return 0;
  for (int i=0;i<4;i++){
    int bfy = min(max(y + vy[i],0),h-1);
    int bfx = min(max(x + vx[i],0),w-1);
    if (s.at(bfy).at(bfx) == '#') return 1;
  }
  cout << x << " " << y << endl;
  mp.at(y).at(x) = true;
  int sum = 1;
  for (int i=0;i<4;i++){
    sum += dfs(y + vy[i], x + vx[i], s, mp);
  }
  return sum;
}

int main() {
  cin >> h >> w;
  vector<string>s(h);
  for (int i=0;i<h;i++) cin >> s.at(i);
  int ans = 0;
  vector<vector<bool>> mp(h, vector<bool>(w));
  for (int i=0;i<h;i++){
    for (int j=0;j<w;j++){
      ans = max(ans, dfs(i, j, s, mp));
    }
  }
  cout << ans << endl;
  return 0;
}