/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  string s, t; cin >> s >> t;
  int tn = 0;
  for (int i=0;i<t.size();i++){
    if (s.at(tn) == t.at(i)){
      tn++;
      cout << i + 1 << " ";
    }
  }
  cout << endl;
  return 0;
}