/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int y; cin >> y;
  int ans;
  if (y%4 != 0) ans = 365;
  else if (y%100 != 0) ans = 366;
  else if (y%400 != 0) ans = 365;
  else ans = 366;
  cout << ans << endl;
  return 0;
}