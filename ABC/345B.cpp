/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  long long x; cin >> x;
  if (x >= 0){
    x = (x / 10) + ((x % 10) == 0 ? 0 : 1);
  }else{
    x /= 10;
  }
  cout << x << endl;
  return 0;
}