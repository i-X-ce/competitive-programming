/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


void draw(vector<vector<char>> &c, int cnt, int y, int x){
  if (cnt <= 0) return;
  int h = 1;
  for (int i=0;i<cnt;i++) h *= 3;
  for (int i=0;i<h/3;i++) for (int j=0;j<h/3;j++){
    c.at(i+y+h/3).at(j+x+h/3) = '.';
  }
  for (int i=-1;i<=1;i++){
    for (int j=-1;j<=1;j++){
      if (i == 0 && j == 0) continue;
      draw(c, cnt-1, y+(i+1)*(h/3), x+(j+1)*(h/3));
    }
  }  
}

int main() {
  int n; cin >> n;
  int h = 1;
  for (int i=0;i<n;i++) h *= 3;
  vector<vector<char>> c(h, vector<char>(h, '#'));
  draw(c, n, 0, 0);
  for (int i=0;i<h;i++){
    for (int j=0;j<h;j++){
      cout << c.at(i).at(j);
    }
    cout << endl;
  }
  return 0;
}