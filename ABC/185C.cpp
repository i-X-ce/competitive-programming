/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int l; cin >> l;
  __int128 a,b = 1;
  //for (int i=0;i<11;i++) b *= 11 - i;
  a = l-1;
  for (int i=1;i<11;i++){
    a = a * (l - i - 1) / (i + 1);
  }
  long long ans = a;
  cout << ans << endl;
  return 0;
}