/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int h; cin >> h;
  int n = 0, add = 1;
  int cnt = 0;
  while(true){
    n += add;
    cnt++;
    if (n > h){
      cout << cnt << endl;
      return 0;
    }
    n *= 2;
  }
  return 0;
}