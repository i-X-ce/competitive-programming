/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n, l, r; cin >> n >> l >> r;
  for (int i=0;i<n;i++){
    int a; cin >> a;
    if (l <= a && a <= r) cout << a << " ";
    else if (a < l) cout << l << " ";
    else cout << r << " ";
  }
  cout << endl;
  return 0;
}