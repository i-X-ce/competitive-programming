/*
g++ temp.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0;i<n;i++) cin >> a.at(i);
  int x; cin >> x;
  for (int y : a) { 
    if (y == x) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}