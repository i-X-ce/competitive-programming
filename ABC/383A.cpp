/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n; cin >> n;
  int w, time; cin >> time >> w;
  for (int i=1;i<n;i++){
    int t, v; cin >> t >> v;
    w = max(0, w - (t - time));
    w += v;
    time = t;
  }
  cout << w << endl;
  return 0;
}