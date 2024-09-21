/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int n, h, w;
bool ans = false;

bool chk(vector<vector<bool>>&mp){
  for (int i=0;i<h;i++){
    for (int j=0;j<w;j++){
      if (!mp.at(i).at(j)) return false;
    }
  }
  return true;
}

void debug(vector<vector<bool>>&mp){
  for (int i=0;i<h;i++){
    for (int j=0;j<w;j++){
      if (mp.at(i).at(j)) cout << 'x';
      else cout << 'o';
    }
    cout << endl;
  }
  cout << endl;
}

void dfs(vector<vector<bool>>mp, int num, vector<vector<int>>&tile){
  if (num >= n || ans) return;
  for (int k=0;k<2;k++){
    for (int i=0;i<h;i++){
      for (int j=0;j<w;j++){
        bool ok = true;
        vector<vector<bool>>mpbf = mp;
        for (int a=0;a<tile.at(num).at(k);a++){
          for (int b=0;b<tile.at(num).at((k+1)%2);b++){
            if (i+a >= h || j+b >= w){
              ok = false;
              continue;
            }
            if (mp.at(i+a).at(j+b)){
              ok = false;
              continue;
            }
            mpbf.at(i+a).at(j+b) = true;
          }
        }
        if (ok){
          mp = mpbf;
          debug(mp);
          ans |= chk(mp);
          dfs(mp, num+1, tile);
        }
      }
    }
  }
}

int main() {
  cin >> n >> h >> w;
  vector<vector<int>>tile(n, vector<int>(2));
  for (int i=0;i<n;i++){
    int a, b; cin >> a >> b;
    tile.at(i).at(0) = a; tile.at(i).at(1) = b;
  }
  vector<vector<bool>>mp(h, vector<bool>(w, false));
  dfs(mp, 0, tile);
  if (ans) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}