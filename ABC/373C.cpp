/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n; cin >> n;
  long long amax, bmax;
  cin >> amax;
  for (int i=1;i<n;i++){
    long long a; cin >> a;
    amax = max(amax, a);
  }
  cin >> bmax;
  for (int i=1;i<n;i++){
    long long b; cin >> b;
    bmax = max(bmax, b);
  }
  cout << amax + bmax << endl;
  return 0;
}