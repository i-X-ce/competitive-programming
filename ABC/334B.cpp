/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  long long  a, m, l ,r; cin >> a >> m >> l >> r;
  long long add = 1000000000000000000;
  long long sub = r - l;
  a += add; l += add; r += add;
  long long ans = sub / m;
  if (sub%m != 0) ans++;
  else if (sub%m == 0 && (r%m == a%m || l%m == a%m)) ans++;
  cout << ans << endl;
  return 0;
}