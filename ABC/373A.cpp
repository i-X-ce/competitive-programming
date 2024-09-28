/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int sum = 0;
  for (int i=0;i<12;i++){
    string s; cin >> s;
    if (s.size() == i+1) sum++;
  }
  cout << sum << endl;
  return 0;
}