/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s >> s;
  int ans = 0;
  int bf;
  ans = s.find('A');
  bf = s.find('B');
  ans = max(ans, bf);
  bf = s.find('C');
  ans = max(ans, bf);
  cout << ans + 1 << endl;
  return 0;
}