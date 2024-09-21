/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  string s; cin >> s;
  vector<vector<int>>ans('z'+1, vector<int>(2));
  for (int i='a';i<'z'+1;i++) ans.at(i).at(1) = i;
  for (int i=0;i<s.size();i++){
    ans.at(s.at(i)).at(0)++;
  }
  stable_sort(ans.rbegin(), ans.rend());
  char ansc;
  int maxn = ans.at(0).at(0);
  int cnt = 0;
  while(ans.at(cnt).at(0) >= maxn) ansc = (char)ans.at(cnt++).at(1);
  cout << ansc << endl;
  return 0;
}