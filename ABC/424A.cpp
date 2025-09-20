/*
g++ temp.cpp -I ./ac-library 
./a.out
*/
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int a, b, c; cin >> a >> b >> c;
  if (a == b || b == c || c == a) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}