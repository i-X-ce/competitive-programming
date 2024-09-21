/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n; cin >> n;
  vector<int>p(n);
  for (int i=0;i<n;i++){
    int bfp; cin >> bfp;
    p.at(bfp-1) = i + 1;
  }
  int q; cin >> q;
  for (int i=0;i<q;i++){
    int a, b; cin >> a >> b;
    if (p.at(a-1) )
    cout << (p.at(a-1) >= p.at(b-1) ? b : a) << endl;
  }
  return 0;
}