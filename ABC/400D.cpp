/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

struct Data {
  int y, x; // 現在地
  set<pair<int, int>> bw; // 壊したブロックの座標
  int cnt; // 壊した回数
};


int main() {
  int h, w; cin >> h >> w;
  vector<string>s(h);
  for (int i=0;i<h;i++) cin >> s.at(i);
  int a, b, c, d; cin >> a >> b >> c >> d;
  a--; b--; c--; d--;
  queue<Data> q;
  vector<vector<int>> bcnt(h, vector<int>(w, -1)); // 壊した回数
  q.push({a, b, {}, 0});
  bcnt.at(a).at(b) = 0;

  while(!q.empty()){
    Data data = q.front(); q.pop();
    int y = data.y, x = data.x;
    // if (y == c && x == d) continue;

    for (int i=0;i<4;i++){
      int ny = y + dy[i], nx = x + dx[i];
      if (ny < 0 || ny >= h || nx < 0 || nx >= w) continue;
      
      Data ndata = data;
      ndata.y = ny; ndata.x = nx;
      if (s.at(ny).at(nx) == '#' && !data.bw.count({ny, nx})){
        ndata.bw.insert({ny, nx});
        ndata.bw.insert({ny+dy[i], nx+dx[i]});
        ndata.cnt++;
      }
      cout << "y:" << y << " x:" << x << " ny:" << ny << " nx:" << nx << " cnt:" << ndata.cnt << endl;
      if (bcnt.at(ny).at(nx) == -1 || bcnt.at(ny).at(nx) > ndata.cnt){
        bcnt.at(ny).at(nx) = ndata.cnt;
        q.push(ndata);
      }
    }
  }

  cout << bcnt.at(c).at(d) << endl;
  return 0;
}