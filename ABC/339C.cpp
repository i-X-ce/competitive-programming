/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n; cin >> n;
  long long sum = 0, minN;
  for (int i=0;i<n;i++){
    int a; cin >> a;
    sum += a;
    minN = min(sum, minN);
  }
  if (minN >= 0) cout << sum << endl;
  else cout << abs(minN) + sum << endl;
  return 0;
}