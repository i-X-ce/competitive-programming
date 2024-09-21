/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int q; cin >> q;
  vector<int>a(0);
  for (int i=0;i<q;i++){
    int x, k; cin >> x >> k;
    if (x == 1) a.push_back(k);
    else cout << a.at(a.size()-k) << endl;
  }
  return 0;
}