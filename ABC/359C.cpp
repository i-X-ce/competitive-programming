/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  long long sx, sy; cin >> sx >> sy;
  long long tx, ty; cin >> tx >> ty;
  // for (int i=0;i<8;i++){
  //   for (int j=0;j<8;j++){
  //     long long x = 3, y = 3; x++;
  //     if ((x + y) % 2 == 0) x--;
  //     if (x < j) x--;
  //     long long dx = abs(x - j), dy = abs(y - (7 - i));
  //     if (dy + 1 >= dx) cout << dy << " ";
  //     else cout << dy + (dx - dy) / 2 << " ";
  //   }
  //   cout << endl;
  // }
  sx++;
  if ((sx + sy) % 2 == 0) sx--;
  if (sx < tx) sx--;
  long long dx = abs(sx - tx), dy = abs(sy - ty);
  if (dy + 1 >= dx) cout << dy << endl;
  else cout << dy + (dx - dy) / 2 << endl;
  return 0;
}