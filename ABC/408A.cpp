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
  int n, s; cin >> n >> s;
  int time = 0;
  for (int i = 0; i < n; i++) {
    int t; cin >> t;
    if (t - time > s) {
      No();
      return 0;
    }
    time = t;
  }
  Yes();
  return 0;
}