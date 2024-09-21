/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n,s,t,w; cin >> n >> s >> t >> w;
  int best = 0;
  if (w >= s && w <= t) best++;
  for (int i=0;i<n-1;i++){
    int a; cin >> a;
    w += a;
    if (w >= s && w <= t) best++;
  }
  cout << best << endl;
  return 0;
}