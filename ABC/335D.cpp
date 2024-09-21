/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

void printAns(vector<vector<int>>ans){
  for (int i=0;i<ans.size();i++){
    for (int j=0;j<ans.size();j++){
      if (ans.at(i).at(j) == 0) cout << "T ";
      else cout << ans.at(i).at(j) << " ";
    }
    cout << endl;
  }
}

int main() {
  int n; cin >> n;
  vector<vector<int>>ryu(n, vector<int>(n));
  int x = 0, y = n-1;
  int vx[] = {1, 0, -1, 0};
  int vy[] = {0, -1, 0, 1};
  int dir = 0;
  for (int i=0;i<n*n-1;i++){
    ryu.at(y).at(x) = i+1;
    x += vx[dir]; y += vy[dir];
    if (x >= n || y >= n || x < 0 || y < 0){
      x -= vx[dir]; y -= vy[dir];
      dir = (dir + 1) % 4;
      x += vx[dir]; y += vy[dir];
    }else if (ryu.at(y).at(x) != 0){
      x -= vx[dir]; y -= vy[dir];
      dir = (dir + 1) % 4;
      x += vx[dir]; y += vy[dir];
    }
  }
  printAns(ryu);
  return 0;
}