/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  string s; cin >> s;
  char a = s.at(0), b = s.at(1), c = s.at(2);
  cout << b << c << a << " " << c << a << b << endl;
  return 0;
}