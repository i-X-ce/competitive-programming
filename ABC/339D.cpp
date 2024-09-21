/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;
int n;

void dfs(int x, int y, vector<string> &s, vector<vector<bool>> &mapB){
  if (x < 0 || y < 0 || x >= n || y >= n) return;
  if (mapB.at(y).at(x) || s.at(y).at(x) == '#') return;
  mapB.at(y).at(x) = true;
  dfs(x, y-1, s, mapB);
  dfs(x+1, y, s, mapB);
  dfs(x, y+1, s, mapB);
  dfs(x-1, y, s, mapB);
}

void dfs2(int x0, int y0, int x1, int y1, int vx0, int vy0, int vx1, int vy1, vector<string> &s, vector<vector<bool>> mapB){
  bool check = x0 < 0 || y0 < 0 || x0 >= n || y0 >= n;
  bool check2 = x1 < 0 || y1 < 0 || x1 >= n || y1 >= n;
  if (check && check2) return;
  x0 = max(0, min(n-1, x0)); y0 = max(0, min(n-1, y0));
  x1 = max(0, min(n-1, x0)); y1 = max(0, min(n-1, y1));
  check |= s.at(y0).at(x0) == '#' || mapB.at(y0).at(x0); check2 |= s.at(y1).at(x1) == '#' || mapB.at(y0).at(x0);
  if (check && check2) return;
  if (s.at(y0).at(x0) == '#'){
    x0 += vx0; y0 += vy0;
  }
  if (s.at(y1).at(x1) == '#'){
    x1 += vx1; y1 += vy1;
  }
}

int main() {
  cin >> n;
  vector<string>s(n);
  for (int i=0;i<n;i++) cin >> s.at(i);
  int x0 = -1, y0, x1, y1;
  for (int i=0;i<n;i++) for (int j=0;j<n;j++){
    if (s.at(i).at(j) == 'P'){
      if (x0 == -1){
        x0 = j; y0 = i;
      }else{
        x1 = j, y1 = i;
      }
    } 
  }
  vector<vector<bool>>mapB(n, vector<bool>(n));
  dfs(x0, y0, s, mapB);
  if (!mapB.at(y1).at(x1)){
    cout << -1 << endl;
    return 0;
  }
  return 0;
}