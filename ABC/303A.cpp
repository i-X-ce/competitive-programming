/*
g++ 303A.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n;
  string s,t;
  cin >> n >> s >> t;
  for (int i=0;i<n;i++){
    if (s.at(i) == 'l') s.at(i) = '1';
    if (t.at(i) == 'l') t.at(i) = '1';
    if (s.at(i) == 'o') s.at(i) = '0';
    if (t.at(i) == 'o') t.at(i) = '0';
    if (s.at(i) != t.at(i)){
      cout << "No";
      return 0;
    }
  }
  cout << "Yes";
  return 0;
}