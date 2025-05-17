/*
g++ temp.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

void Yes() {
  cout << "Yes" << endl;
}

void No() {
  cout << "No" << endl;
}

int main() {
  int a, b, c, d; cin >>  a >> b >> c >> d;
  int s = a * 60 + b, t = c * 60 + d;
  if (t < s) Yes();
  else No();
  return 0;
}