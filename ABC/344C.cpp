/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n, m, l, q;
  cin >> n;
  vector<int>a(n); for (int i=0;i<n;i++) cin >> a.at(i);
  cin >> m;
  vector<int>b(m); for (int i=0;i<m;i++) cin >> b.at(i);
  cin >> l;
  vector<int>c(l); for (int i=0;i<l;i++) cin >> c.at(i);
  set<int>ansset;
  for (int i=0;i<n;i++) for (int j=0;j<m;j++) for (int k=0;k<l;k++){
    ansset.insert(a.at(i) + b.at(j) + c.at(k));
  }
  cin >> q;
  vector<int>x(q); for (int i=0;i<q;i++) cin >> x.at(i);
  for (int i=0;i<q;i++){
    if (ansset.count(x.at(i))) cout << "Yes" << endl;
    else cout << "No" << endl;
  }
  return 0;
}