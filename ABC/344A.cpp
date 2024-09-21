/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  string s; cin >> s;
  int lcnt = 0;
  string ans = "";
  for (int i=0;i<s.size();i++){
    if (s.at(i) == '|'){
      lcnt++;
      continue;
    }
    if (lcnt != 1){
      ans += s.at(i);
    }
  }
  cout << ans << endl;
  return 0;
}