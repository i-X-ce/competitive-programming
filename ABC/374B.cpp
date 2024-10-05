/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  string s, t; cin >> s >> t;
  for (int i=0;i<max(s.size(), t.size());i++){
    if (i >= s.size() || i >= t.size()){
      cout << i + 1 << endl;
      return 0;
    }
    if (s.at(i) != t.at(i)){
      cout << i + 1<< endl;
      return 0;
    }
  }
  cout << 0 << endl;
  return 0;
}