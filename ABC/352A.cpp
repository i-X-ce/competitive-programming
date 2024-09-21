/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x, y, z;
  cin >> n >> x >> y >> z;
  if (min(x, y) <= z && z <= max(x, y)) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}