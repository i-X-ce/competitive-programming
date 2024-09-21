/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  string ans = "";
  for (int i=0;i<s.size();i++){
    if (!(s.at(i) == 'a' || s.at(i) == 'e' || s.at(i) == 'i' || s.at(i) == 'o' || s.at(i) == 'i')){
      ans += s.at(i);
    }
  }
  cout << ans << endl;
  return 0;
}