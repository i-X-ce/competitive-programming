/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  string s; cin >> s;
  int cnt0 = 0, cnt1 = 0;
  for (int i=0;i<s.size();i++){
    if (s.at(i) == '1') cnt1++;
    else cnt0++;
  }
  cout << min(cnt0, cnt1)*2 << endl;
  return 0;
}