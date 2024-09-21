/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  string s; cin >> s;
  s.at(s.size()-1) = '4';
  cout << s << endl;
}