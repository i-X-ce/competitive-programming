/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int h, w, n;
  cin >> h >> w >> n;
  vector<vector<char>>mapC(h, vector<char>(w, '.'));
  int vx[] = {0, 1, 0, -1};
  int vy[] = {-1, 0, 1, 0};
  int v = 0, x = 0, y = 0;
  for(int i=0;i<n;i++){
    if(mapC.at(y).at(x) == '.'){
      mapC.at(y).at(x) = '#';
      v = (v + 1) % 4;
      y = (y + h + vy[v]) % h; x = (x + w + vx[v]) % w;
      continue;
    }
    mapC.at(y).at(x) = '.';
    v = (v + 3) % 4;
    y = (y + h + vy[v]) % h; x = (x + w + vx[v]) % w;
  }
  for(int i=0;i<h;i++) {
    for (int j=0;j<w;j++) cout << mapC.at(i).at(j);
    cout << endl;
  }
  return 0;
}