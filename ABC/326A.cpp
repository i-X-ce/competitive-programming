/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int x, y; cin >> x >> y;
  if (y - x <= 2 && x - y <= 3) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}