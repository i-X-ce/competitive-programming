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
  string s; cin >> s;
  map<char, int> mp;
  for (char c : s) {
    mp[c]++;
  }
  for (auto v : mp){
    if (v.second == 1) {
      cout << v.first << endl;
    }
  }
  return 0;
}