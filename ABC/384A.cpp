/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n;
  char c1, c2; cin >> n >> c1 >> c2;
  string s; cin >> s;
  for (int i=0;i<n;i++){
    if (s.at(i) != c1) s.at(i) = c2;
  }
  cout << s << endl;
  return 0;
}