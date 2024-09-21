/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int a, b;
  cin >> a >> b;
  long long ans1 = 1, ans2 = 1;
  for (int i=0;i<b;i++) ans1 *= a;
  for (int i=0;i<a;i++) ans2 *= b;
  cout << ans1 + ans2 << endl;
  return 0;
}