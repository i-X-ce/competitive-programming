/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  string s = "A12BC123DE1234F12345678G";
  char p,q;
  cin >> p >> q;
  int start,end;
  start = s.find(p);
  end = s.find(q);
  cout << abs(start-end) << endl;
  return 0;
}