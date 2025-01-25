/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int minX, minY, maxX, maxY; //黒マスの最大最小位置
  int h, w; cin >> h >> w;
  vector<string> s(h);
  for (int i=0;i<h;i++){
    cin >> s.at(i);
  }
  bool first = true;
  for (int i=0;i<h;i++) for (int j=0;j<w;j++){
    if (s.at(i).at(j) == '#'){
      if (first){
        minX = j;
        minY = i;
        maxX = j;
        maxY = i;
        first = false;
        continue;
      }
      minX = min(minX, j);
      minY = min(minY, i);
      maxX = max(maxX, j);
      maxY = max(maxY, i);
    }
  }
  for (int i=0;i<h;i++) for (int j=0;j<w;j++){
    if (s.at(i).at(j) == '.' && minX <= j && j <= maxX && minY <= i && i <= maxY){
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}