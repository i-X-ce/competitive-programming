/*
g++ temp.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  string s; cin >> s;
  string ans = "";
  for (int i=0;i<s.size();i++){
    if (s.at(i) >= 'A' && s.at(i) <= 'Z') {
      ans += s.at(i);
    }
  }
  cout << ans << endl;
  return 0;
}