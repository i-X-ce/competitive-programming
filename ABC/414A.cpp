/*
g++ temp.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n, l, r; cin >> n >> l >> r;
  int sum = 0;
  for (int i=0;i<n;i++) {
    int x, y; cin >> x >> y;
    if (l >= x && r <= y) {
      sum ++;
    }
  }
  cout << sum << endl;
  return 0;
}