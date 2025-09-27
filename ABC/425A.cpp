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
  int n; cin >> n;
  int sum = 0;
  for (int i = 1; i <= n; i++) {
    sum += pow(-1, i) * pow(i, 3);
  }
  cout << sum << endl;
  return 0;
}