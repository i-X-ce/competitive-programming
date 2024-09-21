/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n; cin >> n;
  int T = 0, A = 0;
  for (int i=0;i<n;i++){
    int x, y; cin >> x >> y;
    T += x; A += y;
  }
  string s;
  if (T > A) s = "Takahashi";
  else if (T < A) s = "Aoki";
  else s = "Draw";
  cout << s << endl;
  return 0;
}