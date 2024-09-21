/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n; cin >> n;
  vector<long long>x(n);
  vector<long long>psum(n);
  cin >> x.at(0) >> psum.at(0);
  for (int i=1;i<n;i++){
    cin >> x.at(i);
    long long p; cin >> p;
    psum.at(i) = psum.at(i-1) + p;
  }
  sort(x.begin(), x.end());
  int q; cin >> q;
  for (int i=0;i<q;i++){
    long long l, r; cin >> l >> r;
    auto lx = lower_bound(x.begin(), x.end(), l);
    auto rx = lower_bound(x.begin(), x.end(), r);
    // cout << distance(x.begin(), rx) - 1 << endl;
    int li = min(n-1, (int)distance(x.begin(), lx)), ri = min(n-1, (int)distance(x.begin(), rx));
    cout << psum.at(li) - psum.at(ri)<< endl;
  }
  return 0;
}