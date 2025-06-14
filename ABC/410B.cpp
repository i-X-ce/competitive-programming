/*
g++ temp.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n, q; cin >> n >> q;
  vector<int> b(n), ans(q);
  for (int i=0;i<q;i++) {
    int x; cin >> x; x--;
    if (x == -1) {
      int minn = b.at(b.size() - 1);
      int mini = b.size() - 1;
      for (int j=mini;j>=0;j--) {
        if (b.at(j) <= minn) {
          minn = b.at(j);
          mini = j;
        }
      }
      b.at(mini)++;
      ans.at(i) = mini;
    } else {
      b.at(x)++;
      ans.at(i) = x;
    }
  }
  for (int v : ans) {
    cout << v + 1 << " ";
  }
  cout << endl;
  return 0;
}