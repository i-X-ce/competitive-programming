/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  string s; cin >> s;
  if (!('A' <= s.at(0) && s.at(0) <= 'Z')){
    cout << "No" << endl;
    return 0;
  }
  for (int i=0;i<s.size()-1;i++){
    if (!('a' <= s.at(i+1) && s.at(i+1) <= 'z')){
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}