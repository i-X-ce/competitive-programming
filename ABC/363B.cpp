/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n, t, p; cin >> n >> t >> p;
  vector<int>l(n);
  for (int i=0;i<n;i++) cin >> l.at(i);
  for (int i=0;i<=100;i++){
    int cnt = 0;
    for (int j=0;j<n;j++){
      if (l.at(j) >= t) cnt++;
      l.at(j)++;
    }
    if (cnt >= p){
      cout << i << endl;
      return 0;
    }
  }
  return 0;
}