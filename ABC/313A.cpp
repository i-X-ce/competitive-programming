/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int>p(n);
  for (int i=0;i<n;i++) cin >> p.at(i);
  int p0 = p.at(0);
  sort(p.begin(), p.end());
  reverse(p.begin(), p.end());
  if (n >= 2 && p0 == p.at(1)){
    cout << 1 << endl;
    return 0;
  }
  if (p0 == p.at(0)){
    cout << 0 << endl;
    return 0;
  }
  cout << p.at(0) - p0 + 1 << endl;
  return 0;
}