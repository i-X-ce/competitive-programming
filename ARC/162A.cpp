/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int t;
  cin >> t;
  for (int i=0;i<t;i++){
    int n; cin >> n;
    int cnt = 0;
    for (int j=1;j<=n;j++){
      int p; cin >> p;
      if (p > j) cnt++;
    }
    if (cnt == 0) cout << n;
    else cout << cnt;
    cout << endl;
  }
  return 0;
}