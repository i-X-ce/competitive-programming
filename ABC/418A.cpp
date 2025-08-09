/*
g++ temp.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n; cin >> n;
  if (n < 3) {
    cout << "No" << endl;
    return 0;
  }
  string s; cin >> s;

  string str = s.substr(n - 3, 3);
  cout << (str == "tea" ? "Yes" : "No") << endl;
  return 0;
}