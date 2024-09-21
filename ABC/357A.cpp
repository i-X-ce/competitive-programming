/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n, m; cin >> n >> m;
  int cnt = 0;
  for (int i=0;i<n;i++){
    int h; cin >> h;
    if (m - h >= 0){
      cnt++;
    }
    m -= h;
  }
  cout << cnt << endl;
  return 0;
}