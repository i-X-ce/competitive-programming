/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int h, w; cin >> h >> w;
  int yy, xx; cin >> yy >> xx; xx--; yy--;
  vector<string>s(h);
  for (int i=0;i<h;i++) cin >> s.at(i);
  string x; cin >> x;
  for (int i=0;i<x.size();i++){
    int px = xx, py = yy;
    if (x.at(i) == 'L'){
      px--;
    }
    else if (x.at(i) == 'R'){
      px++;
    }
    else if (x.at(i) == 'U'){
      py--;
    }
    else{
      py++;
    }
    if (py < 0 || px < 0 || py >= h || px >= w) continue;
    if (s.at(py).at(px) == '#') continue;
    yy = py; xx = px;
  }
  cout << yy + 1 << " " << xx + 1 << endl;
  return 0;
}