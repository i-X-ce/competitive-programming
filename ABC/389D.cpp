/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  long long r; cin >> r;
  long long ans = 0;
  for (long long i=0;i<r;i++){
    ans += floor(sqrt(r*r - pow(0.5+i,2))-0.5);
    // cout << i+0.5 << ":" << floor(sqrt(r*r - pow(0.5+i,2))-0.5) << endl;
  }
  cout << ans * 4 + 1 << endl;
  return 0;
}