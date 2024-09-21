/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  string s;
  cin >> s;
  int start,end;
  start = s.find('A');
  end = s.rfind('Z');
  cout << end - start + 1 << endl;
  return 0;
}