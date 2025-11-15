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
  vector<int> aa(3);
  for (auto&& a : aa) cin >> a;
  sort(aa.rbegin(), aa.rend());
  for (auto a : aa) cout << a;
  cout << endl;
  return 0;
}