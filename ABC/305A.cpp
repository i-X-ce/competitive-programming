/*
g++ 305A.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n;
  cin >> n;
  int ans;
  ans = n/5;
  if (n%5 >= 3) ans++;
  cout << ans*5 << endl;
  return 0;
}