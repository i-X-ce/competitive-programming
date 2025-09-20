/*
g++ temp.cpp -I ./ac-library 
./a.out
*/
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int n, m, k; cin >> n >> m >> k;
  vector<set<int>> sts(n);
  for (int i = 0; i < k; i++) {
    int a, b; cin >> a >> b;
    a--; b--;
    sts[a].insert(b);
    if (sts[a].size() >= m) {
      cout << (a + 1) << " ";
    }
  }
  cout << endl;
  return 0;
}