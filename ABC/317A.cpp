/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n, m, p;
  cin >> n >> m >> p;
  n -= m;
  if (n < 0){
    cout << 0 << endl;
    return 0;
  }
  cout << n / p + 1 << endl;
  return 0;
}