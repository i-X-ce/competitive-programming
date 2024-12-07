/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

struct Pos
{
  int y, x, c;
};

int dy[] = {0, 0, 1, -1};
int dx[] = {1, -1, 0, 0};


int main() {
  int h, w, d; cin >> h >> w >> d;
  vector<string>s(h);
  for (int i=0;i<h;i++) cin >> s.at(i);
  map<int, map<int, int>>mp;
  queue<Pos>q;
  for (int i=0;i<h;i++){
    for (int j=0;j<w;j++){
      if (s.at(i).at(j) == 'H') q.push({i, j, 0});
    }
  }
  while (!q.empty()){
      Pos p = q.front(); q.pop();
      if (p.y < 0 || p.y >= h || p.x < 0 || p.x >= w) continue;
      if (s.at(p.y).at(p.x) == '#') continue;
      if ((mp[p.y].count(p.x) && p.c >= mp[p.y][p.x]) || p.c > d) continue;
      mp[p.y][p.x] = p.c;
      for (int ii=0;ii<4;ii++){
        q.push({p.y + dy[ii], p.x + dx[ii], p.c + 1});
      }
    }
  int ans = 0;
  for (auto& m: mp) ans += m.second.size();
  cout << ans << endl;
  return 0;
}