/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int a, b; cin >> a >> b;
  int ans = 0;
  if (a == b){
    cout << 1 << endl;
    return 0;
  }
  ans = 2;
  if ((a + b) % 2 == 0) ans++;
  cout << ans << endl;
  return 0;
}