/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

struct pos
{
  int x, y;
};

float len(pos p1, pos p2){
  return pow(p1.x - p2.x, 2.0) + pow(p1.y - p2.y, 2.0);
}

int main() {
  pos a, b, c;
  cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y;
  bool ok = false;
  if (len(a, b) == len(b, c) + len(c, a)) ok = true;
  if (len(b, c) == len(c, a) + len(a, b)) ok = true;
  if (len(c, a) == len(a, b) + len(b, c)) ok = true;
  if (ok) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}