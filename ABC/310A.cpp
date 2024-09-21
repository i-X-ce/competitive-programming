/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,p,q;
  cin >> n >> p >> q;
  vector<int>d(n);
  for (int i=0;i<n;i++) cin >> d.at(i);
  int sum = p;
  sort(d.begin(), d.end());
  int sum2 = d.at(0) + q;
  if (sum > sum2) cout << sum2 << endl;
  else cout << sum << endl; 
  return 0;
}