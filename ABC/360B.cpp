/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  string s, t; cin >> s >> t;
  for (int i=1;i<=s.size();i++){
    string bf = "";
    for (int j=0;i*(j+1)-1<s.size();j++){
      bf += s.at(i*(j+1)-1);
    }
    cout << "i:" << i << endl;
    if (bf == t){
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}