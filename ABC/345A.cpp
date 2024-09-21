/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  string s; cin >> s;
  if (!(s.at(0) == '<' && s.at(s.size()-1) == '>')){
    cout << "No" << endl;
    return 0;
  }
  for (int i=1;i<s.size()-1;i++){
    if (s.at(i) != '='){
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}