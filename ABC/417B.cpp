/*
g++ temp.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n, m; cin >> n >> m;
  map<int, int> a;
  for (int i=0;i<n;i++) {
    int x; cin >> x;
    a[x]++;
  }
  for (int i=0;i<m;i++) {
    int x; cin >> x;
    a[x]--;
  }
  for (auto p : a) {
    if (p.second > 0) {
      for (int j = 0; j < p.second; j++) {
        cout << p.first << " ";
      }
    }
  }
  cout << endl;
  return 0;
}