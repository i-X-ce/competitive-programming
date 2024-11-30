/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n, d; cin >> n >> d;
  string s; cin >> s;
  int ans = 0;
  for (int i = 0; i < n; i++){
    if (s.at(i) == '.') ans++;
    else {
      if (d > 0){
        ans++;
        d--;
      }
    }
  }
  cout << ans << endl;
  return 0;
}