/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n, m; cin >> n >> m;
  vector<int>a(m);
  for (int i=0;i<m;i++) cin >> a.at(i);
  int cnt = 0;
  int apnt = 0;
  for (int i=1;i<=n;i++){
    cout << a.at(apnt) - i << endl;
    cnt++;
    if (i == a.at(apnt)){
      cnt = 0;
      apnt++;
    }
  }
  return 0;
}