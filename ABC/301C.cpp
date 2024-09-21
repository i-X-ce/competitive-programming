/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  string s,t;
  cin >> s >> t;
  sort(s.begin(),s.end());
  sort(t.begin(),t.end());
  cout << s;
  if (s.substr(s.rfind('t'),s.size()-s.rfind('t')) != t.substr(t.rfind('t'),t.size()-t.rfind('t'))){
    cout << "No";
  }
  return 0;
}