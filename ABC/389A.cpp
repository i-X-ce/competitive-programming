/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  string s; cin >> s;
  int a = s.at(0) - '0';
  int b = s.at(2) - '0';
  cout << a * b << endl;
  return 0;
}