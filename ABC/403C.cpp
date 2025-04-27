/*
g++ temp.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  long long n, m, q; cin >> n >> m >> q;
  set<long long> qs; // コンテストページが有効なら入れる
  map<long long, set<long long>> ump; // コンテストページごとのユーザーのマップ
  for (long long i=0;i<q;i++){
    long long a; cin >> a;
    if (a == 1) {
      long long x, y; cin >> x >> y;
      ump[x].insert(y);
    } else if (a == 2) {
      long long x; cin >> x;
      qs.insert(x);
    } else {
      long long x, y; cin >> x >> y;
      if (qs.count(x) || ump[x].count(y)){
        cout << "Yes" << endl;
      } else {
        cout << "No" << endl;
      }
    }
  }
  return 0;
}