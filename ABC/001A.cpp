/*
g++ XXX.cpp
./a.out
*/
//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

void test(int x, int y, vector<string>&c, bool &ok){
  if (ok) return;
  if (x < 0 || y < 0) return;
  if (x >= c.at(0).size() || y >= c.size()) return;
  if (c.at(y).at(x) == '#') return;
  if (c.at(y).at(x) == 'g'){
    ok = true;
    return;
  }
  c.at(y).at(x) = '#';
  test(x+1, y, c, ok);
  test(x-1, y, c, ok);
  test(x, y+1, c, ok);
  test(x, y-1, c, ok);
  return;
}

int main() {
  int h,w,sx,sy;
  cin >> h >> w;
  vector<string>c(h);
  for (int i=0;i<h;i++){
    cin >> c.at(i);
    if (c.at(i).find('s') != -1){
      sx = c.at(i).find('s');
      sy = i;
    }
  }
  bool ok = false;
  test(sx, sy, c, ok);
  if (ok){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
  return 0;
}