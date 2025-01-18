/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  long long x, n = 1;
  cin >> x;
  for (long long i=1;i<=21;i++){
    n *= i;
    if (n == x){
      cout << i << endl;
      return 0;
    }
  }
  return 0;
}