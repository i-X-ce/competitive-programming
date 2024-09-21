/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  string s; cin >> s;
  char s0 = s.at(0);
  int ren = 1;
  for (int i=1;i<s.size();i++){
    if (s0 == s.at(i)) ren++;
    else{
      cout << s.at(i-1) << ren;
      ren = 1;
    }
    s0 = s.at(i);
  }
  cout << s.at(s.size()-1) << ren << "\n";
  return 0;
}