/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

struct Pos{
  int y, x, e;
};

void debug(vector<vector<int>> e){
  for (int i=0;i<e.size();i++){
    for (int j=0;j<e.at(0).size();j++){
      cout << e.at(i).at(j) << " ";
    }
    cout << endl;
  }
  cout << endl;
}

int main() {
  int h, w; cin >> h >> w;
  vector<vector<char>>tile(h, vector<char>(w));
  Pos start, goal;
  for (int i=0;i<h;i++){
    for (int j=0;j<w;j++){
      cin >> tile.at(i).at(j);
      if (tile.at(i).at(j) == 'S'){
        start = {i, j, 0};
      }else if (tile.at(i).at(j) == 'T'){
        goal = {i, j, 0};
      }
    }
  }
  int n; cin >> n;
  vector<vector<int>>emap(h, vector<int>(w));
  for (int i=0;i<n;i++){
    int y, x, e; cin >> y >> x >> e;
    emap.at(y-1).at(x-1) = e;
  }

  vector<vector<int>>ecnt(h, vector<int>(w));
  queue<Pos>posq;
  posq.push(start);
  int vy[] = {-1, 0, 1, 0};
  int vx[] = {0, 1, 0, -1};
  do{
    debug(ecnt);
    Pos bf = posq.front();
    cout << bf.y << ":" << bf.x << endl;
    posq.pop();
    if (emap.at(bf.y).at(bf.x) != 0){
      bf.e = emap.at(bf.y).at(bf.x);
      emap.at(bf.y).at(bf.x) = 0;
    }
    if (bf.e < ecnt.at(bf.y).at(bf.x)) continue;
    ecnt.at(bf.y).at(bf.x) = bf.e;
    if (bf.y == goal.y && bf.x == goal.x){
      cout << "Yes" << endl;
      return 0;
    }
    if (bf.e <= 0) continue;
    if (tile.at(bf.y).at(bf.x) == '#') continue;
    for (int i=0;i<4;i++){
      int x = bf.x + vx[i], y = bf.y + vy[i];
      if (x < 0 || y < 0 || x >= w || y >= h) continue;
      // if (bf.e-1 < ecnt.at(y).at(x)) continue;
      posq.push({y, x, bf.e-1});
    }
  }while(!posq.empty());
  cout << "No" << endl;
  return 0;
}