/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  map<int, int> mp;
  int n, a; cin >> n;
  for (int i=0;i<n;i++) cin >> a, mp[a]++;
  for (auto it = mp.rbegin(); it != mp.rend(); it++) cout << it->second << endl;
  for (int i=0;i<n-mp.size();i++) cout << 0 << endl;
  return 0;
}