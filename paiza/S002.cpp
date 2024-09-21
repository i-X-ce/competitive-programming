/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int vx[4] = {1, -1, 0, 0};
int vy[4] = {0, 0, 1, -1};

struct Pos
{
  int y, x;
};

int main() {
  int w, h; cin >> w >> h;
  vector<vector<char>>s(h, vector<char>(w));
  Pos start, goal;
  for (int i=0;i<h;i++){
    for (int j=0;j<w;j++){
      char c; cin >> c;
      if (c == 's'){
        start = {i, j};
      }else if (c == 'g'){
        goal = {i, j};
      }
      s.at(i).at(j) = c;
    }
  }
  queue<Pos> q;
  q.push(start);
  vector<vector<int>>smp(h, vector<int>(w));
  while (!q.empty())
  {
    Pos pos = q.front();
    q.pop();
    int hos = smp.at(pos.y).at(pos.x);
    for (int i=0;i<4;i++){
      int x = pos.x + vx[i], y = pos.y + vy[i];
      if (x < 0 || x >= w || y < 0 || y >= h) continue;
      if (s.at(y).at(x) == '1') continue;
      if (smp.at(y).at(x) > 0) continue;
      q.push({y, x});
      smp.at(y).at(x) = hos + 1;
    }
  }
  int ans = smp.at(goal.y).at(goal.x);
  if (ans > 0){
    cout << ans << endl;
  }else{
    cout << "Fail" << endl;
  }
  return 0;
}