/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  string s; cin >> s;
  int sum = 0;
  for (int i=1;i<26;i++){
    int length = s.find('A'+i-1)-s.find('A'+i);
    sum += abs(length);
  }
  cout << sum << endl;
  return 0;
}