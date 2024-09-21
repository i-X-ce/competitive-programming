/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

long long lCalc(long long value){
  return value / 2;
}

long long rCalc(long long value){
  return value % 2 == 0 ? value / 2 : value / 2 + 1;
}

int main() {
  long long n, sum = 0, l, r; cin >> n;
  long long cnt = 2;
  l = n; r = n;
  while(r >= 2){
    sum += n;
    l = lCalc(l);
    r = rCalc(r);
    if (l == 1 || r == 1){
      long long oneCnt = 2 * cnt - n;
      n -= oneCnt;
      cnt -= oneCnt;
    }
    cnt *= 2;
  }
  cout << sum << endl;
  return 0;
}