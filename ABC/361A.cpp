/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n, k, x; cin >> n >> k >> x;
  for (int i=0;i<n;i++){
    int a; cin >> a;
    cout << a << " ";
    if (i == k - 1) cout << x << " ";
  }
  cout << endl;
  return 0;
}