/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  string n; cin >> n;
  string ans = "Yes";
  for (int i=1;i<n.size();i++){
    if (n.at(i-1) <= n.at(i)) ans = "No";
  }
  cout << ans << endl;
  return 0;
}