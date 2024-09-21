/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int a, b, c, d, e, f, g, h, i, j, k, l;
  cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j >> k >> l;
  int x = 0, y = 0, z = 0;
  x = min(d, j) - max(a, g);
  y = min(e, k) - max(b, h);
  z = min(f, l) - max(c, i);
  int ans = x * y * z;
  if (ans > 0){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
  return 0;
}