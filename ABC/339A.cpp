/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  string s; cin >> s;
  int start = s.rfind('.');
  cout << s.substr(start+1, s.size()-start) << endl;
  return 0;
}