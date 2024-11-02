/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

struct Pos 
{
  int y, x, v;
};

int vy[] = {-1, 0, 1, 0};
int vx[] = {0, 1, 0, -1};
int h, w, k; 
int ans = 0;

void dfs(int y, int x, int v, vector<string>&s, vector<vector<bool>>&mp){
  if (y < 0 || y >= h || x < 0 || x >= w) return;
  if (s.at(y).at(x) == '#' || mp.at(y).at(x)) return;
  if (v == k) {
    ans++;
    return;
  }
  mp.at(y).at(x) = true;
  for (int i=0;i<4;i++){
    dfs(y + vy[i], x + vx[i], v + 1, s, mp);
  }
  mp.at(y).at(x) = false;
}

int main() {
  cin >> h >> w >> k;
  vector<string>s(h);
  for (int i=0;i<h;i++) cin >> s.at(i);
  vector<vector<bool>>mp(h, vector<bool>(w, false));

  for (int i=0;i<h;i++){
    for (int j=0;j<w;j++){
      dfs(i, j, 0, s, mp);
    }
  }
  cout << ans << endl;

  return 0;
}