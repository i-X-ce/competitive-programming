/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n; cin >> n;
  int h1; cin >> h1;
  bool ok = true;
  for (int i=1;i<n;i++){
    int h; cin >> h;
    if (h1 < h && ok){
      cout << i + 1 << endl;
      ok = false;
    }
  }
  if (ok){
    cout << -1 << endl;
  }
  return 0;
}