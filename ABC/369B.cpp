/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n; cin >> n;
  int l = 0, r = 0, ans = 0;
  for (int i=0;i<n;i++){
    int a; char s; cin >> a >> s;
    if (s == 'L'){
      if (l != 0) ans += abs(a - l);
      l = a;
    }
    else{
      if (r != 0) ans += abs(a - r);
      r = a;
    }
  }
  cout << ans << endl;
  return 0;
}