/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  string s; cin >> s;
  string t = "";
  int i = 0;
  int index = 0;
  while(true){
    char c = i % 2 == 0 ? 'i' : 'o';
    if (s.at(index) == c) index++;
    t.push_back(c);
    i++;
    if (index >= s.size()) break;
  }
  int ans = t.size() - s.size();
  ans += t.size() % 2;
  cout << ans << endl;
  return 0;
}