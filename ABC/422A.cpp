/*
g++ temp.cpp
./a.out
*/
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string s; cin >> s;
  int i = stoi(s.substr(0, 1)), j = stoi(s.substr(2, 1));
  if (j >= 8) {
    i += 1;
    j = 1;
  } else {
    j += 1;
  }
  cout << i << "-" << j << endl;
  return 0;
}