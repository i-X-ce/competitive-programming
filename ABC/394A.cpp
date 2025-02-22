/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  string s, ans = ""; cin >> s;
  for (int i=0;i<s.size();i++){
    if (s.at(i) == '2') ans += '2';
  }
  cout << ans << endl;
  return 0;
}