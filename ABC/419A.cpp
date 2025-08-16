/*
g++ temp.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  map<string, string> mp;
  mp["red"] = "SSS";
  mp["blue"] = "FFF";
  mp["green"] = "MMM";
  string s; cin >> s;
  if (mp.count(s)) {
    cout << mp[s] << endl;
  } else {
    cout << "Unknown" << endl;
  }
  return 0;
}