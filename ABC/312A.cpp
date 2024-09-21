/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  set<string> ss = { "ACE", "BDF", "CEG", "DFA", "EGB", "FAC", "GBD"};
  string s;
  cin >> s;
  if (ss.count(s)){
    cout << "Yes";
    return 0;
  }
  cout << "No";
  return 0;
}