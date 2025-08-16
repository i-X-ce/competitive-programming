/*
g++ temp.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int q; cin >> q;
  vector<int> a(101);
  vector<int> out(0);
  for (int i=0;i<q;i++) {
    int query; cin >> query;
    if (query == 1) {
      int x; cin >> x;
      a.at(x)++;
    } else {
      int min_v = 0;
      for (int j=0;j<a.size();j++) {
        if (a.at(j) > 0) {
          min_v = j;
          a.at(j)--;
          break;
        }
      }
      out.push_back(min_v);
    }
  }
  for (auto v : out) {
    cout << v << endl;
  }
  return 0;
}