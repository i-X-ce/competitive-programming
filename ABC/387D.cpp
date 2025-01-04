/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};

struct Pos
{
  int y, x;
  int prev; // 前回の動き
  int sum = 0;
};


int main() {
  int h, w; cin >> h >> w;
  Pos start, goal;
  vector<vector<char>>s(h, vector<char>(w));
  for (int i=0;i<h;i++) for (int j=0;j<w;j++){
    char c; cin >> c;
    s.at(i).at(j) = c;
    if (c == 'S'){
      start = {i, j, -1, 0};
    } else if (c == 'G'){
      goal = {i, j, -1, 0};
    }
  }

  int ans = -1;
  vector<vector<set<int>>>st(h, vector<set<int>>(w));
  queue<Pos> q;
  q.push(start);
  while(!q.empty()){
    Pos p = q.front(); q.pop();
    // cout << p.x << "," << p.y << " prev:" << p.prev << endl;
    if (p.y < 0 || p.y >= h || p.x < 0 || p.x >= w) continue;
    if (s.at(p.y).at(p.x) == '#') continue;
    if (st.at(p.y).at(p.x).count(p.prev % 2)) continue;
    if (p.y == goal.y && p.x == goal.x){
      ans = p.sum;
      break;
    }
    st.at(p.y).at(p.x).insert(p.prev % 2);
    for (int i=0;i<4;i++){
      if (p.prev%2 == i%2 && p.prev != -1) continue;
      q.push({p.y + dy[i], p.x + dx[i], i, p.sum + 1});
    // cout << p.y + dy[i] << "," << p.x + dx[i] << " prev:" << i << endl;
    }
  }
  cout << ans << endl;
  return 0;
}