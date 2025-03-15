/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  long long n; cin >> n;
  long long x = floor(1 + 6*sqrt(3*(n-1))) / 2, y = 0;
  cout << x << endl;
  while(true){
    y = floor(cbrt(x*x*x - n));
    if (x <= 0){
      break;
    }
    if (n % (x - y) == 0 && x*x + x*y + y*y == n / (x - y)){
      cout << x << " " << y << endl;
      return 0;
    }
    x--;
  }
  cout << -1 << endl;
  return 0;
}