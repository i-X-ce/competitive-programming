/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n, d; cin >> n >> d;
  vector<int>t(n), l(n);
  for (int i=0;i<n;i++) cin >> t.at(i) >> l.at(i);
  for (int i=1;i<=d;i++){
    vector<int>w(n);
    for (int j=0;j<n;j++){
      l.at(j)++;
      w.at(j) = t.at(j) * l.at(j);
    }
    sort(w.rbegin(), w.rend());
    cout << w.at(0) << endl;
  }
  return 0;
}