/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  string s; cin >> s;
  vector<int>cnt(26, 0);
  for (int i=0;i<s.size();i++){
    cnt.at(s.at(i)-'a')++;
  }
  vector<int>cnt2(101, 0);
  for (int i=0;i<26;i++){
    if (cnt.at(i) == 0) continue;
    cnt2.at(cnt.at(i))++;
  }
  for (int i=0;i<101;i++){
    if (!(cnt2.at(i) == 0 || cnt2.at(i) == 2)){
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}